#include <iostream>
using namespace std;
#include <GL/glut.h>
 struct point { int x; int y;};
 struct Color{ float r,g,b;};

 Color getPixelColor(int x,int y){
 Color color ;
 glReadColor(x,y,1,1,GL_RGB,GL_FLOAT,&color);
 return color;
  }
 void SetPixelColor(x,y,Color color){
 glcolor3f(color.r,color.g,color.b);
 glBegin(GL_POINTS);
 glVertex(x,y);
 glEnd();
 glFlush();
 
 
 }
 void bfill( int x, int y, Color od, Color nw){
Color color;
color =getPixelColor(x,y);
if((color.r != od.r,) && (color.r 
 
 }
 
 
void myInit()
{
glClearColor(1.0,1.0,1.0,0);
glColor3f(0.0,0.0,0.0);
glPointSize(15.0);
gluOrtho2D(0,650,0,480);
}
void MyDisplay()
{
glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
glBegin(GL_LINES);
glVertex2d(100,100);
glVertex2d(200,100);
glVertex2d(100,100);
glVertex2d(100,200);
glVertex2d(100,200);
glVertex2d(200,200);
glVertex2d(200,200);
glVertex2d(200,100);



glEnd();
glFlush();


}




int main(int argc, char **argv)
{
glutInit(&argc,argv);
glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
glutInitWindowPosition(0,0);
glutInitWindowSize(640,480);
glutCreateWindow("polygon");
myInit();
glutDisplayFunc(MyDisplay);
glutMainLoop();
}
