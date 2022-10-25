#include "Graph.hpp"
#include "GC.hpp"

// NB : Chaque création de sommet / arrête est ajoutée à l'ensemble à proprié dans le GC.

int main(int argc, char const *argv[])
{
    // TEST 01 :
    GC* gc = GC::getInstance();
    cout << "Construction of vertices " << endl;
    Vertex* vertexA = new Vertex("A");
    Vertex* vertexB = new Vertex("B");
    Vertex* vertexC = new Vertex("C");
    Vertex* vertexD = new Vertex("D");
    Vertex* vertexE = new Vertex("E");
    Vertex* vertexF = new Vertex("F");
    cout << "----------------------------------" << endl;

    cout << "Construction of edges " << endl;
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
    cout << "----------------------------------" << endl;

    set<Edge *> edges{edgeBC, edgeAC,edgeEF, edgeCF, edgeBE, edgeCD, edgeCE, edgeAD}; // ajout direct dans le set à passer en paramètre.

    set<Vertex *> vertices{vertexA, vertexB, vertexC, vertexD};
    Graph graph{vertices, edges}; // création du graph avec les ensembles passés en paramètres.

    graph.ajoute_sommet(*vertexE); // ajouter un sommet avec la fonction d'ajout.
    graph.ajoute_sommet(*vertexF);

    graph.ajoute_arete(*edgeAB); // ajouter une arrête avec la fonction d'ajout.
    graph.ajoute_arete(*edgeBD);

    cout << graph << endl; // affichage du graph.

    cout << "Tree weight before kruskal : " << graph.poids() << endl; // affichage du poids de l'arbre

    set<Edge*> res = graph.kruskal(); // application de l'algorithme de kruskal qui fait appel aussi a symetrise.
    
    cout << "Minimal spanning tree :" << endl;
    for (set<Edge *>::iterator itr = res.begin(); itr != res.end(); itr++) {
        cout << *(*itr)<<endl;
    }
    cout << "----------------------------" << endl;
    cout << "Tree weight after kruskal (symetrise) : " << graph.poids() << endl << endl; // affichage du poids de l'arbre
    delete gc; // lancer la destruction du GC qui entraine la distruction de tous les objets utilisés.
    return 0;
}
