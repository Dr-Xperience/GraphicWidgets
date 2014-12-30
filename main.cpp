/****************************************************************************
    The GraphicWidget : C++ Analogy of Java Swing Graphics Widget
    Copyright (C) 2013  Anubhav Arun

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.

*****************************************************************************/

#include <cstdlib>
#include <cstdio>

#include <vector>
#include <string>
#include <iostream>

#include "include/Content.h"
#include"include/Frame.h"
#include"include/Button.h"
#include"include/ActionListener.h"


using namespace std;


int main(int argc, char *argv[])
{
    glutInit(&argc, argv);
    glutInitWindowSize(640,480);
    glutInitWindowPosition(10,10);
    glutInitDisplayMode(GLUT_RGB);

    glutCreateWindow("Basic Layout");
    printf("%s",glGetString(GL_VERSION));

    Frame *vFrame = new Frame("Title",640,480);

    Button *vButton = new Button("Test");

    Button *vButton1 = new Button("ALgo");

    vButton->setPosition(-100,100);
    vFrame->add(vButton);

    vButton1->setPosition(200,200);
    vButton1->setSize(50,50);
    vFrame->add(vButton1);

    glutDisplayFunc(Frame::renderScene);
    glutReshapeFunc(Frame::changeSize);


    glutMainLoop();

    return EXIT_SUCCESS;
}
