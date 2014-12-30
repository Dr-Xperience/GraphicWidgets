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
