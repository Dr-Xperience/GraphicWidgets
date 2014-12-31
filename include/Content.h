/****************************************************************************
    The GraphicWidget : C++ Analogy of Java Swing Graphics Widget
    Copyright (C) 2013  Anubhav Arun <dr.xperience@gmail.com>

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

#ifndef CONTENT_H
#define CONTENT_H

#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

class Button;
class Content
{
public:
    virtual ~Content();
    virtual int getType() {};
//    virtual Button* get(){};
//    virtual int getWidth() {}
//    virtual int getHeight() {}
//    virtual int getPostionX() {}
//    virtual int getPostionY() {}
//    virtual string getLabel()=0;
//    virtual  addActionListener(ActionListener *);
protected:
    int id;
    enum vWidjetID
    {
        BUTTON=1, TEXTBOX=2
    };
private:


};

#endif // CONTENT_H
