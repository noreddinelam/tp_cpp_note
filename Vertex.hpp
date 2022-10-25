#ifndef VERTEX_H
#define VERTEX_H

#include<iostream>
using namespace std;

class Vertex {
    private:
        const string value;
        int marked;
    public : 
        Vertex(string);
        Vertex(const Vertex&);
        virtual ~Vertex();
        string getValue() const;
        int getMarked() const;
        void setMarked(int);
        bool operator==(const Vertex& vertex) const;
};

ostream& operator<<(ostream &out, const Vertex &x);

#endif