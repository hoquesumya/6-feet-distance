#include <SFML/Graphics.hpp>
#include<iostream>
#include<ctime>
#include<stdlib.h>
#include "MovingCharacter.h"


#ifndef CORONAVIRUS_H_INCLUDED
#define CORONAVIRUS_H_INCLUDED
using namespace sf;

class Coronavirus:public Movingcharacter{

private:
    float coronaspeed=0.0f;
    static bool coronaactive;
    Clock clock;
    Time dt;
    int count=0;

   // float X;
    //float height;
public:

    void move()override;
   // float getx();
   // float gety();
    void setposition(float,float);
    Coronavirus& operator++(int);




};

#endif // CORONAVIRUS_H_INCLUDED
