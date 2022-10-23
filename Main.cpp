#include "Graph.hpp"
#include "GC.hpp"

int main(int argc, char const *argv[])
{
    GC* gc = GC::getInstance();
    delete gc;
    return 0;
}
