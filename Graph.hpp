#ifndef GRAPH_H
#define GRAPH_H
#include "Vertex.hpp"
#include "Edge.hpp"
#include <set>

struct compareEdgesByWeight // Déclaration d'une fonction qui permet de faire la comparaison entre arrêtes avec leur poids.
{
    bool operator()(Edge* const left, Edge* const right)
    {
        return to_string(left->getWeight()) <= to_string(right->getWeight());
    }
};

class Graph{
    private: 
        set<Vertex *> vertices;
        set<Edge *> edges; // création d'un ensemble d'arrête ordonné selon le paramêtre poids.
    public:
        Graph(set<Vertex *>&, set<Edge *>&);
        Graph(const Graph&);
        virtual ~Graph();
        const set<Vertex *>& getVertices() const;
        const set<Edge *>& getEdges() const;
        void ajoute_sommet(Vertex&);
        void ajoute_sommet(string);
        void ajoute_arete(Edge&);
        void ajoute_arete(Vertex&, Vertex&, int);
        void ajoute_arete(string, string, int);
        int poids();
        void symetrise();
        set<Edge *> kruskal();
};

ostream& operator<<(ostream &out, const Graph &x);

#endif
