#ifndef GC_H
#define GC_H
#include "Graph.hpp"

//ça se trouve j'ai fait n'importe quoi !
class GC {
    private:
        static set<Vertex*> vertices;
        static set<Edge*> edges;
        GC(){}
    public :
        static void addVertex( Vertex&);
        static void addEdge(Edge&);
        static void distruction();
};


#endif