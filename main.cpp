#include <cstdio>
#include<GL/gl.h>
#include <GL/glut.h>
void myDisplay(void)
{
glClear (GL_COLOR_BUFFER_BIT);
glColor3ub (255, 255, 255);
glBegin(GL_QUADS);
glVertex2i(0, 0);
glVertex2i(640, 0);
glVertex2i(640, 480);
glVertex2i(0, 480);
glEnd();
//BLACK 1
glColor3ub (0, 0, 0);
glBegin(GL_QUADS);
glVertex2i(427, 440);
glVertex2i(427, 460);
glVertex2i(212, 460);
glVertex2i(212, 440);
glEnd();
//BLACK 2
glColor3ub (0, 0, 0);
glBegin(GL_QUADS);
glVertex2i(212, 414);
glVertex2i(212, 440);
glVertex2i(148, 440);
glVertex2i(148, 414);
glEnd();
//BLACK 3
glColor3ub (0, 0, 0);
glBegin(GL_QUADS);
glVertex2i(148, 390);
glVertex2i(148, 414);
glVertex2i(118, 414);
glVertex2i(118, 390);
glEnd();
//BLACK 4
glColor3ub (0, 0, 0);
glBegin(GL_QUADS);
glVertex2i(118, 362);
glVertex2i(118,390);
glVertex2i(90, 390);
glVertex2i(90, 362);
glEnd();
//BLACK 5
glColor3ub (0, 0, 0);
glBegin(GL_QUADS);
glVertex2i(90, 337);
glVertex2i(90,362);
glVertex2i(55, 362);
glVertex2i(55, 337);
glEnd();
//BLACK 6
glColor3ub (0, 0, 0);
glBegin(GL_QUADS);
glVertex2i(55, 156);
glVertex2i(55,337);
glVertex2i(25, 337);
glVertex2i(25, 156);
glEnd();
//BLACK 7
glColor3ub (0, 0, 0);
glBegin(GL_QUADS);
glVertex2i(82, 130);
glVertex2i(82,156);
glVertex2i(55, 156);
glVertex2i(55, 130);
glEnd();
//BLACK 8
glColor3ub (0, 0, 0);
glBegin(GL_QUADS);
glVertex2i(114, 105);
glVertex2i(114,130);
glVertex2i(82, 130);
glVertex2i(82, 105);
glEnd();
//BLACK 9
glColor3ub (0, 0, 0);
glBegin(GL_QUADS);
glVertex2i(145, 80);
glVertex2i(145,105);
glVertex2i(114, 105);
glVertex2i(114, 80);
glEnd();
//BLACK 10
glColor3ub (0, 0, 0);
glBegin(GL_QUADS);
glVertex2i(210, 55);
glVertex2i(210,80);
glVertex2i(145, 80);
glVertex2i(145, 55);
glEnd();
//BLACK 11
glColor3ub (0, 0, 0);
glBegin(GL_QUADS);
glVertex2i(427, 30);
glVertex2i(427,55);
glVertex2i(212, 55);
glVertex2i(212, 30);
glEnd();
//BLACK 12
glColor3ub (0, 0, 0);
glBegin(GL_QUADS);
glVertex2i(490, 55);
glVertex2i(490,80);
glVertex2i(427, 80);
glVertex2i(427, 55);
glEnd();
//BLACK 13
glColor3ub (0, 0, 0);
glBegin(GL_QUADS);
glVertex2i(520, 80);
glVertex2i(520,102);
glVertex2i(490, 102);
glVertex2i(490, 80);
glEnd();
//BLACK 14
glColor3ub (0, 0, 0);
glBegin(GL_QUADS);
glVertex2i(550, 102);
glVertex2i(550,128);
glVertex2i(520, 128);
glVertex2i(520, 102);
glEnd();
//BLACK 15
glColor3ub (0, 0, 0);
glBegin(GL_QUADS);
glVertex2i(580, 128);
glVertex2i(580,156);
glVertex2i(550, 156);
glVertex2i(550, 128);
glEnd();
//BLACK 16
glColor3ub (0, 0, 0);
glBegin(GL_QUADS);
glVertex2i(610, 156);
glVertex2i(610,337);
glVertex2i(580, 337);
glVertex2i(580, 156);
glEnd();
//BLACK 17
glColor3ub (0, 0, 0);
glBegin(GL_QUADS);
glVertex2i(580, 337);
glVertex2i(580,360);
glVertex2i(555, 360);
glVertex2i(555, 337);
glEnd();
//BLACK 18
glColor3ub (0, 0, 0);
glBegin(GL_QUADS);
glVertex2i(555, 360);
glVertex2i(555,385);
glVertex2i(523, 385);
glVertex2i(523, 360);
glEnd();
//BLACK 19
glColor3ub (0, 0, 0);
glBegin(GL_QUADS);
glVertex2i(523, 385);
glVertex2i(523,410);
glVertex2i(490, 410);
glVertex2i(490, 385);
glEnd();
//BLACK 20
glColor3ub (0, 0, 0);
glBegin(GL_QUADS);
glVertex2i(490, 410);
glVertex2i(490,440);
glVertex2i(427, 440);
glVertex2i(427, 410);
glEnd();
//YEOLLOW 1
glColor3ub (255, 255, 0);
glBegin(GL_QUADS);
glVertex2i(580, 156);
glVertex2i(580,337);
glVertex2i(555, 337);
glVertex2i(550, 156);
glEnd();
//YEOLLOW 2
glColor3ub (255, 255, 0);
glBegin(GL_QUADS);
glVertex2i(550, 128);
glVertex2i(556,360);
glVertex2i(523, 360);
glVertex2i(520, 128);
glEnd();
//YEOLLOW 3
glColor3ub (255, 255, 0);
glBegin(GL_QUADS);
glVertex2i(520, 102);
glVertex2i(524,385);
glVertex2i(490, 385);
glVertex2i(490, 102);
glEnd();
//YEOLLOW 4
glColor3ub (255, 255, 0);
glBegin(GL_QUADS);
glVertex2i(490, 80);
glVertex2i(490,410);
glVertex2i(427, 410);
glVertex2i(427, 80);
glEnd();
//YEOLLOW 5
glColor3ub (255, 255, 0);
glBegin(GL_QUADS);
glVertex2i(427, 440);
glVertex2i(427,55);
glVertex2i(212, 55);
glVertex2i(212, 440);
glEnd();
//YEOLLOW 6
glColor3ub (255, 255, 0);
glBegin(GL_QUADS);
glVertex2i(212, 80);
glVertex2i(212,414);
glVertex2i(145, 414);
glVertex2i(145, 80);
glEnd();
//YEOLLOW 7
glColor3ub (255, 255, 0);
glBegin(GL_QUADS);
glVertex2i(145, 105);
glVertex2i(148,390);
glVertex2i(118, 390);
glVertex2i(114, 105);
glEnd();
//YEOLLOW 8
glColor3ub (255, 255, 0);
glBegin(GL_QUADS);
glVertex2i(115, 130);
glVertex2i(118,362);
glVertex2i(90, 362);
glVertex2i(82, 130);
glEnd();
//YEOLLOW 9
glColor3ub (255, 255, 0);
glBegin(GL_QUADS);
glVertex2i(83, 156);
glVertex2i(90,337);
glVertex2i(55, 337);
glVertex2i(55, 156);
glEnd();
//BODY 1
glColor3ub (0, 0, 0);
glBegin(GL_QUADS);
glVertex2i(550, 182);
glVertex2i(550, 306);
glVertex2i(523, 306);
glVertex2i(523, 182);
glEnd();
//BODY 2
glColor3ub (0, 0, 0);
glBegin(GL_QUADS);
glVertex2i(523, 157);
glVertex2i(523, 334);
glVertex2i(490, 334);
glVertex2i(490, 157);
glEnd();
//BODY 3
glColor3ub (0, 0, 0);
glBegin(GL_QUADS);
glVertex2i(490, 130);
glVertex2i(490, 360);
glVertex2i(460, 360);
glVertex2i(460, 130);
glEnd();
//BODY 4
glColor3ub (0, 0, 0);
glBegin(GL_QUADS);
glVertex2i(460, 180);
glVertex2i(460, 310);
glVertex2i(430, 310);
glVertex2i(430, 180);
glEnd();
//BODY 5
glColor3ub (0, 0, 0);
glBegin(GL_QUADS);
glVertex2i(430, 155);
glVertex2i(430, 280);
glVertex2i(400, 280);
glVertex2i(400, 155);
glEnd();
//BODY 6
glColor3ub (0, 0, 0);
glBegin(GL_QUADS);
glVertex2i(400, 205);
glVertex2i(400, 310);
glVertex2i(365, 310);
glVertex2i(365, 205);
glEnd();
//BODY 7
glColor3ub (0, 0, 0);
glBegin(GL_QUADS);
glVertex2i(365, 155);
glVertex2i(365, 360);
glVertex2i(275, 360);
glVertex2i(275, 155);
glEnd();
//BODY 8
glColor3ub (0, 0, 0);
glBegin(GL_QUADS);
glVertex2i(275, 205);
glVertex2i(275, 310);
glVertex2i(245, 310);
glVertex2i(245, 205);
glEnd();
//BODY 9
glColor3ub (0, 0, 0);
glBegin(GL_QUADS);
glVertex2i(245, 155);
glVertex2i(245, 280);
glVertex2i(215, 280);
glVertex2i(215, 155);
glEnd();
//BODY 10
glColor3ub (0, 0, 0);
glBegin(GL_QUADS);
glVertex2i(215, 180);
glVertex2i(215, 310);
glVertex2i(185, 310);
glVertex2i(185, 180);
glEnd();
//BODY 11
glColor3ub (0, 0, 0);
glBegin(GL_QUADS);
glVertex2i(185, 130);
glVertex2i(185, 360);
glVertex2i(155, 360);
glVertex2i(155, 130);
glEnd();
//BODY 12
glColor3ub (0, 0, 0);
glBegin(GL_QUADS);
glVertex2i(155, 157);
glVertex2i(155, 334);
glVertex2i(125, 334);
glVertex2i(125, 157);
glEnd();
//BODY 13
glColor3ub (0, 0, 0);
glBegin(GL_QUADS);
glVertex2i(125, 182);
glVertex2i(125, 306);
glVertex2i(95, 306);
glVertex2i(95, 182);
glEnd();
//BODY 14
glColor3ub (0, 0, 0);
glBegin(GL_QUADS);
glVertex2i(350, 105);
glVertex2i(350, 360);
glVertex2i(290, 360);
glVertex2i(290, 105);
glEnd();
//BODY 15
glColor3ub (0, 0, 0);
glBegin(GL_QUADS);
glVertex2i(335, 80);
glVertex2i(335, 105);
glVertex2i(305, 105);
glVertex2i(305, 80);
glEnd();
//BODY 16
glColor3ub (0, 0, 0);
glBegin(GL_QUADS);
glVertex2i(365, 360);
glVertex2i(365, 385);
glVertex2i(335, 385);
glVertex2i(335, 360);
glEnd();
//BODY 17
glColor3ub (0, 0, 0);
glBegin(GL_QUADS);
glVertex2i(305, 360);
glVertex2i(305, 385);
glVertex2i(275, 385);
glVertex2i(275, 360);
glEnd();
//BODY 18
glColor3ub (0, 0, 0);
glBegin(GL_QUADS);
glVertex2i(460, 345);
glVertex2i(460, 370);
glVertex2i(430, 370);
glVertex2i(430, 345);
glEnd();
//BODY 19
glColor3ub (0, 0, 0);
glBegin(GL_QUADS);
glVertex2i(210, 345);
glVertex2i(210, 370);
glVertex2i(180, 370);
glVertex2i(180, 345);
glEnd();
glFlush ();
}
void myInit (void)
{
glClearColor(0.0, 0.0, 0.0, 0.0);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(0.0, 640.0, 0.0, 480.0);
}




int main(int argc, char** argv)
{
glutInit(&argc, argv);
glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize (640, 480);
glutInitWindowPosition (100, 150);
glutCreateWindow ("Batman");
glutDisplayFunc(myDisplay);
myInit ();
glutMainLoop();
}
