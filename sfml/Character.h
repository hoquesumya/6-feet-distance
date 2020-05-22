#include <SFML/Graphics.hpp>
#include<iostream>
#include<ctime>
#include<stdlib.h>
//#include<string>
#ifndef CHARACTER_H_INCLUDED
#define CHARACTER_H_INCLUDED
#include<string>
#include<stdexcept>
using namespace sf;


class Character{
private:
    Texture T;
   std::string name;

    Sprite s;
    float x;
    float y;
    float xpos,ypos;
public:

    //Character( );
    void setTexture(std::string );
    void setsprite(float,float);
    Sprite getsprite();

   //void setposition();
   float getxpos();
   float getypos();


};



#endif // CHARACTER_H_INCLUDED
