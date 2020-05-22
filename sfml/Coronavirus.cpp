#include "Coronavirus.h"
#include <SFML/Graphics.hpp>
#include<iostream>
#include<ctime>
#include<stdlib.h>
using namespace sf;

void Coronavirus::setposition(float m,float n){
    X=m;
    height=n;

}
bool Coronavirus::coronaactive=false;
void Coronavirus::move(){
    dt=clock.restart();



if(!coronaactive){
        X=0;
        srand(time(0)*20);
        coronaspeed=(rand()%300)+200;
        height=(rand()%768);
        setsprite(X,height);
        coronaactive=true;
      }
else {
     float Y=coronaspeed*dt.asSeconds();
     X=X+coronaspeed*dt.asSeconds();
    setsprite(X,height);

    if(X>1350){
     coronaactive=false;
    }
    }


}
Coronavirus& Coronavirus::operator++(int){
  move();


}



