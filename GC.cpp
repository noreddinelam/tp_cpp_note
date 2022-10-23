#include "GC.hpp"

GC* GC::instance = nullptr;

GC::GC():vertices{}, edges{} {}

GC::~GC() {
    cout << "Destruction of GC" << endl;
}

GC* GC::getInstance() {
    if(GC::instance == nullptr) {
        GC::instance = new GC();
    }
    return GC::instance;
}

void GC::addVertex(Vertex&  vertex) {
    instance->vertices.insert(&vertex);
}
void GC::addEdge(Edge& edge) {
    instance->edges.insert(&edge);
}
void GC::distruction() {
    set<Vertex*>::iterator itr = instance->vertices.begin();
    while (itr != instance->vertices.end()) {
        delete (*itr);
        itr = instance->vertices.erase(itr);
    }
}