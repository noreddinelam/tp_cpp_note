#include "Vertex.hpp"
#include "GC.hpp"
#include <iostream>

Vertex::Vertex(string value): value{value} {
    cout << "Construction of vertex with " << *this << endl;
    GC::getInstance()->addVertex(*this);
}

Vertex::Vertex(const Vertex& vertex): value{vertex.value} {
    cout << "Copy constructor of vertex " << *this << endl;
    GC::getInstance()->addVertex(*this);
}

Vertex::~Vertex() {
    cout << "Destruction of Vertex " << *this << endl;
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
    out << x.getValue();
    return out;
}

bool Vertex::operator==(const Vertex& vertex) const {
    return this == &vertex;
}

