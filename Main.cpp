#include "Graph.hpp"
#include "GC.hpp"

int main(int argc, char const *argv[])
{
    GC* gc = GC::getInstance();
    Vertex *vertex = new Vertex("test");
    Edge *edge = new Edge("val1", "val2", 10);
    gc->addVertex(*vertex);
    gc->addEdge(*edge);
    gc->distruction();
    delete gc;
    return 0;
}
