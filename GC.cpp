#include "GC.hpp"

void GC::addVertex( Vertex&  vertex) {
    GC::vertices.insert(&vertex);
}
void GC::addEdge(Edge& edge) {
    GC::edges.insert(&edge);
}
void GC::distruction() {
    set<Vertex*>::iterator itr = GC::vertices.begin();
    while (itr != GC::vertices.end()) {
        delete (*itr);
        itr = GC::vertices.erase(itr);
    }
}