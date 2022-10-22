#ifndef EDGE_H
#define EDGE_H
#include "Vertex.hpp"


class Edge {
    private :
        int weight;
        const Vertex source;
        const Vertex destination;

    public : 
        Edge(string, string, int);
        Edge(Vertex&, Vertex&, int);
        Edge(const Edge&);
        int getWeight() const;
        void setWeight(const int);
        const Vertex& getSource() const;
        const Vertex& getDestination() const;
};

ostream& operator<<(ostream &out, const Edge &x);

#endif