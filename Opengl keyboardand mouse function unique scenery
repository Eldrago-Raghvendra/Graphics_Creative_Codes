#include<math.h>
#include <GL/glut.h>  

int day = 0;
int night = 0;
int _stars = 0;

void initGL() {
       gluOrtho2D(-1.0, 1.0, -1.0, 1.0); 
       glEnable(GL_LIGHTING);
       glEnable(GL_LIGHT0);

    glEnable(GL_COLOR_MATERIAL);
}

void circle(float x, float y, double c){

    float x1, y1;
    glBegin(GL_POLYGON);
    for(int i = 0; i < 200; i++){
        float pi = 3.1416;
        float A = (1*2*pi)/25;
        x1 = x + ((c - 0.07) * cos(A));
        y1 = y + (c * sin(A));
        glVertex2f(x1, y1);
    }
    glEnd();
}

void keyboard(unsigned char key, int x, int y){

    
    if( key == 'n' || key == 'N') 
        night = 1;
        
    if( key == 'd' || key == 'D') 
        day = 1;

}




void sky(){
    glColor4f(0.196078, 0.6, 0.8, 1.0);
    glBegin(GL_QUADS);
        glVertex2f(-1.0, 0.2);
        glVertex2f(-1.0, 1.0);
        glVertex2f(1.0, 1.0);
        glVertex2f(1.0, 0.2);
    glEnd();
}


 
 void OnMouseClick(int button, int state, int x, int y)
{
  if (button == GLUT_RIGHT_BUTTON && night == 1) 
  { 
      _stars = 1;
  }	
 
  if (button == GLUT_LEFT_BUTTON ) 
  { 
      exit(0);
  }	

}
 
void field(){
    glColor3f(0.6 , 0.8, 0.196078 );
    glBegin(GL_QUADS);
        glVertex2f(-1.0, 0.2);
        glVertex2f(-1.0, -1.0);
        glVertex2f(1.0, -1.0);
        glVertex2f(1.0, 0.2);
    glEnd();
}

void hill(){
    glColor3f(0.52, 0.37, 0.26);
    glBegin(GL_POLYGON);
        glVertex2f(-1.0, 0.2);
        glVertex2f(-0.7, 0.6);
        glVertex2f(-0.4, 0.2);
    glEnd();  

glColor3f(0.858824, 0.858824, 0.439216);
    glBegin(GL_POLYGON);
        glVertex2f(-0.2, 0.3);
        glVertex2f(-0.7, 0.6);
        glVertex2f(-0.4, 0.2);
    glEnd();  


    glColor3f(0.52, 0.37, 0.26);
    glBegin(GL_POLYGON);
        glVertex2f(-0.4, 0.2);
        glVertex2f(-0.1, 0.6);
        glVertex2f(0.3, 0.2);
    glEnd();  
    
glColor3f(0.858824, 0.858824, 0.439216);
    glBegin(GL_POLYGON);
        glVertex2f(0.4, 0.3);
        glVertex2f(-0.1, 0.6);
        glVertex2f(0.3, 0.2);
    glEnd();      

    glColor3f(0.52, 0.37, 0.26);
    glBegin(GL_POLYGON);
        glVertex2f(0.1, 0.2);
        glVertex2f(0.4, 0.5);
        glVertex2f(0.7, 0.2);
    glEnd(); 
    
glColor3f(0.858824, 0.858824, 0.439216);
    glBegin(GL_POLYGON);
        glVertex2f(0.8, 0.3);
        glVertex2f(0.4, 0.5);
        glVertex2f(0.7, 0.2);
    glEnd();      

    glColor3f(0.52, 0.37, 0.26);
    glBegin(GL_POLYGON);
        glVertex2f(0.7, 0.2);
        glVertex2f(1.0, 0.6);
        glVertex2f(1.0, 0.2);
       
    glEnd();  

}

void house1(){

    glColor3f(1.0, 0.5, 0.0);
    glBegin(GL_QUADS);
        glVertex2f(-0.9, 0.0);
        glVertex2f(-0.9, -0.3);
        glVertex2f(-0.5, -0.3);
        glVertex2f(-0.5, 0.0);
    glEnd();  

    glColor3f(1.0, 1.0, 0.0);
    glBegin(GL_QUADS);
        glVertex2f(-0.5, -0.0);
        glVertex2f(-0.5, -0.3);
        glVertex2f(-0.3, -0.1);
        glVertex2f(-0.3, -0.0);
    glEnd(); 

    glColor3f(0.556863, 0.137255, 0.419608);
    glBegin(GL_QUADS);
        glVertex2f(-1.0, -0.1);
        glVertex2f(-0.8, 0.1);
        glVertex2f(-0.2, 0.1);
        glVertex2f(-0.4, -0.1);
    glEnd(); 

 glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_QUADS);
        glVertex2f(-0.8, -0.2);
        glVertex2f(-0.6, -0.2);
        glVertex2f(-0.6, -0.3);
        glVertex2f(-0.8, -0.3);
    glEnd(); 

}

void river(){
    glColor3f(0.0, 0.0, 1.0);
    glBegin(GL_QUADS);
        glVertex2f(-1.0, -0.6);
        glVertex2f(1.0, 0.2);
        glVertex2f(1.0, 0.0);
        glVertex2f(-0.2, -1.0);
        
    glEnd();
    
    glColor3f(0.0, 0.0, 1.0);
    glBegin(GL_TRIANGLES);
        glVertex2f(-1.0, -0.6);
        glVertex2f(-0.2, -1.0);
        glVertex2f(-1.0, -1.0);
    glEnd();
    
    glColor3f(0.258824, 0.435294, 0.258824);
    glBegin(GL_QUADS);
        glVertex2f(1.0, 0.2);
        glVertex2f(-1.0, -0.6);
        glVertex2f(-1.0, -0.5);
        glVertex2f(0.9, 0.2);
        
        
    glEnd();
    
    glColor3f(0.258824, 0.435294, 0.258824);
    glBegin(GL_QUADS);
        glVertex2f(-0.1, -1.0);
        glVertex2f(1.0, 0.1);
        glVertex2f(1.0, 0.0);
        glVertex2f(-0.2, -1.0);
        
    glEnd();
    
    
}


void stars(){
 glPointSize(2.7);
glBegin(GL_POINTS);
       
      glColor3f(1.0f, 1.0f, 1.0f);
     
      glVertex2f(-0.9f, 0.6f);
      glColor3f(1.0f, 1.0f, 1.0f);
      glVertex2f(-0.7f, 0.8f);
      glColor3f(1.0f, 1.0f, 1.0f);
      glVertex2f(-0.4f, 0.6f);
      glColor3f(1.0f, 1.0f, 1.0f);
      glVertex2f(-0.1f, 0.8f);
      glColor3f(1.0f, 1.0f, 1.0f);
      glVertex2f(0.2f, 0.6f);
      glColor3f(1.0f, 1.0f, 1.0f);
      glVertex2f(0.4f, 0.8f);
      glColor3f(1.0f, 1.0f, 1.0f);
      glVertex2f(0.7f, 0.6f);
      glColor3f(1.0f, 1.0f, 1.0f);
      glVertex2f(0.9f, 0.8f);
      glColor3f(1.0f, 1.0f, 1.0f);
     
      glVertex2f(0.8f, 0.0f);
      glColor3f(1.0f, 1.0f, 1.0f);
     
      glVertex2f(0.6f, -0.2f);
      glColor3f(1.0f, 1.0f, 1.0f);
     
      glVertex2f(0.0f, -0.5f);
      glColor3f(1.0f, 1.0f, 1.0f);
     
      glVertex2f(-0.8f, -0.8f);

glEnd();
 }




void boat1(){

glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_TRIANGLES);
        glVertex2f(0.0, -0.3);
        glVertex2f(0.2, 0.0);
        glVertex2f(0.2, -0.4);
    glEnd();  

glColor3f(0.427, 0.322, 0.176);
    glBegin(GL_QUADS);
        glVertex2f(0.4, -0.3);
        glVertex2f(0.3, -0.4);
        glVertex2f(0.1, -0.4);
        glVertex2f(0.0, -0.3);
    glEnd();
}


void boat2(){

glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_TRIANGLES);
        glVertex2f(-0.2, -0.6);
        glVertex2f(-0.6, -0.6);
        glVertex2f(-0.2, -0.2);
    glEnd();  

glColor3f(0.427, 0.322, 0.176);
    glBegin(GL_QUADS);
        glVertex2f(-0.4, -0.8);
        glVertex2f(-0.1, -0.8);
        glVertex2f(0.1, -0.6);
        glVertex2f(-0.6, -0.6);
    glEnd();
}

void sun(){

    float x1, y1, x2, y2;
    float angle;
    double radius = 0.1;

    x1 = 0.5,y1 = 0.6;
    glColor3f(1.0, 1.0, 0.0);

    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x1,y1);

    for (angle = 1.0; angle < 361.0; angle += 0.2){
        x2 = x1 + sin(angle) * radius;
        y2 = y1 + cos(angle) * radius;
        glVertex2f(x2,y2);
    }

    glEnd();

}

void moon(){

    float x1, y1, x2, y2;
    float angle;
    double radius = 0.1;

    x1 = 0.5, y1 = 0.6;
    glColor3f(1.0, 1.0, 1.0);

    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x1,y1);

    for (angle = 1.0; angle < 361.0; angle += 0.2){
        x2 = x1 + sin(angle) * radius;
        y2 = y1 + cos(angle) * radius;
        glVertex2f(x2,y2);
    }

    glEnd();

}

void display() {
   glClear(GL_COLOR_BUFFER_BIT); 
   
   sky();
   field();
   river();
   hill();
   boat1();
   boat2();
   house1();
   sun();
   
   
    
    
   if(night == 1){
        glEnable(GL_LIGHTING);
        glEnable(GL_LIGHT0);
        moon();
        if(_stars == 1){
            stars();
        }
    }
    if(day == 1){
        glDisable(GL_LIGHTING);
        glDisable(GL_LIGHT0);
        sun();
        day = 0;
        night = 0;
         _stars = 0;
    }
      
   glutSwapBuffers();
   glFlush();

}
   
    void update(int value){
    glutPostRedisplay();
    glutTimerFunc(25, update, 0);
}

int main(int argc, char** argv)
 {
   glutInit(&argc, argv);          
   glutCreateWindow("exp 3");  
   glutInitWindowSize(1000, 1000);   
   glutInitWindowPosition(500, 500); 
   glutDisplayFunc(display); 
   glutKeyboardFunc(keyboard); 
   glutMouseFunc(OnMouseClick); 
    
   initGL();         
   glutTimerFunc(25, update, 0);              
   glutMainLoop();               
   return 0;
   }
