//#include <windows.h>    // Only for WINDOWS

#include <GL/gl.h>
#include <GL/glut.h>    // Header File For The GLUT Library 	UBUNTU / WINDOWS
//#include <GLUT/glut.h>	  // Header File For The GLUT Library 	MAC OSX

#include <stdio.h>

int windowWidth  = 640;
int windowHeight = 480;

void inicio(void)
{
glClearColor(1, 1, 1, 1);

}

void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT);

    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0,1,0,1);


    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    glBegin(GL_LINE_LOOP);
        glColor3f(0 , 0 , 0);
        glVertex2f(0.001,0.01);//v1 AVENIDA
        glVertex2f(0.999,0.01);//v2 AVENIDA
        glVertex2f(0.999,0.1);//v3 AVENIDA
        glVertex2f(0.001,0.1);//v4 AVENIDA
    glEnd();
    glBegin(GL_LINE_LOOP);
        glColor3f(0 , 0 , 0);
        glVertex2f(0.1,0.1);//v1 TORRE PRÉDIO 1
        glVertex2f(0.3,0.1);//v2 TORRE PRÉDIO 1
        glVertex2f(0.3,0.5);//v3 TORRE PRÉDIO 1
        glVertex2f(0.1,0.5);//v4 TORRE PRÉDIO 1
    glEnd();
     glBegin(GL_LINE_LOOP);
        glColor3f(0 , 0 , 0);
        glVertex2f(0.4,0.1);//v1 TORRE PRÉDIO 2
        glVertex2f(0.6,0.1);//v2 TORRE PRÉDIO 2
        glVertex2f(0.6,0.9);//v3 TORRE PRÉDIO 2
        glVertex2f(0.4,0.9);//v4 TORRE PRÉDIO 2
    glEnd();
    glBegin(GL_LINE_LOOP);
        glColor3f(0 , 0, 0);
        glVertex2f(0.7,0.1);
        glVertex2f(0.9,0.1);
        glVertex2f(0.9,0.3);
        glVertex2f(0.7,0.3);
    glEnd();
    glBegin(GL_POLYGON);
        glColor3f(1 , 1, 1);
        glVertex2f(0.78,0.26);
        glVertex2f(0.82,0.26);
        glVertex2f(0.86,0.30);
        glVertex2f(0.82,0.34);
        glVertex2f(0.78,0.34);
        glVertex2f(0.74,0.30);
     glEnd();
     glBegin(GL_LINE_LOOP);
        glColor3f(0, 0, 0);
        glVertex2f(0.78,0.56);
        glVertex2f(0.82,0.56);
        glVertex2f(0.86,0.60);
        glVertex2f(0.82,0.64);
        glVertex2f(0.78,0.64);
        glVertex2f(0.74,0.60);
     glEnd();
     glBegin(GL_LINE_LOOP);
        glColor3f(0, 0, 0);
        glVertex2f(0.78, 0.56);
        glVertex2f(0.82, 0.56);
        glVertex2f(0.84, 0.54);
        glVertex2f(0.76, 0.54);
     glEnd();
     glBegin(GL_LINE_LOOP);
        glColor3f(0, 0, 0);
        glVertex2f(0.86, 0.598);
        glVertex2f(0.89, 0.598);
        glVertex2f(0.89, 0.602);
        glVertex2f(0.86, 0.602);
    glEnd();
        glBegin(GL_LINE_LOOP);
        glColor3f(0, 0, 0);
        glVertex2f(0.89, 0.598);
        glVertex2f(0.91, 0.598);
        glVertex2f(0.91, 0.602);
        glVertex2f(0.89, 0.602);
    glEnd();
    glBegin(GL_LINE_LOOP);
        glColor3f(0, 0, 0);
        glVertex2f(0.888, 0.602);
        glVertex2f(0.89, 0.602);
        glVertex2f(0.89, 0.63);
        glVertex2f(0.888, 0.63);
    glEnd();
        glBegin(GL_LINE_LOOP);
        glColor3f(0, 0, 0);
        glVertex2f(0.888, 0.574);
        glVertex2f(0.89, 0.574);
        glVertex2f(0.89, 0.602);
        glVertex2f(0.888, 0.602);
    glEnd();
     glBegin(GL_LINE_LOOP);
        glColor3f(0, 0, 0);
        glVertex2f(0.76, 0.58);
        glVertex2f(0.80, 0.58);
        glVertex2f(0.80, 0.62);
        glVertex2f(0.76, 0.62);
        glVertex2f(0.74,0.60);
     glEnd();
    glBegin(GL_LINE_LOOP);
        glColor3f(0 , 0 , 0);
        glVertex2f(0.795,0.64);
        glVertex2f(0.805,0.64);
        glVertex2f(0.805,0.67);
        glVertex2f(0.795,0.67);
    glEnd();
    glBegin(GL_LINE_LOOP);
        glColor3f(0, 0, 0);
        glVertex2f(0.75,0.67);
        glVertex2f(0.85,0.67);
        glVertex2f(0.85,0.672);
        glVertex2f(0.75,0.672);
    glEnd();
      glBegin(GL_LINE_LOOP);
        glColor3f(1.0f, 0.0f, 0.0f);
        glVertex2f(0.79,0.27);
        glVertex2f(0.81,0.27);
        glVertex2f(0.81,0.29);
        glVertex2f(0.82,0.29);
        glVertex2f(0.82,0.31);
        glVertex2f(0.81,0.31);
        glVertex2f(0.81,0.33);
        glVertex2f(0.79,0.33);
        glVertex2f(0.79,0.31);
        glVertex2f(0.78,0.31);
        glVertex2f(0.78,0.29);
        glVertex2f(0.79,0.29);
     glEnd();
     glBegin(GL_QUADS);
        glColor3f(1.0f, 0.0f, 0.0f);
        glVertex2f(0.79,0.27);
        glVertex2f(0.81,0.27);
        glVertex2f(0.81,0.33);
        glVertex2f(0.79,0.33);
    glEnd();
     glBegin(GL_QUADS);
        glColor3f(1.0f, 0.0f, 0.0f);
        glVertex2f(0.78,0.29);
        glVertex2f(0.82,0.29);
        glVertex2f(0.82,0.31);
        glVertex2f(0.78,0.31);
    glEnd();
     glBegin(GL_LINE_LOOP);
        glColor3f(0 , 0, 0);
        glVertex2f(0.78,0.26);
        glVertex2f(0.82,0.26);
        glVertex2f(0.86,0.30);
        glVertex2f(0.82,0.34);
        glVertex2f(0.78,0.34);
        glVertex2f(0.74,0.30);
     glEnd();
    glBegin(GL_LINE_LOOP);
        glColor3f(0 , 0 , 0);
        glVertex2f(0.19,0.5);//v1 BASE ANTENA CENTRAL PRÉDIO 1
        glVertex2f(0.21,0.5);//v2 BASE ANTENA CENTRAL PRÉDIO 1
        glVertex2f(0.21,0.52);//v3 BASE ANTENA CENTRAL PRÉDIO 1
        glVertex2f(0.19,0.52);//v4 BASE ANTENA CENTRAL PRÉDIO 1
    glEnd();
    glBegin(GL_LINE_LOOP);
        glColor3f(0 , 0 , 0);
        glVertex2f(0.49,0.9);//v1 BASE ANTENA CENTRAL PRÉDIO 2
        glVertex2f(0.51,0.9);//v2 BASE ANTENA CENTRAL PRÉDIO 2
        glVertex2f(0.51,0.92);//v3 BASE ANTENA CENTRAL PRÉDIO 2
        glVertex2f(0.49,0.92);//v4 BASE ANTENA CENTRAL PRÉDIO 2
    glEnd();
     glBegin(GL_LINE_LOOP);
        glColor3f(0 , 0 , 0);
        glVertex2f(0.12,0.5);//v1 BASE ANTENA DIREITA PRÉDIO 1
        glVertex2f(0.14,0.5);//v2 BASE ANTENA DIREITA PRÉDIO 1
        glVertex2f(0.14,0.52);//v3 BASE ANTENA DIREITA PRÉDIO 1
        glVertex2f(0.12,0.52);//v4 BASE ANTENA DIREITA PRÉDIO 1
    glEnd();
     glBegin(GL_LINE_LOOP);
        glColor3f(0 , 0 , 0);
        glVertex2f(0.42,0.9);//v1 BASE ANTENA DIREITA PRÉDIO 2
        glVertex2f(0.44,0.9);//v2 BASE ANTENA DIREITA PRÉDIO 2
        glVertex2f(0.44,0.92);//v3 BASE ANTENA DIREITA PRÉDIO 2
        glVertex2f(0.42,0.92);//v4 BASE ANTENA DIREITA PRÉDIO 2
    glEnd();
    glBegin(GL_LINE_LOOP);
        glColor3f(0 , 0 , 0);
        glVertex2f(0.26,0.5);//v1 BASE ANTENA ESQUERA PRÉDIO 1
        glVertex2f(0.28,0.5);//v2 BASE ANTENA ESQUERDA PRÉDIO 1
        glVertex2f(0.28,0.52);//v3 BASE ANTENA ESQUERDA PRÉDIO 1
        glVertex2f(0.26,0.52);//v4 BASE ANTENA ESQUERDA PRÉDIO 1
    glEnd();
     glBegin(GL_LINE_LOOP);
        glColor3f(0 , 0 , 0);
        glVertex2f(0.56,0.9);//v1 BASE ANTENA ESQUERDA PRÉDIO 2
        glVertex2f(0.58,0.9);//v2 BASE ANTENA ESQUERDA PRÉDIO 2
        glVertex2f(0.58,0.92);//v3 BASE ANTENA ESQUERDA PRÉDIO 2
        glVertex2f(0.56,0.92);//v4 BASE ANTENA ESQUERDA PRÉDIO 2
    glEnd();
    glBegin(GL_LINE_LOOP);
        glColor3f(0 , 0 , 0);
        glVertex2f(0.199,0.52);//v1 ANTENA CENTRAL PRÉDIO 1
        glVertex2f(0.201,0.52);//v2 ANTENA CENTRAL PRÉDIO 1
        glVertex2f(0.201,0.62);//v3 ANTENA CENTRAL PRÉDIO 1
        glVertex2f(0.199,0.62);//v4 ANTENA CENTRAL PRÉDIO 1
    glEnd();
     glBegin(GL_LINE_LOOP);
        glColor3f(0 , 0 , 0);
        glVertex2f(0.499,0.92);//v1 ANTENA CENTRAL PRÉDIO 2
        glVertex2f(0.501,0.92);//v2 ANTENA CENTRAL PRÉDIO 2
        glVertex2f(0.501,0.96);//v3 ANTENA CENTRAL PRÉDIO 2
        glVertex2f(0.499,0.96);//v4 ANTENA CENTRAL PRÉDIO 2
    glEnd();
    glBegin(GL_LINE_LOOP);
        glColor3f(0 , 0 , 0);
        glVertex2f(0.129,0.52);//v1 ANTENA DIREITA PRÉDIO 1
        glVertex2f(0.131,0.52);//v2 ANTENA DIREITA PRÉDIO 1
        glVertex2f(0.131,0.58);//v3 ANTENA DIREITA PRÉDIO 1
        glVertex2f(0.129,0.58);//v4 ANTENA DIREITA PRÉDIO 1
    glEnd();
        glBegin(GL_LINE_LOOP);
        glColor3f(0 , 0 , 0);
        glVertex2f(0.429,0.92);//v1 ANTENA DIREITA PRÉDIO 2
        glVertex2f(0.431,0.92);//v2 ANTENA DIREITA PRÉDIO 2
        glVertex2f(0.431,0.94);//v3 ANTENA DIREITA PRÉDIO 2
        glVertex2f(0.429,0.94);//v4 ANTENA DIREITA PRÉDIO 2
    glEnd();
    glBegin(GL_LINE_LOOP);
        glColor3f(0 , 0 , 0);
        glVertex2f(0.269,0.52);//v1 ANTENA ESQUERDA PRÉDIO 1
        glVertex2f(0.271,0.52);//v2 ANTENA ESQUERDA PRÉDIO 1
        glVertex2f(0.271,0.60);//v3 ANTENA ESQUERDA PRÉDIO 1
        glVertex2f(0.269,0.60);//v4 ANTENA ESQUERDA PRÉDIO 1
    glEnd();
    glBegin(GL_LINE_LOOP);
        glColor3f(0 , 0 , 0);
        glVertex2f(0.569,0.92);//v1 ANTENA ESQUERDA PRÉDIO 2
        glVertex2f(0.571,0.92);//v2 ANTENA ESQUERDA PRÉDIO 2
        glVertex2f(0.571,0.98);//v3 ANTENA ESQUERDA PRÉDIO 2
        glVertex2f(0.569,0.98);//v4 ANTENA ESQUERDA PRÉDIO 2
    glEnd();
    glBegin(GL_QUADS);
        glColor3f(1.0f, 0.0f, 0.0f);
        glVertex2f(0.195,0.62);//v1 SINALIZADOR ANTENA CENTRAL PRÉDIO 1
        glVertex2f(0.205,0.62);//v2 SINALIZADOR ANTENA CENTRAL PRÉDIO 1
        glVertex2f(0.205,0.63);//v3 SINALIZADOR ANTENA CENTRAL PRÉDIO 1
        glVertex2f(0.195,0.63);//v4 SINALIZADOR ANTENA CENTRAL PRÉDIO 1
    glEnd();
    glBegin(GL_LINE_LOOP);
        glColor3f(0, 0, 0);
        glVertex2f(0.195,0.62);//v1 SINALIZADOR ANTENA CENTRAL PRÉDIO 1
        glVertex2f(0.205,0.62);//v2 SINALIZADOR ANTENA CENTRAL PRÉDIO 1
        glVertex2f(0.205,0.63);//v3 SINALIZADOR ANTENA CENTRAL PRÉDIO 1
        glVertex2f(0.195,0.63);//v4 SINALIZADOR ANTENA CENTRAL PRÉDIO 1
    glEnd();
     glBegin(GL_QUADS);
        glColor3f(1.0f, 0.0f, 0.0f);
        glVertex2f(0.495,0.96);//v1 SINALIZADOR ANTENA CENTRAL PRÉDIO 2
        glVertex2f(0.505,0.96);//v2 SINALIZADOR ANTENA CENTRAL PRÉDIO 2
        glVertex2f(0.505,0.97);//v3 SINALIZADOR ANTENA CENTRAL PRÉDIO 2
        glVertex2f(0.495,0.97);//v4 SINALIZADOR ANTENA CENTRAL PRÉDIO 2
    glEnd();
    glBegin(GL_LINE_LOOP);
        glColor3f(0, 0, 0);
        glVertex2f(0.495,0.96);//v1 SINALIZADOR ANTENA CENTRAL PRÉDIO 2
        glVertex2f(0.505,0.96);//v2 SINALIZADOR ANTENA CENTRAL PRÉDIO 2
        glVertex2f(0.505,0.97);//v3 SINALIZADOR ANTENA CENTRAL PRÉDIO 2
        glVertex2f(0.495,0.97);//v4 SINALIZADOR ANTENA CENTRAL PRÉDIO 2
    glEnd();
    glBegin(GL_QUADS);
        glColor3f(1.0f, 0.0f, 0.0f);
        glVertex2f(0.125,0.58);//v1 SINALIZADOR ANTENA DIREITA PRÉDIO 1
        glVertex2f(0.135,0.58);//v2 SINALIZADOR ANTENA DIREITA PRÉDIO 1
        glVertex2f(0.135,0.59);//v3 SINALIZADOR ANTENA DIREITA PRÉDIO 1
        glVertex2f(0.125,0.59);//v4 SINALIZADOR ANTENA DIREITA PRÉDIO 1
    glEnd();
    glBegin(GL_LINE_LOOP);
        glColor3f(0, 0, 0);
        glVertex2f(0.125,0.58);//v1 SINALIZADOR ANTENA DIREITA PRÉDIO 1
        glVertex2f(0.135,0.58);//v2 SINALIZADOR ANTENA DIREITA PRÉDIO 1
        glVertex2f(0.135,0.59);//v3 SINALIZADOR ANTENA DIREITA PRÉDIO 1
        glVertex2f(0.125,0.59);//v4 SINALIZADOR ANTENA DIREITA PRÉDIO 1
    glEnd();
    glBegin(GL_QUADS);
        glColor3f(1.0f, 0.0f, 0.0f);
        glVertex2f(0.425,0.94);//v1 SINALIZADOR ANTENA DIREITA PRÉDIO 2
        glVertex2f(0.435,0.94);//v2 SINALIZADOR ANTENA DIREITA PRÉDIO 2
        glVertex2f(0.435,0.95);//v3 SINALIZADOR ANTENA DIREITA PRÉDIO 2
        glVertex2f(0.425,0.95);//v4 SINALIZADOR ANTENA DIREITA PRÉDIO 2
    glEnd();
    glBegin(GL_LINE_LOOP);
        glColor3f(0, 0, 0);
        glVertex2f(0.425,0.94);//v1 SINALIZADOR ANTENA DIREITA PRÉDIO 2
        glVertex2f(0.435,0.94);//v2 SINALIZADOR ANTENA DIREITA PRÉDIO 2
        glVertex2f(0.435,0.95);//v3 SINALIZADOR ANTENA DIREITA PRÉDIO 2
        glVertex2f(0.425,0.95);//v4 SINALIZADOR ANTENA DIREITA PRÉDIO 2
    glEnd();
    glBegin(GL_QUADS);
        glColor3f(1.0f, 0.0f, 0.0f);
        glVertex2f(0.265,0.60);//v1 SINALIZADOR ANTENA ESQUERDA PRÉDIO 1
        glVertex2f(0.275,0.60);//v2 SINALIZADOR ANTENA ESQUERDA PRÉDIO 1
        glVertex2f(0.275,0.61);//v3 SINALIZADOR ANTENA ESQUERDA PRÉDIO 1
        glVertex2f(0.265,0.61);//v4 SINALIZADOR ANTENA ESQUERDA PRÉDIO 1
    glEnd();
    glBegin(GL_LINE_LOOP);
        glColor3f(0, 0, 0);
        glVertex2f(0.265,0.60);//v1 SINALIZADOR ANTENA ESQUERDA PRÉDIO 1
        glVertex2f(0.275,0.60);//v2 SINALIZADOR ANTENA ESQUERDA PRÉDIO 1
        glVertex2f(0.275,0.61);//v3 SINALIZADOR ANTENA ESQUERDA PRÉDIO 1
        glVertex2f(0.265,0.61);//v4 SINALIZADOR ANTENA ESQUERDA PRÉDIO 1
    glEnd();
    glBegin(GL_QUADS);
        glColor3f(1.0f, 0.0f, 0.0f);
        glVertex2f(0.565,0.98);//v1 SINALIZADOR ANTENA ESQUERDA PRÉDIO 2
        glVertex2f(0.575,0.98);//v2 SINALIZADOR ANTENA ESQUERDA PRÉDIO 2
        glVertex2f(0.575,0.99);//v3 SINALIZADOR ANTENA ESQUERDA PRÉDIO 2
        glVertex2f(0.565,0.99);//v4 SINALIZADOR ANTENA ESQUERDA PRÉDIO 2
    glEnd();
     glBegin(GL_LINE_LOOP);
        glColor3f(0, 0, 0);
        glVertex2f(0.565,0.98);//v1 SINALIZADOR ANTENA ESQUERDA PRÉDIO 2
        glVertex2f(0.575,0.98);//v2 SINALIZADOR ANTENA ESQUERDA PRÉDIO 2
        glVertex2f(0.575,0.99);//v3 SINALIZADOR ANTENA ESQUERDA PRÉDIO 2
        glVertex2f(0.565,0.99);//v4 SINALIZADOR ANTENA ESQUERDA PRÉDIO 2
    glEnd();
    glBegin(GL_LINE_LOOP);
        glColor3f(0 , 0 , 0);
        glVertex2f(0.15,0.1);//v1 HALL ENTRADA PRÉDIO 1
        glVertex2f(0.25,0.1);//v2 HALL ENTRADA PRÉDIO 1
        glVertex2f(0.25,0.23);//v3 HALL ENTRADA PRÉDIO 1
        glVertex2f(0.15,0.23);//v4 HALL ENTRADA PRÉDIO 1
    glEnd();
    glBegin(GL_LINE_LOOP);
        glColor3f(0 , 0 , 0);
        glVertex2f(0.17,0.1);//v1 PORTA ENTRADA PRÉDIO 1
        glVertex2f(0.23,0.1);//v2 PORTA ENTRADA PRÉDIO 1
        glVertex2f(0.23,0.18);//v3 PORTA ENTRADA PRÉDIO 1
        glVertex2f(0.17,0.18);//v4 PORTA ENTRADA PRÉDIO 1
    glEnd();
    glBegin(GL_LINE_LOOP);
        glColor3f(0 , 0 , 0);
        glVertex2f(0.45,0.1);//v1 HALL ENTRADA PRÉDIO 2
        glVertex2f(0.55,0.1);//v2 HALL ENTRADA PRÉDIO 2
        glVertex2f(0.55,0.23);//v3 HALL ENTRADA PRÉDIO 2
        glVertex2f(0.45,0.23);//v4 HALL ENTRADA PRÉDIO 2
    glEnd();
    glBegin(GL_LINE_LOOP);
        glColor3f(0 , 0 , 0);
        glVertex2f(0.47,0.1);//v1 PORTA ENTRADA PRÉDIO 1
        glVertex2f(0.53,0.1);//v2 PORTA ENTRADA PRÉDIO 1
        glVertex2f(0.53,0.18);//v3 PORTA ENTRADA PRÉDIO 1
        glVertex2f(0.47,0.18);//v4 PORTA ENTRADA PRÉDIO 1
    glEnd();
    glBegin(GL_LINE_LOOP);
        glColor3f(0 , 0 , 0);
        glVertex2f(0.75,0.1);//v1 HALL ENTRADA HOSPITAL
        glVertex2f(0.85,0.1);//v2 HALL ENTRADA HOSPITAL
        glVertex2f(0.85,0.23);//v3 HALL ENTRADA HOSPITAL
        glVertex2f(0.75,0.23);//v4 HALL ENTRADA HOSPITAL
    glEnd();
        glBegin(GL_LINE_LOOP);
        glColor3f(0 , 0 , 0);
        glVertex2f(0.77,0.1);//v1 PORTA ENTRADA HOSPITAL
        glVertex2f(0.83,0.1);//v2 PORTA ENTRADA HOSPITAL
        glVertex2f(0.83,0.18);//v3 PORTA ENTRADA HOSPITAL
        glVertex2f(0.77,0.18);//v4 PORTA ENTRADA HOSPITAL
    glEnd();
    glBegin(GL_QUADS);
        glColor3f(1.0f, 0.0f, 0.0f);
        glVertex2f(0.79,0.19);//v1 SIRENE ENTRADA HOSPITAL
        glVertex2f(0.81,0.19);//v2 SIRELE ENTRADA HOSPITAL
        glVertex2f(0.81,0.20);//v3 SIRENE ENTRADA HOSPITAL
        glVertex2f(0.79,0.20);//v4 SIRENE ENTRADA HOSPITAL
    glEnd();
    glBegin(GL_LINE_LOOP);
        glColor3f(0 , 0 , 0);
        glVertex2f(0.12,0.25);//v1 JANELAS 1X1 PRÉDIO 1
        glVertex2f(0.14,0.25);//v2 JANELAS 1X1 PRÉDIO 1
        glVertex2f(0.14,0.29);//v3 JANELAS 1X1 PRÉDIO 1
        glVertex2f(0.12,0.29);//v4 JANELAS 1X1 PRÉDIO 1
    glEnd();
     glBegin(GL_LINE_LOOP);
        glColor3f(0 , 0 , 0);
        glVertex2f(0.19,0.25);//v1 JANELAS 1X2 PRÉDIO 1
        glVertex2f(0.21,0.25);//v2 JANELAS 1X2 PRÉDIO 1
        glVertex2f(0.21,0.29);//v3 JANELAS 1X2 PRÉDIO 1
        glVertex2f(0.19,0.29);//v4 JANELAS 1X2 PRÉDIO 1
    glEnd();
    glBegin(GL_LINE_LOOP);
        glColor3f(0 , 0 , 0);
        glVertex2f(0.26,0.25);//v1 JANELAS 1X3 PRÉDIO 1
        glVertex2f(0.28,0.25);//v2 JANELAS 1X3 PRÉDIO 1
        glVertex2f(0.28,0.29);//v3 JANELAS 1X3 PRÉDIO 1
        glVertex2f(0.26,0.29);//v4 JANELAS 1X3 PRÉDIO 1
    glEnd();
    glBegin(GL_LINE_LOOP);
        glColor3f(0 , 0 , 0);
        glVertex2f(0.12,0.31);//v1 JANELAS 2X1 PRÉDIO 1
        glVertex2f(0.14,0.31);//v2 JANELAS 2X1 PRÉDIO 1
        glVertex2f(0.14,0.35);//v3 JANELAS 2X1 PRÉDIO 1
        glVertex2f(0.12,0.35);//v4 JANELAS 2X1 PRÉDIO 1
    glEnd();
    glBegin(GL_LINE_LOOP);
        glColor3f(0 , 0 , 0);
        glVertex2f(0.19,0.31);//v1 JANELAS 2X2 PRÉDIO 1
        glVertex2f(0.21,0.31);//v2 JANELAS 2X2 PRÉDIO 1
        glVertex2f(0.21,0.35);//v3 JANELAS 2X2 PRÉDIO 1
        glVertex2f(0.19,0.35);//v4 JANELAS 2X2 PRÉDIO 1
    glEnd();
    glBegin(GL_LINE_LOOP);
        glColor3f(0 , 0 , 0);
        glVertex2f(0.26,0.31);//v1 JANELAS 2X3 PRÉDIO 1
        glVertex2f(0.28,0.31);//v2 JANELAS 2X3 PRÉDIO 1
        glVertex2f(0.28,0.35);//v3 JANELAS 2X3 PRÉDIO 1
        glVertex2f(0.26,0.35);//v4 JANELAS 2X3 PRÉDIO 1
    glEnd();
    glBegin(GL_LINE_LOOP);
        glColor3f(0 , 0 , 0);
        glVertex2f(0.12,0.37);//v1 JANELAS 3X1 PRÉDIO 1
        glVertex2f(0.14,0.37);//v2 JANELAS 3X1 PRÉDIO 1
        glVertex2f(0.14,0.41);//v3 JANELAS 3X1 PRÉDIO 1
        glVertex2f(0.12,0.41);//v4 JANELAS 3X1 PRÉDIO 1
    glEnd();
    glBegin(GL_LINE_LOOP);
        glColor3f(0 , 0 , 0);
        glVertex2f(0.19,0.37);//v1 JANELAS 3X2 PRÉDIO 1
        glVertex2f(0.21,0.37);//v2 JANELAS 3X2 PRÉDIO 1
        glVertex2f(0.21,0.41);//v3 JANELAS 3X2 PRÉDIO 1
        glVertex2f(0.19,0.41);//v4 JANELAS 3X2 PRÉDIO 1
    glEnd();
    glBegin(GL_LINE_LOOP);
        glColor3f(0 , 0 , 0);
        glVertex2f(0.26,0.37);//v1 JANELAS 3X3 PRÉDIO 1
        glVertex2f(0.28,0.37);//v2 JANELAS 3X3 PRÉDIO 1
        glVertex2f(0.28,0.41);//v3 JANELAS 3X3 PRÉDIO 1
        glVertex2f(0.26,0.41);//v4 JANELAS 3X3 PRÉDIO 1
    glEnd();
        glBegin(GL_LINE_LOOP);
        glColor3f(0 , 0 , 0);
        glVertex2f(0.12,0.43);//v1 JANELAS 4X1 PRÉDIO 1
        glVertex2f(0.14,0.43);//v2 JANELAS 4X1 PRÉDIO 1
        glVertex2f(0.14,0.47);//v3 JANELAS 4X1 PRÉDIO 1
        glVertex2f(0.12,0.47);//v4 JANELAS 4X1 PRÉDIO 1
    glEnd();
    glBegin(GL_LINE_LOOP);
        glColor3f(0 , 0 , 0);
        glVertex2f(0.19,0.43);//v1 JANELAS 4X2 PRÉDIO 1
        glVertex2f(0.21,0.43);//v2 JANELAS 4X2 PRÉDIO 1
        glVertex2f(0.21,0.47);//v3 JANELAS 4X2 PRÉDIO 1
        glVertex2f(0.19,0.47);//v4 JANELAS 4X2 PRÉDIO 1
    glEnd();
    glBegin(GL_LINE_LOOP);
        glColor3f(0 , 0 , 0);
        glVertex2f(0.26,0.43);//v1 JANELAS 4X3 PRÉDIO 1
        glVertex2f(0.28,0.43);//v2 JANELAS 4X3 PRÉDIO 1
        glVertex2f(0.28,0.47);//v3 JANELAS 4X3 PRÉDIO 1
        glVertex2f(0.26,0.47);//v4 JANELAS 4X3 PRÉDIO 1
    glEnd();
        glBegin(GL_LINE_LOOP);
        glColor3f(0 , 0 , 0);
        glVertex2f(0.42,0.25);//v1 JANELAS 1X1 PRÉDIO 2
        glVertex2f(0.44,0.25);//v2 JANELAS 1X1 PRÉDIO 2
        glVertex2f(0.44,0.29);//v3 JANELAS 1X1 PRÉDIO 2
        glVertex2f(0.42,0.29);//v4 JANELAS 1X1 PRÉDIO 2
    glEnd();
     glBegin(GL_LINE_LOOP);
        glColor3f(0 , 0 , 0);
        glVertex2f(0.49,0.25);//v1 JANELAS 1X2 PRÉDIO 2
        glVertex2f(0.51,0.25);//v2 JANELAS 1X2 PRÉDIO 2
        glVertex2f(0.51,0.29);//v3 JANELAS 1X2 PRÉDIO 2
        glVertex2f(0.49,0.29);//v4 JANELAS 1X2 PRÉDIO 2
    glEnd();
    glBegin(GL_LINE_LOOP);
        glColor3f(0 , 0 , 0);
        glVertex2f(0.56,0.25);//v1 JANELAS 1X3 PRÉDIO 2
        glVertex2f(0.58,0.25);//v2 JANELAS 1X3 PRÉDIO 2
        glVertex2f(0.58,0.29);//v3 JANELAS 1X3 PRÉDIO 2
        glVertex2f(0.56,0.29);//v4 JANELAS 1X3 PRÉDIO 2
    glEnd();
    glBegin(GL_LINE_LOOP);
        glColor3f(0 , 0 , 0);
        glVertex2f(0.42,0.31);//v1 JANELAS 2X1 PRÉDIO 2
        glVertex2f(0.44,0.31);//v2 JANELAS 2X1 PRÉDIO 2
        glVertex2f(0.44,0.35);//v3 JANELAS 2X1 PRÉDIO 2
        glVertex2f(0.42,0.35);//v4 JANELAS 2X1 PRÉDIO 2
    glEnd();
    glBegin(GL_LINE_LOOP);
        glColor3f(0 , 0 , 0);
        glVertex2f(0.49,0.31);//v1 JANELAS 2X2 PRÉDIO 2
        glVertex2f(0.51,0.31);//v2 JANELAS 2X2 PRÉDIO 2
        glVertex2f(0.51,0.35);//v3 JANELAS 2X2 PRÉDIO 2
        glVertex2f(0.49,0.35);//v4 JANELAS 2X2 PRÉDIO 2
    glEnd();
    glBegin(GL_LINE_LOOP);
        glColor3f(0 , 0 , 0);
        glVertex2f(0.56,0.31);//v1 JANELAS 2X3 PRÉDIO 2
        glVertex2f(0.58,0.31);//v2 JANELAS 2X3 PRÉDIO 2
        glVertex2f(0.58,0.35);//v3 JANELAS 2X3 PRÉDIO 2
        glVertex2f(0.56,0.35);//v4 JANELAS 2X3 PRÉDIO 2
    glEnd();
    glBegin(GL_LINE_LOOP);
        glColor3f(0 , 0 , 0);
        glVertex2f(0.42,0.37);//v1 JANELAS 3X1 PRÉDIO 2
        glVertex2f(0.44,0.37);//v2 JANELAS 3X1 PRÉDIO 2
        glVertex2f(0.44,0.41);//v3 JANELAS 3X1 PRÉDIO 2
        glVertex2f(0.42,0.41);//v4 JANELAS 3X1 PRÉDIO 2
    glEnd();
    glBegin(GL_LINE_LOOP);
        glColor3f(0 , 0 , 0);
        glVertex2f(0.49,0.37);//v1 JANELAS 3X2 PRÉDIO 2
        glVertex2f(0.51,0.37);//v2 JANELAS 3X2 PRÉDIO 2
        glVertex2f(0.51,0.41);//v3 JANELAS 3X2 PRÉDIO 2
        glVertex2f(0.49,0.41);//v4 JANELAS 3X2 PRÉDIO 2
    glEnd();
    glBegin(GL_LINE_LOOP);
        glColor3f(0 , 0 , 0);
        glVertex2f(0.56,0.37);//v1 JANELAS 3X3 PRÉDIO 2
        glVertex2f(0.58,0.37);//v2 JANELAS 3X3 PRÉDIO 2
        glVertex2f(0.58,0.41);//v3 JANELAS 3X3 PRÉDIO 2
        glVertex2f(0.56,0.41);//v4 JANELAS 3X3 PRÉDIO 2
    glEnd();
        glBegin(GL_LINE_LOOP);
        glColor3f(0 , 0 , 0);
        glVertex2f(0.42,0.43);//v1 JANELAS 4X1 PRÉDIO 2
        glVertex2f(0.44,0.43);//v2 JANELAS 4X1 PRÉDIO 2
        glVertex2f(0.44,0.47);//v3 JANELAS 4X1 PRÉDIO 2
        glVertex2f(0.42,0.47);//v4 JANELAS 4X1 PRÉDIO 2
    glEnd();
    glBegin(GL_LINE_LOOP);
        glColor3f(0 , 0 , 0);
        glVertex2f(0.49,0.43);//v1 JANELAS 4X2 PRÉDIO 2
        glVertex2f(0.51,0.43);//v2 JANELAS 4X2 PRÉDIO 2
        glVertex2f(0.51,0.47);//v3 JANELAS 4X2 PRÉDIO 2
        glVertex2f(0.49,0.47);//v4 JANELAS 4X2 PRÉDIO 2
    glEnd();
    glBegin(GL_LINE_LOOP);
        glColor3f(0 , 0 , 0);
        glVertex2f(0.56,0.43);//v1 JANELAS 4X3 PRÉDIO 2
        glVertex2f(0.58,0.43);//v2 JANELAS 4X3 PRÉDIO 2
        glVertex2f(0.58,0.47);//v3 JANELAS 4X3 PRÉDIO 2
        glVertex2f(0.56,0.47);//v4 JANELAS 4X3 PRÉDIO 2
    glEnd();
            glBegin(GL_LINE_LOOP);
        glColor3f(0 , 0 , 0);
        glVertex2f(0.42,0.49);//v1 JANELAS 5X1 PRÉDIO 2
        glVertex2f(0.44,0.49);//v2 JANELAS 5X1 PRÉDIO 2
        glVertex2f(0.44,0.53);//v3 JANELAS 5X1 PRÉDIO 2
        glVertex2f(0.42,0.53);//v4 JANELAS 5X1 PRÉDIO 2
    glEnd();
     glBegin(GL_LINE_LOOP);
        glColor3f(0 , 0 , 0);
        glVertex2f(0.49,0.49);//v1 JANELAS 5X2 PRÉDIO 2
        glVertex2f(0.51,0.49);//v2 JANELAS 5X2 PRÉDIO 2
        glVertex2f(0.51,0.53);//v3 JANELAS 5X2 PRÉDIO 2
        glVertex2f(0.49,0.53);//v4 JANELAS 5X2 PRÉDIO 2
    glEnd();
    glBegin(GL_LINE_LOOP);
        glColor3f(0 , 0 , 0);
        glVertex2f(0.56,0.49);//v1 JANELAS 5X3 PRÉDIO 2
        glVertex2f(0.58,0.49);//v2 JANELAS 5X3 PRÉDIO 2
        glVertex2f(0.58,0.53);//v3 JANELAS 5X3 PRÉDIO 2
        glVertex2f(0.56,0.53);//v4 JANELAS 5X3 PRÉDIO 2
    glEnd();
    glBegin(GL_LINE_LOOP);
        glColor3f(0 , 0 , 0);
        glVertex2f(0.42,0.55);//v1 JANELAS 6X1 PRÉDIO 2
        glVertex2f(0.44,0.55);//v2 JANELAS 6X1 PRÉDIO 2
        glVertex2f(0.44,0.59);//v3 JANELAS 6X1 PRÉDIO 2
        glVertex2f(0.42,0.59);//v4 JANELAS 6X1 PRÉDIO 2
    glEnd();
    glBegin(GL_LINE_LOOP);
        glColor3f(0 , 0 , 0);
        glVertex2f(0.49,0.55);//v1 JANELAS 6X2 PRÉDIO 2
        glVertex2f(0.51,0.55);//v2 JANELAS 6X2 PRÉDIO 2
        glVertex2f(0.51,0.59);//v3 JANELAS 6X2 PRÉDIO 2
        glVertex2f(0.49,0.59);//v4 JANELAS 6X2 PRÉDIO 2
    glEnd();
    glBegin(GL_LINE_LOOP);
        glColor3f(0 , 0 , 0);
        glVertex2f(0.56,0.55);//v1 JANELAS 6X3 PRÉDIO 2
        glVertex2f(0.58,0.55);//v2 JANELAS 6X3 PRÉDIO 2
        glVertex2f(0.58,0.59);//v3 JANELAS 6X3 PRÉDIO 2
        glVertex2f(0.56,0.59);//v4 JANELAS 6X3 PRÉDIO 2
    glEnd();
    glBegin(GL_LINE_LOOP);
        glColor3f(0 , 0 , 0);
        glVertex2f(0.42,0.61);//v1 JANELAS 7X1 PRÉDIO 2
        glVertex2f(0.44,0.61);//v2 JANELAS 7X1 PRÉDIO 2
        glVertex2f(0.44,0.65);//v3 JANELAS 7X1 PRÉDIO 2
        glVertex2f(0.42,0.65);//v4 JANELAS 7X1 PRÉDIO 2
    glEnd();
    glBegin(GL_LINE_LOOP);
        glColor3f(0 , 0 , 0);
        glVertex2f(0.49,0.61);//v1 JANELAS 7X2 PRÉDIO 2
        glVertex2f(0.51,0.61);//v2 JANELAS 7X2 PRÉDIO 2
        glVertex2f(0.51,0.65);//v3 JANELAS 7X2 PRÉDIO 2
        glVertex2f(0.49,0.65);//v4 JANELAS 7X2 PRÉDIO 2
    glEnd();
    glBegin(GL_LINE_LOOP);
        glColor3f(0 , 0 , 0);
        glVertex2f(0.56,0.61);//v1 JANELAS 7X3 PRÉDIO 2
        glVertex2f(0.58,0.61);//v2 JANELAS 7X3 PRÉDIO 2
        glVertex2f(0.58,0.65);//v3 JANELAS 7X3 PRÉDIO 2
        glVertex2f(0.56,0.65);//v4 JANELAS 7X3 PRÉDIO 2
    glEnd();
        glBegin(GL_LINE_LOOP);
        glColor3f(0 , 0 , 0);
        glVertex2f(0.42,0.67);//v1 JANELAS 8X1 PRÉDIO 2
        glVertex2f(0.44,0.67);//v2 JANELAS 8X1 PRÉDIO 2
        glVertex2f(0.44,0.71);//v3 JANELAS 8X1 PRÉDIO 2
        glVertex2f(0.42,0.71);//v4 JANELAS 8X1 PRÉDIO 2
    glEnd();
    glBegin(GL_LINE_LOOP);
        glColor3f(0 , 0 , 0);
        glVertex2f(0.49,0.67);//v1 JANELAS 8X2 PRÉDIO 2
        glVertex2f(0.51,0.67);//v2 JANELAS 8X2 PRÉDIO 2
        glVertex2f(0.51,0.71);//v3 JANELAS 8X2 PRÉDIO 2
        glVertex2f(0.49,0.71);//v4 JANELAS 8X2 PRÉDIO 2
    glEnd();
    glBegin(GL_LINE_LOOP);
        glColor3f(0 , 0 , 0);
        glVertex2f(0.56,0.67);//v1 JANELAS 8X3 PRÉDIO 2
        glVertex2f(0.58,0.67);//v2 JANELAS 8X3 PRÉDIO 2
        glVertex2f(0.58,0.71);//v3 JANELAS 8X3 PRÉDIO 2
        glVertex2f(0.56,0.71);//v4 JANELAS 8X3 PRÉDIO 2
    glEnd();
    glBegin(GL_LINE_LOOP);
        glColor3f(0 , 0 , 0);
        glVertex2f(0.42,0.73);//v1 JANELAS 9X1 PRÉDIO 2
        glVertex2f(0.44,0.73);//v2 JANELAS 9X1 PRÉDIO 2
        glVertex2f(0.44,0.77);//v3 JANELAS 9X1 PRÉDIO 2
        glVertex2f(0.42,0.77);//v4 JANELAS 9X1 PRÉDIO 2
    glEnd();
    glBegin(GL_LINE_LOOP);
        glColor3f(0 , 0 , 0);
        glVertex2f(0.49,0.73);//v1 JANELAS 9X2 PRÉDIO 2
        glVertex2f(0.51,0.73);//v2 JANELAS 9X2 PRÉDIO 2
        glVertex2f(0.51,0.77);//v3 JANELAS 9X2 PRÉDIO 2
        glVertex2f(0.49,0.77);//v4 JANELAS 9X2 PRÉDIO 2
    glEnd();
    glBegin(GL_LINE_LOOP);
        glColor3f(0 , 0 , 0);
        glVertex2f(0.56,0.73);//v1 JANELAS 9X3 PRÉDIO 2
        glVertex2f(0.58,0.73);//v2 JANELAS 9X3 PRÉDIO 2
        glVertex2f(0.58,0.77);//v3 JANELAS 9X3 PRÉDIO 2
        glVertex2f(0.56,0.77);//v4 JANELAS 9X3 PRÉDIO 2
    glEnd();
    glBegin(GL_LINE_LOOP);
        glColor3f(0 , 0 , 0);
        glVertex2f(0.42,0.79);//v1 JANELAS 10X1 PRÉDIO 2
        glVertex2f(0.44,0.79);//v2 JANELAS 10X1 PRÉDIO 2
        glVertex2f(0.44,0.83);//v3 JANELAS 10X1 PRÉDIO 2
        glVertex2f(0.42,0.83);//v4 JANELAS 10X1 PRÉDIO 2
    glEnd();
    glBegin(GL_LINE_LOOP);
        glColor3f(0 , 0 , 0);
        glVertex2f(0.49,0.79);//v1 JANELAS 10X2 PRÉDIO 2
        glVertex2f(0.51,0.79);//v2 JANELAS 10X2 PRÉDIO 2
        glVertex2f(0.51,0.83);//v3 JANELAS 10X2 PRÉDIO 2
        glVertex2f(0.49,0.83);//v4 JANELAS 10X2 PRÉDIO 2
    glEnd();
    glBegin(GL_LINE_LOOP);
        glColor3f(0 , 0 , 0);
        glVertex2f(0.56,0.79);//v1 JANELAS 10X3 PRÉDIO 2
        glVertex2f(0.58,0.79);//v2 JANELAS 10X3 PRÉDIO 2
        glVertex2f(0.58,0.83);//v3 JANELAS 10X3 PRÉDIO 2
        glVertex2f(0.56,0.83);//v4 JANELAS 10X3 PRÉDIO 2
    glEnd();
    glBegin(GL_LINE_LOOP);
        glColor3f(0 , 0 , 0);
        glVertex2f(0.42,0.85);//v1 JANELAS 11X1 PRÉDIO 2
        glVertex2f(0.44,0.85);//v2 JANELAS 11X1 PRÉDIO 2
        glVertex2f(0.44,0.89);//v3 JANELAS 11X1 PRÉDIO 2
        glVertex2f(0.42,0.89);//v4 JANELAS 11X1 PRÉDIO 2
    glEnd();
    glBegin(GL_LINE_LOOP);
        glColor3f(0 , 0 , 0);
        glVertex2f(0.49,0.85);//v1 JANELAS 11X2 PRÉDIO 2
        glVertex2f(0.51,0.85);//v2 JANELAS 11X2 PRÉDIO 2
        glVertex2f(0.51,0.89);//v3 JANELAS 11X2 PRÉDIO 2
        glVertex2f(0.49,0.89);//v4 JANELAS 11X2 PRÉDIO 2
    glEnd();
    glBegin(GL_LINE_LOOP);
        glColor3f(0 , 0 , 0);
        glVertex2f(0.56,0.85);//v1 JANELAS 11X3 PRÉDIO 2
        glVertex2f(0.58,0.85);//v2 JANELAS 11X3 PRÉDIO 2
        glVertex2f(0.58,0.89);//v3 JANELAS 11X3 PRÉDIO 2
        glVertex2f(0.56,0.89);//v4 JANELAS 11X3 PRÉDIO 2
    glEnd();
    glutSwapBuffers();
    glFlush();
}
int main(int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(windowWidth, windowHeight);
    glutInitWindowPosition(320,150);
    glutCreateWindow("Prática 2 - Vértices -  OpenGL");
    glutDisplayFunc(display);
    inicio();
    glutMainLoop();
    return 0;
}
