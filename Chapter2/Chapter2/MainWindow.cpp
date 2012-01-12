//
//  MainWindow.cpp
//  Chapter2
//
//  Created by Dave Reed on 1/12/12.
//  Copyright (c) 2012 dave256apps.com. All rights reserved.
//

#ifdef __APPLE__
#include <GLUT/glut.h>
#include <OpenGL/gl.h>
#else
#include <GL/glut.h>
#include <GL/gl.h>
#endif

// for exit()
#include <cstdlib>

#include "MainWindow.h"

extern MainWindow *mw;

//----------------------------------------------------------------------

MainWindow::MainWindow(int argc, char *argv[])
{
    // create window
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(500, 500);
    glutInitWindowPosition(30, 100);
    glutCreateWindow("Chapter2");
    
    // GLUT callbacks
    glutDisplayFunc(&MainWindow::displayFunc);
    glutKeyboardFunc(&MainWindow::keyboardFunc);
    
    // initialize orthographic viewing projections
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(0, 100, 0, 100, -1, 1);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
}

//----------------------------------------------------------------------

void MainWindow::displayFunc()
{
    mw->displayCB();
}

//----------------------------------------------------------------------

void MainWindow::keyboardFunc(unsigned char key, int x, int y)
{
    mw->keyboardCB(key, x, y);
}

//----------------------------------------------------------------------

void MainWindow::displayCB()
{    
    // clear window
    glClear(GL_COLOR_BUFFER_BIT);
    
    // draw in red
    glColor3f(1, 0, 0);
    
    glBegin(GL_POLYGON);
    glColor3f(1, 0, 0);
    glVertex3f(20, 20, 0);
    glColor3f(0, 1, 0);
    glVertex3f(80, 20, 0);
    glColor3f(0, 0, 1);
    glVertex3f(80, 80, 0);
    glColor3f(1, 1, 1);
    glVertex3f(20, 80, 0);
    glEnd();
    
    // force screen update
    glFlush();
    glutSwapBuffers();
}

//----------------------------------------------------------------------

void MainWindow::keyboardCB(unsigned char key, int x, int y)
{    
    if (key == 'q') {
        exit(0);
    }
}

//----------------------------------------------------------------------

void MainWindow::mainLoop()
{
    glutMainLoop();
}

//----------------------------------------------------------------------

