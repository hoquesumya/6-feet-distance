#include "Subcharacter4.h"
#include <SFML/Graphics.hpp>
#include<iostream>
#include<ctime>
#include<stdlib.h>

using namespace sf;

bool Subcharacter4::subcharatcer4Active=false;

void Subcharacter4::move(){
    ///All of the code below are from lynda. Just modified the code///
     dt=clock.restart();

     if(!subcharatcer4Active){
        X=1000;
        srand(time(0)*20);
        subcharacter4_speed=(rand()%200)+50;
        height=(rand()%138)+360;;
        setsprite(X,height);
        subcharatcer4Active=true;
     }
     else {
     float Y=subcharacter4_speed*dt.asSeconds();
     X=X-subcharacter4_speed*dt.asSeconds();
     setsprite(X,height);

    if(X<0){
     subcharatcer4Active=false;
    }
    }



}
///Operator overloading learned from CSC211-H///
Subcharacter4& Subcharacter4::operator++(int){

    move();
    return *this;

}



