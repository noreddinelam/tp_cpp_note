#ifndef GRAPH_H
#define GRAPH_H
#include "Vertex.hpp"
#include "Edge.hpp"
#include <set>

class Graph{
    private: 
        set<Vertex> vertices;
        set<Edge> aretes;
    public:
        Graph(set<Vertex>, set<Edge>);
        Graph(const Graph&);
        set<Vertex> getVertices();
        set<Edge> getEdges();
        void ajoute_sommmet(Vertex&);
        void ajoute_sommet(string);
        void ajoute_arete(Edge&);
        void ajoute_arete(Vertex&, Vertex&, int);
        void ajoute_arete(string, string, int);
        int poids();
        void symetrise();
        void kruskal(); // must return minimal spanning
};
ostream& operator<<(ostream &out, const Graph &x);



#endif
