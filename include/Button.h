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

#ifndef BUTTON_H
#define BUTTON_H

#include "Content.h"
#include "ActionListener.h"
#include<string>


class Button : public Content
{
public:
    Button();
    Button(std::string s);
    virtual ~Button();

    void setSize(int w, int h);
    void setPosition(int x, int y);
    void setLabel(std::string s);
    void addActionListener(ActionListener *);

    int getButtonX(),getButtonY(),getButtonWidth(),getButtonHeight(),getId();

    bool isPressed(),isHighlighted();

    std::string getLabel();

    ActionListener * getListener(); // its not a pointer to the function, rather its a getter function that returns the ActionListener Object
    virtual int getType();
//    virtual Button* get();

protected:

private:

    std::string vButtonLabel;
    int vButtonX ,vButtonY, vButtonWidth , vButtonHeight;
    bool vIsPressed, vIsHighlighted;
    int vButtonId;
    int type;
    ActionListener *vButtonAction;

};

#endif // BUTTON_H
