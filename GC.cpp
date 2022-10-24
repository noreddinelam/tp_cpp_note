#include "GC.hpp"

GC* GC::instance = nullptr;

GC::GC():vertices{}, edges{} {
    cout << "Construction of GC" << endl;
}

GC::~GC() {
    cout << "Destruction of GC" << endl;
    instance->distruction();
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

void GC::addVertices(set<Vertex *>& vertices) {
    for (set<Vertex*>::iterator itr = vertices.begin(); itr != vertices.end(); itr++) {
        instance->vertices.insert(*itr);
    }
} 

void GC::addEdge(Edge& edge) {
    instance->edges.insert(&edge);
}

void GC::addEdges(set<Edge *, compareEdgesByWeight>& edges) {
    for (set<Edge*>::iterator itr = edges.begin(); itr != edges.end(); itr++) {
        instance->edges.insert(*itr);
    }
}

void GC::distruction() {
    set<Edge*>::iterator itr2 = instance->edges.begin();
    while (itr2 != instance->edges.end()) {
        delete (*itr2);
        itr2 = instance->edges.erase(itr2);
    }

    set<Vertex*>::iterator itr = instance->vertices.begin();
    while (itr != instance->vertices.end()) {
        delete (*itr);
        itr = instance->vertices.erase(itr);
    }
}