#include "Button.h"
#include "Frame.h"

Button::Button()
{
    vButtonId=++id;
    vButtonLabel=""+vButtonId;
    type=BUTTON;

    vButtonWidth=vButtonLabel.size()*8+4;
    vButtonHeight=20;

    vButtonX=-(Frame::Width/2);
    vButtonY=Frame::Height/2;

    vIsPressed=false;
    vIsHighlighted=false;
}

Button::Button(std::string s)
{
    vButtonLabel=s;
    vButtonId=id;
    type=BUTTON;

    vButtonWidth=vButtonLabel.size()*8+4;
    vButtonHeight=20;

    vButtonX=-(Frame::Width/2);
    vButtonY=Frame::Height/2;

    vIsPressed=false;
    vIsHighlighted=false;
}

int Button::getType()
{
    return type;
}

//Button* Button::get()
//{
//    return this;
//}

int Button::getButtonX()
{
    return vButtonX;
}
int Button::getButtonY()
{
    return vButtonY;
}
int Button::getButtonWidth()
{
    return vButtonWidth;
}
int Button::getButtonHeight()
{
    return vButtonHeight;
}

std::string Button::getLabel()
{
    return vButtonLabel;
}

bool Button::isPressed()
{
    return vIsPressed;
}

bool Button::isHighlighted()
{
    return vIsHighlighted;
}
ActionListener * Button::getListener()
{
    return vButtonAction;
}

void Button::setSize(int w, int h)
{
    vButtonWidth=w;
    vButtonHeight=h;
}

void Button::setPosition(int x, int y)
{
    vButtonX=x;
    vButtonY=y;
}

void Button::setLabel(std::string s)
{
    vButtonLabel=s;
}

void Button::addActionListener(ActionListener * a)
{
    vButtonAction=a;
}

Button::~Button()
{
    //dtor
}
