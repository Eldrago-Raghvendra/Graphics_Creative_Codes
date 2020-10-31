#include <GL/glut.h>
#include <stdio.h>
#include <math.h>
void init()
{
    gluOrtho2D(-50,50,-50,50);
}
void display(void)
{
    float xo,yo,x1,y1; 
    printf("Enter xo,yo,x1,y1\n");
    scanf("%f %f %f %f",&xo,&yo,&x1,&y1);
    double m = 0.0;             
    double c = (yo - m*xo);     
    double j = yo;              
    if (x1-xo == 0)
        m = 0;
    else 
        m = (y1-yo)/(x1-xo);
    glBegin(GL_LINE_STRIP);
    glColor3f(1.0f, 1.0f, 0.0f);
    for (int i=xo;i<x1;i++)
    {    
        j=(m*i+c);        
        glVertex2f(i,j);
    }
    glEnd();
    glFlush();
    
}
int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE);
    glutInitWindowSize(400, 300);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("Line");
    gluOrtho2D(-50,50,-50,50);
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
