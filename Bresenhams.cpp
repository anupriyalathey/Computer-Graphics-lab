#include<GL/glut.h>
#include<math.h>

void display() {
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1.0, 0.0, 0.0);
	float x1 = 0;
	float x2 = 8;
	float y1 = 0;
	float y2 = 8;
	float d1 = x2 - x1;
	float d2 = y2 - y1;
	float P = ((2 * d2) - d1);

	glBegin(GL_POINTS);
	float x = x1;
	float y = y1;
	for (int i = 0; i <= d1; i++)
	{
		glVertex2f(x, y);
		if (P < 0)
		{
			x = x + 1;
			P = P + (2 * d2);
		}
		else
		{
			x = x + 1;
			y = y + 1;
			P = P + (2 * d2) - (2 * d1);
		}
	}
	   	
	glEnd();
	glFlush();
}

void myinit() {
	glClearColor(1.0, 1.0, 0.0, 1.0); // to change color of window
	glColor3f(1.0, 1.0, 1.0);
	glPointSize(5);
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