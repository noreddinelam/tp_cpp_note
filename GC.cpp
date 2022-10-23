#include "GC.hpp"

void GC::addVertex(Vertex&  vertex) {
    this->vertices.insert(&vertex);
}
void GC::addEdge(Edge& edge) {
    this->edges.insert(&edge);
}
void GC::distruction() {
    set<Vertex*>::iterator itr = GC::vertices.begin();
    while (itr != GC::vertices.end()) {
        delete (*itr);
        itr = GC::vertices.erase(itr);
    }
}