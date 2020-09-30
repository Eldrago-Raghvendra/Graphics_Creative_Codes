#include <GL/glut.h>
#include <math.h>
#include <stdio.h>
void display()
{
glClear(GL_COLOR_BUFFER_BIT);
glPointSize(3);
float x0=1,y0=1,x1=8,y1=5,x=0,y=0,p=0,dy=0,dx=0,temp1=0,temp2=0,m=0;
printf("enter the value of x0,y0,x1,y1: ");
scanf("%f %f %f %f",&x0,&y0,&x1,&y1);
if(x0<x1){                              
    }else{
     temp1=x0;
     x0=x1;
     x1=temp1;
   }
   if(y0<y1){                             
}else{
     temp2=y0;
     y0=y1;
     y1=temp2;
   }
x=x0;              
y=y0;              
dy=y1-y0;        
dx=x1-x0;          
p=2*dy-dx;           
m=dy/dx;       
glColor3f(1,1,1);
glBegin(GL_POINTS);
    if(m<1){
    while(x<=x1){          
        glVertex2f(x,y);   
        x++;
        if(p<0){               //bresenham condition
            p=p+2*dx;
        }else{
            p=p+2*dy-2*dx; 
            y++;
        }
    }
    }
    if(m>=1){
    while(x<=x1){           
        glVertex2f(x,y);   
        x++;
        if(p<0){               //bresenham condition
            p=p+2*dy;
        }else{
            p=p+2*dx-2*dy; 
            y++;
        }
    }
    }
   
glEnd();
glFlush();
}
int main(int argc,char** argv)
{
glutInit(&argc,argv);
glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
glutInitWindowSize(900,900);
glutInitWindowPosition(300,500);
glutCreateWindow("Bresenham Algo");
glClearColor(0,0,1,1);
gluOrtho2D(-500,500,-500,500);
glutDisplayFunc(display);
glutMainLoop();
return 0;
}

