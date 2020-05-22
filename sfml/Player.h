#include <SFML/Graphics.hpp>
#include<iostream>
#include<ctime>
#include<stdlib.h>
#include"Character.h"
#include "MovingCharacter.h"
#include "Maincharacter.h"
#include "Coronavirus.h"
#include "Subcharacter.h"
#include "Subcharacter2.h"
#include "Subcharacter3.h"
#include "Subcharacter4.h"
#include<cmath>
#include<sstream>
#include<stdexcept>
#ifndef PLAYER_H_INCLUDED
#define PLAYER_H_INCLUDED
class Player{
private:
    int score;
    Text messagetext;
    Text scoretext;
    Text sixfeet;
    Text endgame,sixfeet2,sixfeet3,gameinstruction,direc,keyIns1,KeyIns2,keyins3,gameins;
    Font font;
    /**Boolean value in order to keep track of the status of the corona_attack,
    distance between the sub characters**/
    bool paused=true;
    bool coronaattack=false;
    bool character1_6_feet=false;
    bool character2_6_feet=false;
    bool character3_6_feet=false;
    bool character4_6_feet=false;
    bool gamestartmode=false;

    Character background;
    Coronavirus corona;
    Character restaurent,end2;
    Character zoo;
    Maincharacter main;
    Subcharacter character1;
    Subcharacter3 character3;
    Subcharacter2 character2;
    Subcharacter4 character4;
    void setTextureforCharacters();
    void setSpriteforCharacters();
    void setMessages();
    void setGameinstruction();
    double getdistance_Corona();
    double getdistance_charac1();
    double getdis_charac2();
    double getdis_chrac3();
    double getdis_character4();


public:
    ///Learnt from CSC211-H. Copy Constructor///
    Player(const Player &obj);
    Player();
    void play();
    ~Player();





};


#endif // PLAYER_H_INCLUDED
