#include<stdlib.h>
#include<windows.h>
#include<GL/glut.h>

void myDisplay(void)
{
glClear (GL_COLOR_BUFFER_BIT);

glPointSize(4.0);

//-- canvus --//

glBegin(GL_QUADS);
glColor3f (0.0, 0.0, 0.0);

glVertex2i(0, 0);
glVertex2i(140, 0);
glVertex2i(140,140);
glVertex2i(0,140);

glEnd();


//----- white portion -----//

glBegin(GL_POLYGON);
glColor3f (1.0, 1.0, 1.0);

glVertex2i(0, 0);
glVertex2i(140, 20);
glVertex2i(80,20);
glVertex2i(10,90);
glVertex2i(10,120);
glVertex2i(0,120);

glEnd();


//--- yello component -----//

glBegin(GL_POLYGON);
glColor3f (1.0, 1.0, 0.0);

glVertex2i(20, 120);
glVertex2i(20, 90);
glVertex2i(80, 30);
glVertex2i(140, 30);
glVertex2i(140, 80);
glVertex2i(100, 40);
glVertex2i(30, 100);

glEnd();









glBegin(GL_QUADS);
glColor3f (0.0, 0.0, 0.0);

glVertex2i(0, 0);
glVertex2i(140, 0);
glVertex2i(140,140);
glVertex2i(0,140);

glEnd();


//----- white portion -----//

glBegin(GL_POLYGON);
glColor3f (1.0, 1.0, 1.0);

glVertex2i(0, 0);
glVertex2i(140, 20);
glVertex2i(80,20);
glVertex2i(10,90);
glVertex2i(10,120);
glVertex2i(0,120);

glEnd();


//--- yello component -----//

glBegin(GL_POLYGON);
glColor3f (1.0, 1.0, 0.0);

glVertex2i(20, 120);
glVertex2i(20, 90);
glVertex2i(80, 30);
glVertex2i(140, 30);
glVertex2i(140, 80);
glVertex2i(100, 40);
glVertex2i(30, 100);

glEnd();


















//--1st component poligon---//

/*glBegin(GL_POLYGON);
glColor3f (1.0, 1.0, 0.0);
glVertex2i(0, 20);
glVertex2i(0, 50);
glVertex2i(20,50);
glVertex2i(20,40);
glVertex2i(30,40);
glVertex2i(30,60);
glVertex2i(40,60);
glVertex2i(40,70);
glEnd();*/




glFlush ();
}



void myInit (void)
{
glClearColor(0.5,0.5,0.5,0.5);
glColor3f(0.0f, 0.0f, 0.0f);
glPointSize(4.0);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(0.0, 640.0, 0.0, 480.0);

}



int main(int argc, char** argv)
{
glutInit(&argc, argv);
glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize (640, 480);
glutInitWindowPosition (100, 150);
glutCreateWindow ("my first attempt");
glutDisplayFunc(myDisplay);
myInit ();
glutMainLoop();
}
