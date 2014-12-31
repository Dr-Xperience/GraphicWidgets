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

#ifndef FRAME_H
#define FRAME_H

#include "Content.h"
#include "Button.h"
#include<string>
#include<vector>
#include<iostream>
#include<cstdio>

//template<class T>

class Frame : protected Content
{
public:

    Frame(std::string ,int , int );

    static std::string Title;
    static void renderScene(void);
    static void changeSize(int width,int height);
    static int Width, Height;

    void add(Content *button);



    virtual ~Frame();

protected:
    Frame();

private:
    static std::vector<Content *>  *vList;
//    static std::vector<Content *> vList;


//    static std::vector<T*> *vList;
};


#endif // FRAME_H
