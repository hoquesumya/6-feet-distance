#include <SFML/Graphics.hpp>
#include<iostream>
#include<ctime>
#include<stdlib.h>
#include "MovingCharacter.h"

#ifndef SUBCHARACTER2_H_INCLUDED
#define SUBCHARACTER2_H_INCLUDED
/**Inheritance CSC211-H**/
class Subcharacter2:public Movingcharacter{
private:
    float subcharacter2_speed=0.0f;
    static bool subcharatcer2Active;
    Clock clock;
    Time dt;
    int count=0;

public:
    void move()override;
    /**Operator overloading. CSC-211H**/
    Subcharacter2& operator++(int);




};


#endif // SUBCHARACTER2_H_INCLUDED
