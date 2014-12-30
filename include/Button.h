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
