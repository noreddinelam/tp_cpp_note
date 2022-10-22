#ifndef GC_H
#define GC_H
#include "Graph.hpp"

//ça se trouve j'ai fait n'importe quoi !
class GC{
    private:
        set<Vertex*> vertices;
        set<Edge*> edges;
    public :
        static GC& getGcInstance();
};


#endif