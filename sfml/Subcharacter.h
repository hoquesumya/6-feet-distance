#include <SFML/Graphics.hpp>
#include<iostream>
#include<ctime>
#include<stdlib.h>
#include "MovingCharacter.h"

#ifndef SUBCHARACTER_H_INCLUDED
#define SUBCHARACTER_H_INCLUDED
using namespace sf;
class Subcharacter:public Movingcharacter{
private:
    float subcharacter_speed=0.0f;
    static bool subcharatcerActive;
    Clock clock;
    Time dt;
    int count=0;


public:
    Subcharacter();
    void move()override;
    Subcharacter& operator++(int);



};


#endif // SUBCHARACTER_H_INCLUDED
