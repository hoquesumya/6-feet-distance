#include <SFML/Graphics.hpp>
#include<iostream>
#include<ctime>
#include<stdlib.h>
#include "MovingCharacter.h"



#ifndef SUBCHARACTER4_H_INCLUDED
#define SUBCHARACTER4_H_INCLUDED
/***Inheritance CSC211-H**/
class Subcharacter4:public Movingcharacter{
private:
    float subcharacter4_speed=0.0f;
    static bool subcharatcer4Active;
    Clock clock;
    Time dt;
    int count=0;


public:

    void move()override;
    Subcharacter4& operator++(int);




};

#endif // SUBCHARACTER4_H_INCLUDED
