#ifndef GC_H
#define GC_H

#include "Vertex.hpp"
#include "Edge.hpp"
#include <set>

class GC {
    private:
        set<Vertex*> vertices;
        set<Edge*> edges;
        static GC* instance;
        GC();
        GC(const GC&);
    public :
        virtual ~GC();
        void addVertex(Vertex&);
        void addEdge(Edge&);
        void distruction();
        static GC *getInstance();
};


#endif