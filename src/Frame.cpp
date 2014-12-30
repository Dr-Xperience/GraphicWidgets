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

#include "Frame.h"

int Frame::Width=0;
int Frame::Height=0;
std::string Frame::Title="";

//std::vector<T*> * Frame::vList = new std::vector<T*>(NULL);
std::vector<Content *> * Frame::vList = new std::vector<Content *>(NULL);

//std::vector<Content *> Frame::vList(NULL);

Frame::Frame()
{
    //ctor
}

Frame::Frame(std::string title,int width, int height)
{
//        delete vTemp;
//        vTemp=this;
    Frame::Title=title;
    Frame::Width=width;
    Frame::Height=height;
    id=0;

//        vList = new vector<Container>;
}

void Frame::renderScene(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
    glClearColor(0,0,0,0);
    glColor3f(1.0f,1.0f,1.0f);

//    cout<<endl<<"Render Scene"<<endl<<vList.size()<<endl;
    if(vList->empty()==false)
    {
        for(std::vector<Content *>::size_type i=0; i!=vList->size(); ++i)
        {
//            cout<<vList[i]->getType()<<endl<<vList[i]->getHeight()<<endl;

            if((*vList)[i]->getType()==BUTTON)
//            if(vList->at(i)->getType()==BUTTON)
//            if((*vList)[i]->getType()==BUTTON)
            {
//                Button *vButton = vList[i]->get();
//                Button *vButton = (Button *)vList->at(i);
                Button *vButton = (Button *)(*vList)[i];
//std::printf("%s \n",vButton->getLabel().c_str());
//const unsigned char * a = ;
//glutBitmapLength(GLUT_BITMAP_HELVETICA_10,a);
                glBegin(GL_QUADS);
                glVertex2i(vButton->getButtonX(),vButton->getButtonY());
                glVertex2i(vButton->getButtonX()+vButton->getButtonWidth(),vButton->getButtonY());
                glVertex2i(vButton->getButtonX()+vButton->getButtonWidth(),vButton->getButtonY()-vButton->getButtonHeight());
                glVertex2i(vButton->getButtonX(),vButton->getButtonY()-vButton->getButtonHeight());
                glEnd();

                if (vButton -> isHighlighted() == true)
                {
                    glColor3f(0.1f,0.1f,0.1f);
                    glRasterPos2f( vButton->getButtonX() + ( (vButton->getButtonWidth()- glutBitmapLength(GLUT_BITMAP_HELVETICA_10,(unsigned char *) ( vButton->getLabel().c_str() ) ) )/2)   , vButton->getButtonY()- ( (vButton->getButtonHeight()+10) /2 ) );
                    for(std::string::size_type i=0 ; i<vButton->getLabel().size(); ++i)
                    {
                        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_10,vButton->getLabel().at(i));
                    }
                    glFlush();
                }

                glColor3f(1.0f,0.0f,0.0f);

                if (vButton->isPressed()==true)
                {
                    glRasterPos2f( ( vButton->getButtonX() + ( (vButton->getButtonWidth()- glutBitmapLength(GLUT_BITMAP_HELVETICA_10,(unsigned char *) ( vButton->getLabel().c_str() ) ) )/2) )+2  , (vButton->getButtonY()- ( (vButton->getButtonHeight()+10) /2 ) )+2);
                }
                else if (vButton -> isHighlighted() == true)
                {
                    glRasterPos2f( (vButton->getButtonX() + ( (vButton->getButtonWidth()- glutBitmapLength(GLUT_BITMAP_HELVETICA_10,(unsigned char *) ( vButton->getLabel().c_str() ) ) )/2) ) -1  , (vButton->getButtonY()- ( (vButton->getButtonHeight()+10) /2 ) )-1 );
                }
                else
                {
                    glRasterPos2f( vButton->getButtonX() + ( (vButton->getButtonWidth()- glutBitmapLength(GLUT_BITMAP_HELVETICA_10,(unsigned char *) ( vButton->getLabel().c_str() ) ) )/2)   , vButton->getButtonY()- ( (vButton->getButtonHeight()+10) /2 ) );
                }


                for(std::string::size_type i=0 ; i<vButton->getLabel().size(); ++i)
                {

                    glutBitmapCharacter(GLUT_BITMAP_HELVETICA_10,vButton->getLabel().at(i));
                }
//                glFlush();
                glColor3f(1.0f,1.0f,1.0f);

            }
        }
    }
    else
        std::cout<<"true";

    glFlush();
}

void Frame::changeSize(int width, int height)
{
    // Prevent a divide by zero, when window is too short
    // (you cant make a window of zero width).
    if (height == 0)
        height = 1;

    Frame::Width=width;
    Frame::Height=height;
    //float ratio =  width * 1.0 / h;

    // Use the Projection Matrix
    glMatrixMode(GL_PROJECTION);

    // Reset Matrix
    glLoadIdentity();

    // Set the viewport to be the entire window
    glViewport(0, 0, width, height);

    // Set the correct perspective.

//   glOrtho(-320.0,320.0,-240.0,240.0,-300.0,300.0);
    glOrtho((-width)/2,(width)/2,(-height)/2,(height)/2, -300.0,300.0);
//    glOrtho(0,600,0,600,-1,1);

    // Get Back to the Modelview
    glMatrixMode(GL_MODELVIEW);
}


void Frame::add(Content * button)
{

    vList->push_back(button);
    glutPostRedisplay();
}


//void Frame::add(T * component)
//{
//    vList->push_back(component);
//    glutPostRedisplay();
//}



Frame::~Frame()
{
    //dtor
}
