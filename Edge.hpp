#ifndef EDGE_H
#define EDGE_H
#include "Vertex.hpp"


class Edge {
    private :
        Vertex * const source;
        Vertex* const destination;
        int weight;

    public : 
        Edge(string, string, int);
        Edge(Vertex* const,Vertex* const, int);
        Edge(const Edge&);
        virtual ~Edge();
        int getWeight() const;
        void setWeight(const int);
        Vertex* const getSource() const;
        Vertex* const getDestination() const;
        bool operator<(const Edge& edge) const;
};

ostream& operator<<(ostream &out, const Edge &x);

#endif