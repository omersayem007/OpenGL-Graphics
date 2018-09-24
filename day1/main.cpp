#include<stdlib.h>
#include<windows.h>
#include<GL/glut.h>

void myDisplay(void)
{
glClear (GL_COLOR_BUFFER_BIT);
glColor3f (0.0, 0.0, 0.0);
glPointSize(4.0);

//------------ship dock---------//
glBegin(GL_POLYGON);
glVertex2i(400,200);
glVertex2i(200,200);
glVertex2i(300,100);
glEnd();


//-----------ship pipe----------//

//1st pipe

glBegin(GL_LINES);
glVertex2i(250,300);
glVertex2i(250,200);
glEnd();

glBegin(GL_LINES);
glVertex2i(250,300);
glVertex2i(280,300);
glEnd();

glBegin(GL_LINES);
glVertex2i(280,300);
glVertex2i(280,200);
glEnd();

//1st pipe smoke

glBegin(GL_TRIANGLES);
glVertex2i(250,320);
glVertex2i(260,330);
glVertex2i(280,320);
glEnd();


//2nd pipe

glBegin(GL_LINES);
glVertex2i(300,200);
glVertex2i(300,300);
glEnd();

glBegin(GL_LINES);
glVertex2i(300,300);
glVertex2i(330,300);
glEnd();

glBegin(GL_LINES);
glVertex2i(330,300);
glVertex2i(330,200);
glEnd();

//3rd pipe

glBegin(GL_LINES);
glVertex2i(350,200);
glVertex2i(350,300);
glEnd();

glBegin(GL_LINES);
glVertex2i(350,300);
glVertex2i(380,300);
glEnd();

glBegin(GL_LINES);
glVertex2i(380,300);
glVertex2i(380,200);
glEnd();



glFlush ();
}

void myInit (void)
{
glClearColor(1.0, 1.0, 1.0, 0.0);
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
