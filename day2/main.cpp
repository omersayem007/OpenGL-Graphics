#include<stdlib.h>
#include<windows.h>
#include<GL/glut.h>

void myDisplay(void)
{
glClear (GL_COLOR_BUFFER_BIT);
glColor3f (0.0, 0.0, 0.0);
glPointSize(4.0);



for( int x=0; x<400; x+=50){

        for(int y=0; y<=400 ;y+=50){

                if(x%100==0){

                                            if(y%100 == 0){

                        glColor3f(1.0f, 1.0f, 1.0f);
                        glBegin(GL_QUADS);
                        glVertex2i(x,y);
                        glVertex2i(x+50,y);
                        glVertex2i(x+50,y+50);
                        glVertex2i(x,y+50);
                        glEnd();


                    }
                    else{

                        glColor3f(0.0f, 0.0f, 0.0f);
                        glBegin(GL_QUADS);
                        glVertex2i(x,y);
                        glVertex2i(x+50,y);
                        glVertex2i(x+50,y+50);
                        glVertex2i(x,y+50);
                        glEnd();

                    }



                }
                else{

                                 if(y%100 == 0){


                        glColor3f(0.0f, 0.0f, 0.0f);
                        glBegin(GL_QUADS);
                        glVertex2i(x,y);
                        glVertex2i(x+50,y);
                        glVertex2i(x+50,y+50);
                        glVertex2i(x,y+50);
                        glEnd();




                    }
                    else{

                             glColor3f(1.0f, 1.0f, 1.0f);
                        glBegin(GL_QUADS);
                        glVertex2i(x,y);
                        glVertex2i(x+50,y);
                        glVertex2i(x+50,y+50);
                        glVertex2i(x,y+50);
                        glEnd();


                    }




                }



            }

}




glFlush ();
}

void myInit (void)
{
glClearColor(1.0, 0.0, 0.0, 0.0);
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
