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

    Edge* edgeAB = new Edge(vertexA, vertexB, 1);
    Edge* edgeAC = new Edge(vertexA, vertexC, 2);
    Edge* edgeAD = new Edge(vertexA, vertexD, 2);
    Edge* edgeEC = new Edge(vertexE, vertexC, 12);
    Edge* edgeBC = new Edge(vertexB, vertexC, 3);
    Edge* edgeCD = new Edge(vertexC, vertexD, 24);
    
    set<Edge *> edges{edgeAB,edgeAC, edgeBC, edgeCD};
    
    set<Vertex *> vertices{vertexA, vertexB, vertexC, vertexD};

    Graph graph{vertices, edges};
    
    gc->addEdges(edges);
    gc->addVertices(vertices);

   // cout << graph.poids() << endl;

    graph.symetrise();
    
    set<Edge*> res = graph.kruskal();
     for (set<Edge *>::iterator itr = res.begin(); itr != res.end(); itr++) {
        cout << *(*itr)<<endl;
    }

    //cout << graph.poids() << endl;

    delete gc;
    return 0;
}
