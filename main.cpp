#include <GL/glut.h>
#include <iostream>
#include <ctime>    // for time
#include "World.h"
using namespace std;

World myWorld(time(0));

void display(){
	glClear( GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT );//I do as the sample code says
	myWorld.display();
	glutSwapBuffers();//I do as sample code commands
}

//int main()
//{
//    World myWorld(time(0));
//
//    myWorld.display();
//
//    char ch;
//
//    while (cin.get(ch) && ch != 'q') {   // q for quit
//        myWorld.simulateOneStep();
//        myWorld.display();
//    }
//
//    return 0;
//}

int main(int argc, char *argv[]){
	//initialize
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DEPTH | GLUT_DOUBLE | GLUT_RGBA);
	glutInitWindowPosition ( 0, 0 ) ;
	glutInitWindowSize (500, 500) ;
	glutCreateWindow( "Ant and Bug Simulation" );
	glOrtho(0, WORLDSIZE, 0, WORLDSIZE, 0, 1);

	//output
	glutDisplayFunc(display);
	glutIdleFunc(display);
	
	//Loop
	glutMainLoop();

	return 0;
}
