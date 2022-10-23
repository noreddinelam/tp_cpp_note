#include "Edge.hpp"

Edge::Edge(string valSource, string valDestination, int weight): source{valSource}, destination{valDestination}, weight{weight} {
    cout << "Construction of edge with " << *this << endl;
}

Edge::Edge(const Vertex& source,const Vertex& destination, int weight): source{source}, destination{destination}, weight{weight} {
    cout << "Construction of edge with " << *this << endl;
}

Edge::Edge(const Edge& edge): source{edge.source}, destination{edge.destination}, weight{edge.weight} {
    cout << "Copy constructor of Edge" << *this << endl;
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

const Vertex& Edge::getSource() const {
    return source;
}

const Vertex& Edge::getDestination() const {
    return this->destination;
}

ostream& operator<<(ostream &out, const Edge &x) {
    out << "source : " << x.getSource() << " destination : " << x.getDestination() << " weight : " << x.getWeight() << endl;
    return out;
}

bool Edge::operator<(const Edge& edge) const {
    return true;
}