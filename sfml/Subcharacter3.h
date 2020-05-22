#include <SFML/Graphics.hpp>
#include<iostream>
#include<ctime>
#include<stdlib.h>
#include "MovingCharacter.h"



#ifndef SUBCHARACTER3_H_INCLUDED
#define SUBCHARACTER3_H_INCLUDED
using namespace sf;
/***Inheritance CSC211-H**/
class Subcharacter3:public Movingcharacter{
private:
    float subcharacter_speed=0.0f;
    static bool subcharatcerActive;
    Clock clock;
    Time dt;
    int count=0;

public:
    void move()override;
    Subcharacter3& operator++(int);



};


#endif // SUBCHARACTER3_H_INCLUDED
