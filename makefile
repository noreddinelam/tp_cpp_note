CPP=g++ --std=c++11 -Wall

all : Graph clean

Graph : Main.o Edge.o Vertex.o GC.o Graph.o
	$(CPP) -o Graph Main.o Edge.o Vertex.o GC.o Graph.o

Main.o : Main.cpp Edge.hpp Vertex.hpp GC.hpp Graph.hpp
	$(CPP) -c Main.cpp

Edge.o : Edge.cpp Edge.hpp
	$(CPP) -c Edge.cpp

Vertex.o : Vertex.cpp Vertex.hpp
	$(CPP) -c Vertex.cpp

GC.o : GC.cpp GC.hpp
	$(CPP) -c GC.cpp

Graph.o : Graph.cpp Graph.hpp
	$(CPP) -c Graph.cpp

clean :
	rm *.o
