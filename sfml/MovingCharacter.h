#include "Character.h"
#include <SFML/Graphics.hpp>
#include<iostream>
#include<ctime>
#include<stdlib.h>
#include<string>

#ifndef MOVINGCHARACTER_H_INCLUDED
#define MOVINGCHARACTER_H_INCLUDED
/**Inheritance and abstruct class CSC211-H**/
class Movingcharacter:public Character{
protected:
    float X;

    float height;



 public:
    Movingcharacter();
    virtual void move()=0;
    float getx();
    float gety();


};

#endif // MOVINGCHARACTER_H_INCLUDED
