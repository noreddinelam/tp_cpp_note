#include "Graph.hpp"
#include "GC.hpp"

int main(int argc, char const *argv[])
{
    set<Vertex *> set;
    Vertex vertex{"chkoukou"};
    set.insert(&vertex);
    cout << vertex;
    return 0;
}
