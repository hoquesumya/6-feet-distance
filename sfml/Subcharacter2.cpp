#include "Subcharacter2.h"
#include <SFML/Graphics.hpp>
#include<iostream>
#include<ctime>
#include<stdlib.h>
using namespace sf;


bool Subcharacter2::subcharatcer2Active=false;
/**This function is for the random movement of the sub character1**/
void Subcharacter2::move(){
    ///All of the code below are from lynda. Just modified the code///
     dt=clock.restart();

     if(!subcharatcer2Active){
         X=1050;
        srand(time(0)*20);
        subcharacter2_speed=(rand()%100)+50;
        height=(rand()%138)+360;;
        setsprite(X,height);
        subcharatcer2Active=true;
     }
     else {
     float Y=subcharacter2_speed*dt.asSeconds();
     X=X-subcharacter2_speed*dt.asSeconds();
    setsprite(X,height);

    if(X<0){
     subcharatcer2Active=false;
    }
    }



}
///Operator overloading learned from CSC211-H///
Subcharacter2& Subcharacter2:: operator++(int){
    move();
    return *this;


}


