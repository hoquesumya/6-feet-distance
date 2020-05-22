#include <SFML/Graphics.hpp>
#include<iostream>
#include<ctime>
#include<stdlib.h>
#include<string>
#include "MovingCharacter.h"

#ifndef MAINCHARACTER_H_INCLUDED
#define MAINCHARACTER_H_INCLUDED
using namespace sf;
/***Inheritance CSC211-H**/
class Maincharacter:public Movingcharacter{

private:
     float X;
     float Y;


public:
    Maincharacter();
    void moveright();
    void moveleft();
    void moveup();
    void movedown();
    void move()override;
    float getx();
    float gety();
    void setposition(float,float);
    Maincharacter& operator++(int);











};

#endif // MAINCHARACTER_H_INCLUDED
