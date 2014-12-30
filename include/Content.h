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
    virtual int getType(){};
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
