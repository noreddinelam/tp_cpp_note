#ifndef GRAPH_H
#define GRAPH_H
#include "Vertex.hpp"
#include "Edge.hpp"
#include <set>

struct compareEdgesByWeight
{
    bool operator()(Edge* const left, Edge* const right)
    {
        return (left->getWeight() < right->getWeight());
    }
};

class Graph{
    private: 
        set<Vertex *> vertices;
        set<Edge *, compareEdgesByWeight> edges;
    public:
        Graph(set<Vertex *>&, set<Edge *, compareEdgesByWeight>&);
        Graph(const Graph&);
        virtual ~Graph();
        const set<Vertex *>& getVertices() const;
        const set<Edge *, compareEdgesByWeight>& getEdges() const;
        void ajoute_sommet(Vertex&);
        void ajoute_sommet(string);
        void ajoute_arete(Edge&);
        void ajoute_arete(Vertex&, Vertex&, int);
        void ajoute_arete(string, string, int);
        int poids();
        void symetrise();
        void kruskal(); // must return minimal spanning tree
};

ostream& operator<<(ostream &out, const Graph &x);

#endif
