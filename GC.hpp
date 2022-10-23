#ifndef GC_H
#define GC_H

#include "Vertex.hpp"
#include "Edge.hpp"
#include <set>

class GC {
    private:
        set<Vertex*> vertices{};
        set<Edge*> edges{};
        GC(){}
    public :
        void addVertex(Vertex&);
        void addEdge(Edge&);
        void distruction();
};


#endif