#include<GL/glut.h>

void display() {
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1.0, 0.0, 0.0);
	glPointSize(10);
	glBegin(GL_POINTS);
	// 2 points will come
	glVertex2f(10.0, 10.0);
	glVertex2f(150.0, 80.0);
	glVertex2f(100.0, 20.0);
	glVertex2f(200.0, 100.0);
	glEnd();

	//Triangle
	glBegin(GL_LINES);
	glColor3f(0, 1, 0); //color should be specified before vertex
	glVertex2f(10, 10);
	glVertex2f(50, 50);
	glEnd();

	glBegin(GL_LINES);
	glColor3f(0, 1, 0); 
	glVertex2f(50, 50);
	glVertex2f(5, 30);
	glEnd();

	glBegin(GL_LINES);
	glColor3f(0, 1, 0);
	glVertex2f(5, 30);
	glVertex2f(10, 10);
	glEnd();

	//Reactangle
	glBegin(GL_LINES);
	glColor3f(0, 0, 1); 
	glVertex2f(60, 60);
	glVertex2f(80, 60);
	glEnd();

	glBegin(GL_LINES);
	glColor3f(0, 0, 1); 
	glVertex2f(80, 60 );
	glVertex2f(80, 80);
	glEnd();

	glBegin(GL_LINES);
	glColor3f(0, 0, 1); 
	glVertex2f(80, 80);
	glVertex2f(60, 80);
	glEnd();

	glBegin(GL_LINES);
	glColor3f(0, 0, 1); 
	glVertex2f(60, 80);
	glVertex2f(60, 60);
	glEnd();
	
	glFlush();
}

void myinit() {
	glClearColor(1.0, 1.0, 0.0, 1.0); // to change color of window
	glColor3f(1.0, 1.0, 1.0);
	glPointSize(2.5);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0.0, 100.0, 0.0, 200.0);
}

void main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB); //for buffer, since here single buffer
	glutInitWindowSize(500, 500);
	glutInitWindowPosition(0, 0);
	glutCreateWindow("Points");
	glutDisplayFunc(display);

	myinit();
	glutMainLoop();
}