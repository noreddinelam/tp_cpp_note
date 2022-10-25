#include "Edge.hpp"
#include "GC.hpp"

Edge::Edge(string valSource, string valDestination, int weight): source{new Vertex(valSource)}, destination{new Vertex(valDestination)}, weight{weight} {
    cout << "Construction of edge with " << *this << endl;
    GC::getInstance()->addEdge(*this);
}

Edge::Edge(Vertex* const source, Vertex* const destination, int weight): source{source}, destination{destination}, weight{weight} {
    cout << "Construction of edge with " << *this << endl;
    GC::getInstance()->addEdge(*this);
}

Edge::Edge(const Edge& edge): source{edge.source}, destination{edge.destination}, weight{edge.weight} {
    cout << "Copy constructor of Edge" << *this << endl;
    GC::getInstance()->addEdge(*this);
}

Edge::~Edge() {
    cout << "Destruction of Edge" << *this << endl;
}

int Edge::getWeight() const {
    return this->weight;
}

void Edge::setWeight(const int weight) {
    this->weight = weight;
}

Vertex* const Edge::getSource() const {
    return source;
}

Vertex* const Edge::getDestination() const {
    return destination;
}

ostream& operator<<(ostream &out, const Edge &x) {
    out << "( " << *(x.getSource()) << " , " << *(x.getDestination()) << " , " << x.getWeight() << " )" << endl;
    return out;
}

bool Edge::operator<(const Edge& edge) const {
    return this->weight < edge.weight;
}