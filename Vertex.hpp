#ifndef VERTEX_H
#define VERTEX_H

#include<iostream>
using namespace std;

class Vertex{
    private:
        const string value;
        int marked;
    public : 
        Vertex(string);
        Vertex(const Vertex&);
        string getValue();
        int getMarked();
        void setMarked(int);
};

ostream& operator<<(ostream &out, const Vertex &x);

#endif