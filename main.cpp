
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
