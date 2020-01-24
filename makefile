all: Ant.o Bug.o World.o Organism.o main.o
	g++ *.o -o test.exe -l freeGLUT -l openGL32

Ant.o: Ant.cpp
	g++ Ant.cpp -c -o Ant.o

Bug.o: Bug.cpp
	g++ Bug.cpp -c -o Bug.o

Organism.o: Organism.cpp
	g++ Organism.cpp -c -o Organism.o

World.o: World.cpp
	g++ World.cpp -c -o World.o -l freeGLUT -l openGL32

main.o: main.cpp
	g++ main.cpp -c -o main.o -l freeGLUT -l openGL32

test: all
	test.exe
