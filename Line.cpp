#include <iostream>
using namespace std;
#include <GL/glut.h>

void myIntit()
{ glClearColor(20,16,18,67);
glColor3f(1.0,0.0,0.0);
glPointSize(15.0);
gluOrtho2D(0,640,0,480);
}
void MyDisplay()
{glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
glBegin(GL_TRIANGLES);
glVertex2d(-100,-100);

glVertex2d(150,200);


glEnd();
glFlush();



}
int main (int argc , char **argv)
{glutInit(&argc,argv);
glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
glutInitWindowPosition(300,300);
glutInitWindowSize(640,400);

glutCreateWindow("sample");
myIntit();
glutDisplayFunc(MyDisplay);
glutMainLoop();
return 0;}


