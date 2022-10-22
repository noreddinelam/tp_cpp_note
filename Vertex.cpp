#include "Vertex.hpp"
#include <iostream>

Vertex::Vertex(string value): value{value} {}

Vertex::Vertex(const Vertex& vertex): value{vertex.value} {}

string Vertex::getValue() const {
    return this->value;
}

int Vertex::getMarked() const {
    return this->marked;
}

void Vertex::setMarked(int marked) {
    this->marked = marked;
}

ostream& operator<<(ostream &out, const Vertex &x) {
    out << "value : " << x.getValue() << endl;
    return out;
}


