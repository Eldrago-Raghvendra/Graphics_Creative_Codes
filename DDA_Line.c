#include <GL/glut.h>
#include <math.h>
#include <stdio.h>
void display()
{
glClear(GL_COLOR_BUFFER_BIT);
glColor3f(1,1,1);
glPointSize(2);
 float dx=0,dy=0,xo,yo,x1,y1,x=0,y=0,xin=0,yin=0,step=0,m=0,temp1=0,temp2=0;
  printf("enter the value of xo,yo,x1,y1: ");
  scanf("%f %f %f %f",&xo,&yo,&x1,&y1);
  if(xo<x1){                         
    }else{
     temp1=xo;
     xo=x1;
     x1=temp1;
   }
   if(yo<y1){                        

  }else{
     temp2=yo;
     yo=y1;
     y1=temp2;
   }
    dx=x1-xo;          
    dy=y1-yo;          
    m=dy/dx;                    
    if(dx>dy){                  
        step=dx;
    }else{
        step=dy;
    }
    xin=dx/step;                  
    yin=dy/step;                  
    glBegin(GL_POINTS);
    glVertex2d(round(xo),round(yo));         
     if(m<1 ){                          //m<1
        while(x<=x1){
            if(x==0){              
                x=xo+xin;
                y=yo+yin;
            }else{                     
                x=x+xin;
                y=y+yin;
            }
            glVertex2d(round(x),round(y));
        }
    }
    else if(m>1){                       //m>1
        while(y<=y1){
            if(x==0){               
                x=xo+xin;
                y=yo+yin;
            }else{                    
                x=x+xin;
                y=y+yin;
            }
           glVertex2d(round(x),round(y));
        }
    }
    else if(m==1){                     //m=1
        while(x<=x1|| y<=y1){
            if(x==0){                   
                x=xo+xin;
                y=yo+yin;
            }else{
                x=x+xin;                   
                y=y+yin;
            }
        glVertex2d(round(x),round(y));
        }
       }
       else if(xo==x1){                 
        while(y<=y1){
            if(y==0){                     
                x=xo+xin;
                y=yo+yin;
            }else{                     
                x=x+xin;
                y=y+yin;
            }
        glVertex2d(round(x),round(y));
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
glutCreateWindow("DDA");
glClearColor(0,0,0,1);
gluOrtho2D(-500,500,-500,500);
glutDisplayFunc(display);
glutMainLoop();
return 0;
}
