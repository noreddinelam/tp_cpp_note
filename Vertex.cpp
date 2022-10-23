#include "Vertex.hpp"
#include <iostream>

Vertex::Vertex(string value): value{value} {
    cout << "Construction of vertex with " << *this;
}

Vertex::Vertex(const Vertex& vertex): value{vertex.value} {
    cout << "Copy constructor of vertex " << *this;
}

Vertex::~Vertex() {
    cout << "Destruction of Vertex " << *this;
}

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

bool Vertex::operator==(const Vertex& vertex) const {
    return this == &vertex;
}

bool Vertex::operator<(const Vertex& vertex) const {
    return true;
}


