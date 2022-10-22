#ifndef VERTEX_H
#define VERTEX_H

#include<iostream>
using namespace std;

class Vertex{

    private:
        const string etiquette;
        int indx;
    public : 
        Vertex(string);
        Vertex(const Vertex&);
        string get_etiquette();
        int get_indx();
        void set_indx(int);
};

ostream& operator<<(ostream &out, const Vertex &x);



#endif