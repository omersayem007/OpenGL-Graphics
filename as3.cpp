#include <stdio.h>
#include <GL/gl.h>
#include <GL/glut.h>
#include <math.h>

void display1(void)
{
    glClear (GL_COLOR_BUFFER_BIT);
    glColor3f (0.0, 0.0, 1.0);
    glPointSize(5.0);



    //int x = 0 ; int r = 36 ; int angle = 90; int d = 1 - r;
    int y = 0; int r = 64 ; int angle = 90; //int d = 1 - r;
    //int y=r;
    int x=r;
    //double theta=0,dtheta=1.0/r;

    //while(y>x)
    while(x>y)
    {
        //theta+=dtheta;
        //if(d<0)
        //{
            //d = d + 2*x + 3 ;
            //x=round(r*cos(theta));

            x=r*cos(angle)+x;
        //}
        //else
        //{
            //d = d + 2*(x-y) + 5 ;
            //y=round(r*sin(theta));
            y=r*sin(angle)+y;
        //}
        //x++;

        //glBegin(GL_POINTS);
        glBegin(GL_POLYGON);
        glVertex2i(x,y);
        glVertex2i(y,x);
        glVertex2i(y,-x);
        glVertex2i(x,-y);
        glVertex2i(-x,-y);
        glVertex2i(-y,-x);
        glVertex2i(-y,x);
        glVertex2i(-x,y);
        glEnd();
    }

    glFlush ();
}

void display2(void)
{
    glClear (GL_COLOR_BUFFER_BIT);
    glColor3f (0.0, 1.0, 1.0);
    glPointSize(5.0);



    int x = 0 ; int r = 6 * 10 ; int d = 1 - r, y = r, a = 3, b = -2;

    while(y>x)
    {
        if(d<0)
        {
            d = d + 2*x + 3 ;
        }
        else
        {
            d = d + 2*(x-y) + 5 ;
            y--;
        }
        x++;

        glBegin(GL_POINTS);
        glVertex2i(x+a,y+b);
        glVertex2i(y+a,x+b);
        glVertex2i(y+a,-x+b);
        glVertex2i(x+a,-y+b);
        glVertex2i(-x+a,-y+b);
        glVertex2i(-y+a,-x+b);
        glVertex2i(-y+a,x+b);
        glVertex2i(-x+a,y+b);
        glEnd();
    }

    glFlush ();
}

void myInit(void)
{
    glClearColor(1.0, 1.0, 1.0, 0.0);
    glColor3f(0.0f, 0.0f, 0.0f);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    gluOrtho2D(-320.0, 320.0, -240.0, 240.0);
}

main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (640, 480);
    glutInitWindowPosition (100, 150);
    glutCreateWindow ("Circle");

    //glutDisplayFunc(display2);
    glutDisplayFunc(display1);
    myInit();
    glutMainLoop();
}
