#include "Edge.hpp"

Edge::Edge(string valSource, string valDestination, int weight): source{valSource}, destination{valDestination}, weight{weight} {}

Edge::Edge(const Vertex& source,const Vertex& destination, int weight): source{source}, destination{destination}, weight{weight} {}

Edge::Edge(const Edge& edge): source{edge.source}, destination{edge.destination}, weight{edge.weight} {}

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