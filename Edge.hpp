#ifndef EDGE_H
#define EDGE_H
#include "Vertex.hpp"


class Edge {
    private :
        const Vertex source;
        const Vertex destination;
        int weight;

    public : 
        Edge(string, string, int);
        Edge(const Vertex&,const Vertex&, int);
        Edge(const Edge&);
        int getWeight() const;
        void setWeight(const int);
        const Vertex& getSource() const;
        const Vertex& getDestination() const;
        bool operator<(const Edge& edge) const;
};

ostream& operator<<(ostream &out, const Edge &x);

#endif