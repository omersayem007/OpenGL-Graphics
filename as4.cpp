#include<GL/gl.h>
#include <GL/glut.h>
#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int x1,s,x2,y2,x3,y3,x4,y4;
int x,y,c;
int xt,yt;
int r1, c1, r2, c2, i, j, k;
int A[5][5], B[5][5], C[5][5], D[5][5], E[5][5];

int mat(){


    A[0][0]=A[1][1]=A[2][2]=1;
    C[0][0]=C[1][1]=C[2][2]=1;

        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
            {
                D[i][j] = 0;
                for (k = 0; k < 3; k++)
                {
                    D[i][j] += A[i][k] * B[k][j] ;
                }
            }
        }

        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
            {
                E[i][j] = 0;
                for (k = 0; k < 3; k++)
                {
                    E[i][j] += D[i][k] * C[k][j] ;
                }
            }
        }
        cout << "Product of matrices\n";

        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
                cout << E[i][j] << "  ";
            cout << "\n";
        }
        return 0;

}



void displaytrans(void)
{
    glClear(GL_COLOR_BUFFER_BIT);

    glColor3f(1,1,0);
    glBegin(GL_POLYGON);
        glVertex2i(x1+x,s+y);
        glVertex2i(x2+x,y2+y);
        glVertex2i(x3+x,y3+y);
        glVertex2i(x4+x,y4+y);
    glEnd();

    glColor3f(0,0,0);
    glBegin(GL_POLYGON);
        glVertex2i(x1,s);
        glVertex2i(x2,y2);
        glVertex2i(x3,y3);
        glVertex2i(x4,y4);
    glEnd();

    glFlush();
}
void displayscale(void)
{
    xt=(abs(x3-x1));
    yt=(abs(y3-s));

    glClear(GL_COLOR_BUFFER_BIT);

    glColor3f(1,1,0);
    glBegin(GL_POLYGON);
        glVertex2i(x1*(-x)+xt,s*(-y)+yt);
        glVertex2i(x2*(-x)+xt,y2*y-yt);
        glVertex2i(x3*x-xt,y3*y-yt);
        glVertex2i(x4*x-xt,y4*(-y)+yt);
    glEnd();

    glColor3f(0,0,0);
    glBegin(GL_POLYGON);
        glVertex2i(x1,s);
        glVertex2i(x2,y2);
        glVertex2i(x3,y3);
        glVertex2i(x4,y4);
    glEnd();

glFlush();
}

void init(void)
{
    glClearColor(1.0, 1.0, 1.0,1.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-600,600,-600,600);
}

int main(int argc, char** argv)
{

        // enter the initial polygonvalues
        cout<<"Enter coordinate values :"<<endl;
        cin>>x1>>s>>x2>>y2>>x3>>y3;

        cout<<"Enter Translation Factor"<<endl;
        cin>>x>>y;


        glutInit(&argc, argv);
        glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
        glutInitWindowSize(800, 800);
        glutInitWindowPosition(100, 100);
        glutCreateWindow("Translation");
        init();
        glutDisplayFunc(displayscale);
        glutMainLoop();



return 0;
}
