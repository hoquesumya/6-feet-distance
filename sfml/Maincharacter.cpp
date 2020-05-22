#include "Maincharacter.h"
#include <SFML/Graphics.hpp>
#include<iostream>
#include<ctime>
#include<stdlib.h>
#include<string>
using namespace sf;
Maincharacter::Maincharacter(){
    X=0;
    Y=0;


}


 void Maincharacter::setposition(float m,float n){
   X=m;
   Y=n;

}
void Maincharacter::moveright(){
//
    setsprite(X++,Y);

}
void Maincharacter::moveleft(){
    setsprite(X--,Y);

}
void Maincharacter::moveup(){
    setsprite(X,Y--);

}
void Maincharacter::movedown(){

    setsprite(X,Y++);

}
void Maincharacter::move(){
    Event e ;

if(Keyboard::isKeyPressed(Keyboard::Right)&&X<1096){

        moveright();
       }
       else if(Keyboard::isKeyPressed(Keyboard::Down)&& Y<498){

        movedown();
       }
       else if(Keyboard::isKeyPressed(Keyboard::Left)&& X>
               -91){
       moveleft();
       }
       else if(Keyboard::isKeyPressed(Keyboard::Up)&&Y>
               249){

        moveup();
       }

}
Maincharacter& Maincharacter::operator++(int){

    move();
    return *this;

}
float Maincharacter::getx(){
    return X;


}
float Maincharacter::gety(){
    return Y;

}
