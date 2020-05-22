#include "Character.h"
#include <SFML/Graphics.hpp>
#include<iostream>
#include<ctime>
#include<stdlib.h>
#include<string>
#include<stdexcept>
using namespace sf;

/*::Character(){


}*/
void Character::setTexture(std::string file_name){
    name=file_name;

    if(T.loadFromFile(name)){
        std::cout<<"File has opened successfully"<<std::endl;
    }
    else{
        throw std::runtime_error("Error file opening");
    }

    s.setTexture(T);

}
void Character::setsprite(float x, float y){

this->x=x;
this->y=y;
  //.setTexture(T);
  s.setPosition(x,y);
}
Sprite Character::getsprite(){
return s;

}/*
void Character::setposition(){
  x=s.getPosition().x;
  y=s.getPosition().y;

}*/

float Character::getxpos(){
return x;}
float Character::getypos(){

return y;

}
