#include "Graph.hpp"

Graph::Graph(set<Vertex>& vertices, set<Edge>& edges): vertices{vertices}, edges{edges} {}

Graph::Graph(const Graph& graph): vertices{graph.vertices}, edges{graph.edges} {}

Graph::~Graph() {
    cout << "Destruction of graph" << endl;
}

const set<Vertex>& Graph::getVertices() const {
    return this->vertices;
}

const set<Edge>& Graph::getEdges() const {
    return this->edges;
}

void Graph::ajoute_sommet(Vertex& vertex) {
    this->vertices.insert(vertex);
}

void Graph::ajoute_sommet(string value) {
    this->vertices.insert(Vertex{value});
}

void Graph::ajoute_arete(Edge& edge) {
    this->edges.insert(edge);
}

void Graph::ajoute_arete(Vertex& source, Vertex& destination, int weight) {
    this->edges.insert(Edge{source, destination, weight});
}

void Graph::ajoute_arete(string valSource, string valDestination, int weight) {
    this->edges.insert(Edge{valSource, valDestination, weight});
}

int Graph::poids() {
    int poids = 0;
    for (set<Edge>::iterator itr = this->edges.begin(); itr != this->edges.end(); itr++) {
        poids += (*itr).getWeight();
    }
    return poids;
}

void Graph::symetrise() {
    bool exist;
    set<Edge*> newEdges;
    for (set<Edge>::iterator itr = this->edges.begin(); itr != this->edges.end(); itr++) {
        exist = false;
        for (set<Edge>::iterator itr2; itr2 != this->edges.end(), exist != true; itr2++) {
            if ((*itr).getSource() == (*itr2).getDestination() && (*itr).getDestination() == (*itr2).getSource() && (*itr).getWeight() == (*itr2).getWeight()) {
                exist = true;
            }
        }
        if (!exist) {
            newEdges.insert(new Edge{(*itr).getDestination(), (*itr).getSource(), (*itr).getWeight()});
        }
    }
    for (set<Edge*>::iterator itr = newEdges.begin(); itr != newEdges.end(); itr++) {
        this->edges.insert(*(*itr));
    }
}

ostream& operator<<(ostream &out, const Graph &x) {
    out << "Edges : " << endl;
    for (set<Edge>::iterator itr = x.getEdges().begin(); itr != x.getEdges().end(); itr++) {
        out << (*itr);
    }
    out << "------------------" << endl;

    out << "Vertices : " << endl;
    for (set<Vertex>::iterator itr = x.getVertices().begin(); itr != x.getVertices().end(); itr++) {
        out << (*itr);
    }
    out << "------------------" << endl;
    return out;
}
