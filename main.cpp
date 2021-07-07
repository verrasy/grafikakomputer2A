#include<stdio.h>
#include<GL/glut.h>
#include<stdlib.h>
#include<time.h>

//thony//
void display1();
void display2();
void sky();
void ship();
void water();


GLint a=0,b=0,c=0,d=0,e=0,f=0,g=500,h=600,x=0,i=0;
GLfloat theta=0.0;

void update(int value)
{
	a+=20.0;
	glutPostRedisplay();
	glutTimerFunc(150,update,0);
}


void display()
{
	glClear(GL_COLOR_BUFFER_BIT);
	display1();

	if(a>950)

	{
		b+=20;
		display2();
	}

	glFlush();
	glutSwapBuffers();
}
//thony

//verra
void display1()
{
    glPushMatrix();
	sky();
	glTranslated(a,75,0.0);
	ship();
	glPopMatrix();
	water();
}

void display2()
{

	glPushMatrix();
	sky();
	glTranslated(b,75,0.0);
	ship();
	glPopMatrix();
	water();

}
//verra

//rivaldi
void sky()
{
    glBegin(GL_POLYGON);
            glColor3f(1.0, 0.0, 0.0);
        glVertex2f(-1000,1000);
            glColor3f(1.25, 0.0, 0.0);
        glVertex2f(1000,1000);
            glColor3f(1.0, 1.0, 0.0);
        glVertex2f(1000,100);
            glColor3f(1.0, 1.25, 0.0);
        glVertex2f(0,100);
    glEnd();
}


void water()
{
	glColor3f(0.196078,0.6,0.8);
	glBegin(GL_POLYGON);
		glVertex2f(0,0);
		glVertex2f(1000,0);
		glVertex2f(1000,100);
		glVertex2f(0,100);
	glEnd();
}

//ibam
void ship()
{
	glScaled(24,24,0);

	glColor3f(0.15,0.69,0.19); //base
	glBegin(GL_POLYGON);
		glVertex2f(0.5,5.0);
		glVertex2f(3,1);
		glVertex2f(22,1);
		glVertex2f(24.0,5.0);
	glEnd();

	glColor3f(1.0,1.0,1.0); //ring
	glBegin(GL_POLYGON);
		glVertex2f(1.35,3.5);
		glVertex2f(1.6,3.2);
		glVertex2f(23.2,3.2);
		glVertex2f(23.35,3.5);
	glEnd();

	glColor3f(0.329412,0.329412,0.329412); //base
	glBegin(GL_POLYGON);
		glVertex2f(21.0,5.0);
		glVertex2f(21.0,6.0);
		glVertex2f(24.5,6.0);
		glVertex2f(24.0,5.0);
	glEnd();

	glColor3f(0.74902,0.847059,0.847059); //top-mid badan tengah
	glBegin(GL_POLYGON);
		glVertex2f(2.0,5.0);
		glVertex2f(2.0,12.0);
		glVertex2f(15.0,12.0);
		glVertex2f(19.5,5.0);
	glEnd();

	glColor3f(0.5,0.1,0.8); //ring paling tengah badan
	glBegin(GL_POLYGON);
		glVertex2f(2.0,8.2);
		glVertex2f(2.0,8.8);
		glVertex2f(17.1,8.8);
		glVertex2f(17.5,8.2);
	glEnd();

	glColor3f(0.90,0.91,0.98); //jendela 1
	glBegin(GL_POLYGON);
		glVertex2f(3.0,6.0);
		glVertex2f(3.0,7.2);
		glVertex2f(4.0,7.2);
		glVertex2f(4.0,6.0);
	glEnd();

	glBegin(GL_POLYGON);
		glVertex2f(4.7,6.0);
		glVertex2f(4.7,7.2);
		glVertex2f(5.7,7.2);
		glVertex2f(5.7,6.0);
	glEnd();

	glBegin(GL_POLYGON);
		glVertex2f(8.1,6.0);
		glVertex2f(8.1,7.2);
		glVertex2f(9.1,7.2);
		glVertex2f(9.1,6.0);
	glEnd();

	glBegin(GL_POLYGON);
		glVertex2f(9.8,6.0);
		glVertex2f(9.8,7.2);
		glVertex2f(10.8,7.2);
		glVertex2f(10.8,6.0);
	glEnd();

	glBegin(GL_POLYGON);
		glVertex2f(6.4,6.0);
		glVertex2f(6.4,7.2);
		glVertex2f(7.4,7.2);
		glVertex2f(7.4,6.0);
	glEnd();

	glBegin(GL_POLYGON);
		glVertex2f(11.5,6.0);
		glVertex2f(11.5,7.2);
		glVertex2f(12.5,7.2);
		glVertex2f(12.5,6.0);
	glEnd();

	glBegin(GL_POLYGON);
		glVertex2f(13.3,6.0);
		glVertex2f(13.3,7.2);
		glVertex2f(14.3,7.2);
		glVertex2f(14.3,6.0);
	glEnd();

	glBegin(GL_POLYGON);
		glVertex2f(15.1,6.0);
		glVertex2f(15.1,7.2);
		glVertex2f(16.1,7.2);
		glVertex2f(16.1,6.0);
	glEnd();

	glBegin(GL_POLYGON);
		glVertex2f(16.9,6.0);
		glVertex2f(16.9,7.2);
		glVertex2f(17.9,7.2);
		glVertex2f(17.9,6.0);
	glEnd();


	glColor3f(0.90,0.91,0.98); //jendela 2
	glBegin(GL_POLYGON);
		glVertex2f(3.0,9.8);
		glVertex2f(3.0,11.0);
		glVertex2f(4.0,11.0);
		glVertex2f(4.0,9.8);
	glEnd();

	glBegin(GL_POLYGON);
		glVertex2f(4.7,9.8);
		glVertex2f(4.7,11.0);
		glVertex2f(5.7,11.0);
		glVertex2f(5.7,9.8);
	glEnd();

	glBegin(GL_POLYGON);
		glVertex2f(8.1,9.8);
		glVertex2f(8.1,11.0);
		glVertex2f(9.1,11.0);
		glVertex2f(9.1,9.8);
	glEnd();

	glBegin(GL_POLYGON);
		glVertex2f(9.8,9.8);
		glVertex2f(9.8,11.0);
		glVertex2f(10.8,11.0);
		glVertex2f(10.8,9.8);
	glEnd();

	glBegin(GL_POLYGON);
		glVertex2f(6.4,9.8);
		glVertex2f(6.4,11.0);
		glVertex2f(7.4,11.0);
		glVertex2f(7.4,9.8);
	glEnd();

	glBegin(GL_POLYGON);
		glVertex2f(11.5,9.8);
		glVertex2f(11.5,11.0);
		glVertex2f(12.5,11.0);
		glVertex2f(12.5,9.8);
	glEnd();

	glBegin(GL_POLYGON);
		glVertex2f(13.3,9.8);
		glVertex2f(13.3,11.0);
		glVertex2f(14.3,11.0);
		glVertex2f(14.3,9.8);
	glEnd();

	glColor3f(0.329412,0.329412,0.329412); //top-cover
	glBegin(GL_POLYGON);
		glVertex2f(1.5,12.0);
		glVertex2f(1.5,12.5);
		glVertex2f(16.0,12.5);
		glVertex2f(16.0,12.0);
	glEnd();

	glColor3f(1.0,1.0,1.0); //chim cerobong
	glBegin(GL_POLYGON);
		glVertex2f(2.5,12.5);
		glVertex2f(2.5,16.0);
		glVertex2f(5.0,16.0);
		glVertex2f(5.0,12.5);
	glEnd();

	glColor3f(1.0,0.0,0.0); //ring cerobong
	glBegin(GL_POLYGON);
		glVertex2f(2.5,12.5);
		glVertex2f(2.5,13.5);
		glVertex2f(5.0,13.5);
		glVertex2f(5.0,12.5);
	glEnd();

	glColor3f(1.0,0.0,0.0); //ring cerobong
	glBegin(GL_POLYGON);
		glVertex2f(2.5,14.5);
		glVertex2f(2.5,15.5);
		glVertex2f(5.0,15.5);
		glVertex2f(5.0,14.5);
	glEnd();

	glColor3f(1.0,1.0,1.0); //chim cerobong
	glBegin(GL_POLYGON);
		glVertex2f(6.0,12.5);
		glVertex2f(6.0,16.0);
		glVertex2f(8.5,16.0);
		glVertex2f(8.5,12.5);
	glEnd();

	glColor3f(1.0,0.0,0.0); //ring cerobong
	glBegin(GL_POLYGON);
		glVertex2f(6.0,14.5);
		glVertex2f(6.0,15.5);
		glVertex2f(8.5,15.5);
		glVertex2f(8.5,14.5);
	glEnd();

	glColor3f(1.0,0.0,0.0); //ring cerobong
	glBegin(GL_POLYGON);
		glVertex2f(6.0,12.5);
		glVertex2f(6.0,13.5);
		glVertex2f(8.5,13.5);
		glVertex2f(8.5,12.5);
	glEnd();
}
//ibam

void myinit()
{
	glClearColor(1.0f,1.0f,1.0f,1.0f);
	glColor3f(1.0,0.0,0.0);
	glPointSize(1.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0.0,999.0,0.0,799.0);
}

int main(int argc, char* argv[])

{

	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
	glutInitWindowSize(1024.0,768.0);
	glutInitWindowPosition(0,0);
	glutCreateWindow("Kapal indie");
	glutDisplayFunc(display);
	myinit();
	glutTimerFunc(100,update,0);
	glutMainLoop();
	return 0;
}
