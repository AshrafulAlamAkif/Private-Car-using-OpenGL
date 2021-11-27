#include <GL/glut.h>
#include <stdio.h>
#include <GL/gl.h>
#include<math.h>

void init(void){

    glClearColor(0.0, 1.0, 0.0, 1.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0, 600, 0, 300);

}

void math(int x, int y){

    float p;

    glBegin(GL_POLYGON);
    glColor3f(0.2, 0.2, 0.5);
    for(int i=0; i< 360; i++)
    {
        p = i*(3.1416/180);
        glVertex2f(x+35*cos(p), y + 35*sin(p));
    }
    glEnd();

}

void car(){

    glBegin(GL_POLYGON);
    glColor3f(0.2,0.5,0.2);
    glVertex2f(110,110);
    glVertex2f(110,175);
    glVertex2f(460,175);
    glVertex2f(460,110);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3f(0.5,0.2,0.2);
    glVertex2f(160,170);
    glVertex2f(245,245);
    glVertex2f(410,245);
    glVertex2f(450,170);
    glEnd();
    math(210,110);
    math(390,110);

}

void display(){
    glClear(GL_COLOR_BUFFER_BIT);
    car();
    glutSwapBuffers();
    glFlush();

}


int main(int argc,char **argv)
{
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE);
    glutInitWindowPosition(50,50);
    glutInitWindowSize(600,300);
    glutCreateWindow("Private Car, 182-15-2225");
    init();
    glutDisplayFunc(display);
    glutMainLoop();

    return 0;
}
