#include <iostream>
using namespace std;
#include <GL/glut.h>
void myInit()
{
glClearColor(1.0,1.0,1.0,1.0);
glColor3f(0.0,0.0,0.0);
glPointSize(15.0);
gluOrtho2D(0,640,0,400);
}
void MyDisplay(){
glClear( GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
glBegin(GL_POINTS);
glVertex2d(100,100);
glEnd();
glFlush();
}
int main (int argc,char **argv){
glutInit(&argc,argv);
glutInitDisplayMode(GLUT_SINGLE |GLUT_RGB);
glutInitWindowPosition(0,0);
glutInitWindowSize(640,400);
glutCreateWindow("Sample");
myInit();
glutDisplayFunc(MyDisplay);
glutMainLoop();
return 0;
}

