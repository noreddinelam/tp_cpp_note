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
    Vertex* vertexE = new Vertex("E");
    Vertex* vertexF = new Vertex("F");

    Edge* edgeBC = new Edge(vertexB, vertexC, 2);
    Edge* edgeAC = new Edge(vertexA, vertexC, 1);
    Edge* edgeEF = new Edge(vertexE, vertexF, 2);
    Edge* edgeAD = new Edge(vertexA, vertexD, 4);
    Edge* edgeAB = new Edge(vertexA, vertexB, 5);
    Edge* edgeBD = new Edge(vertexB, vertexD, 5);
    Edge* edgeBE = new Edge(vertexB, vertexE, 6);
    Edge* edgeCD = new Edge(vertexC, vertexD, 6);
    Edge* edgeCE = new Edge(vertexC, vertexE, 6);
    Edge* edgeCF = new Edge(vertexC, vertexF, 7);

    set<Edge *> edges{edgeBC, edgeAC,edgeEF, edgeCF, edgeBE, edgeCD, edgeCE, edgeAD, edgeAB, edgeBD};

    set<Vertex *> vertices{vertexA, vertexB, vertexC, vertexD, vertexE, vertexF};
    Graph graph{vertices, edges}; 
    
    gc->addEdges(edges);
    gc->addVertices(vertices);

    set<Edge*> res = graph.kruskal();

    // cout << graph;
    
    for (set<Edge *>::iterator itr = res.begin(); itr != res.end(); itr++) {
        cout << *(*itr)<<endl;
    }

    cout << graph.poids() << endl;

    // delete gc;
    return 0;
}
