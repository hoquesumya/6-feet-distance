#include "Subcharacter3.h"
#include <SFML/Graphics.hpp>
#include<iostream>
#include<ctime>
#include<stdlib.h>
using namespace sf;

bool Subcharacter3::subcharatcerActive=false;
 ///All of the code below are from lynda. Just modified the code///
 /**This function is for the random movement of the sub character1**/
void Subcharacter3::move(){
     dt=clock.restart();

     if(!subcharatcerActive){
         X=0;
        srand(time(0)*20);
        subcharacter_speed=(rand()%100)+50;
        height=(rand()%100)+400;
        setsprite(X,height);
        subcharatcerActive=true;
     }
     else {
     float Y=subcharacter_speed*dt.asSeconds();
     X=X+subcharacter_speed*dt.asSeconds();
    setsprite(X,height);

    if(X>1350){
     subcharatcerActive=false;
    }
    }

}
///Operator overloading learned from CSC211-H///
Subcharacter3& Subcharacter3::operator++(int){
    move();
    return *this;

}
