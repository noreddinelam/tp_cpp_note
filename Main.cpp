#include "Graph.hpp"
#include "GC.hpp"

int main(int argc, char const *argv[])
{
    // TEST 01 :
    GC* gc = GC::getInstance();
    Vertex* vertexA = new Vertex("A");
    Vertex* vertexB = new Vertex("B");
    Vertex* vertexC = new Vertex("C");
    Vertex* vertexD = new Vertex("D");

    Edge* edgeAB = new Edge(vertexA, vertexB, 2);
    Edge* edgeAC = new Edge(vertexA, vertexC, 3);
    Edge* edgeAD = new Edge(vertexA, vertexD, 1);
    Edge* edgeCD = new Edge(vertexC, vertexD, 8);
    Edge* edgeBD = new Edge(vertexB, vertexD, 5);
    
    set<Edge *> edges{edgeAB, edgeAC, edgeAD, edgeCD, edgeBD};
    
    set<Vertex *> vertices{vertexA, vertexB, vertexC, vertexD};

    Graph graph{vertices, edges};
    
    gc->addEdges(edges);
    gc->addVertices(vertices);

    cout << graph.poids() << endl;

    graph.symetrise();

    cout << graph.poids() << endl;

    delete gc;
    return 0;
}
