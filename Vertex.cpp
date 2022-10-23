#include "Vertex.hpp"
#include <iostream>

Vertex::Vertex(string value): value{value} {}

Vertex::Vertex(const Vertex& vertex): value{vertex.value} {}

Vertex::~Vertex() {
    cout << "Destruction of Vertex" << endl;
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


