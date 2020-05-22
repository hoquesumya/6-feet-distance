#include "Player.h"
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
#include<cmath>
#include<sstream>
#include<string>
#include<stdexcept>
#include<fstream>
#include<new>
Player::Player(){
    //score=5;

}
Player::Player(const Player &obj){
    score=5;
}
void Player::setTextureforCharacters(){
    try{
        /**Code from Lynda**/
        background.setTexture("Graphics/back.png");
        corona.setTexture("Graphics/coronavirus.png");
        character1.setTexture("Graphics/Character2project.png");
        character3.setTexture("Graphics/charater3.png");
        character2.setTexture("Graphics/sucharacter2.png");
        main.setTexture("Graphics/heyn2.png");
        restaurent.setTexture("Graphics/newres2.png");
        zoo.setTexture("Graphics/zoo.png");
        character4.setTexture("Graphics/character4.png");
        end2.setTexture("Graphics/end2.png");

    }
    catch(std::runtime_error &excpt){
        std::cerr<<excpt.what()<<std::endl;
    }


}
void Player::setSpriteforCharacters(){
/**Code frm lynda**/
    background.setsprite(0,0);
    corona.setsprite(0,0);
    corona.setposition(0,0);
    character1.setsprite(50,360);
    character2.setsprite(1050,350);
    character3.setsprite(300,500);
    std::ifstream file;
    ///Pointer Dynamically allocated memory CSC-211H///
    int *x;
    int *y;
    try{

        file.open("file.txt");
        if(!file)
        {
            throw std::string("Error file opening");
        }
        x=new int;
        y=new int;

        file>>*x;
        file>>*y;
        std::cout<<*x<<" "<<*y;
        main.setsprite(*x,*y);
    }
    catch(std::string message){
        std::cout<<message;

    }
    catch(std::bad_alloc){
        std::cout<<"Can't allocate the memory"<<std::endl;

    }
    main.setposition(*x,*y);
    restaurent.setsprite(1050,300);
    zoo.setsprite(0,570);
    character4.setsprite(1000,600);
    end2.setsprite(1366/2.4f,768/1.9f);
    file.close();
    delete x;
    delete y;


}
/**My code**/
/**This will determine the distance between main and corona in feet**/
double Player::getdistance_Corona(){
    float a,b;
    double Newx,Newy,d;
    float coronaxpos=corona.getx();
    float coronaypos=corona.gety();
    float characterxpos= main.getx();
    float characterypos=  main.gety();
    a=coronaxpos-characterxpos;
    b=coronaypos-characterypos;
    Newx=pow(static_cast<double>(a),2);
    Newy=pow(static_cast<double>(b),2);
    d=Newx+Newy;
    double distance=sqrt(d);
    return distance;


}
/**My code**/
/***This will determine the distance between main and sub character in feet**/
/**Assume the distances are in inches**/
double Player::getdistance_charac1(){
    float characterxpos= main.getx();
    float characterypos=  main.gety();
    float subcharacterXpos,subcharacterYpos;
    subcharacterXpos=character1.getx();
    subcharacterYpos=character1.gety();
    float  e=subcharacterXpos-characterxpos;
    float f=subcharacterYpos-characterypos;
    double  NewX=pow(static_cast<double>(e),2);
    double NewY=pow(static_cast<double>(f),2);
    double g=NewX+NewY;//as inches//
    double characterdis=(sqrt(static_cast<double>(g)))/12;
    return characterdis;



}
/**My code**/
/***This will determine the distance between main and sub character in feet**/
/**Assume the distances are in inches**/
double Player::getdis_charac2(){
    float characterxpos= main.getx();
    float characterypos=  main.gety();
    float subcharacter2xpos,subcharater2Ypos;
    subcharacter2xpos=character2.getx();
    subcharater2Ypos=character2.gety();
    float x=subcharacter2xpos-characterxpos;
    float y=subcharater2Ypos-characterypos;
    double New_XPOS=pow(static_cast<double>(x),2);
    double New_YPos=pow(static_cast<double>(y),2);
    double z=New_XPOS+New_YPos;
    double dis=sqrt(z)/12;
    return dis;




}
/**Mycode**/
/***This will determine the distance between main and subcharacter in feet**/
/**Assume the distances are in inches**/
double Player::getdis_chrac3(){
    float characterxpos= main.getx();
    float characterypos=  main.gety();
    float subcharacter3xpos,subcharater3Ypos;
    subcharacter3xpos=character3.getx();
    subcharater3Ypos=character3.gety();
    float x=subcharacter3xpos-characterxpos;
    float y=subcharater3Ypos-characterypos;
    double New_XPOS=pow(static_cast<double>(x),2);
    double New_YPos=pow(static_cast<double>(y),2);
    double z=New_XPOS+New_YPos;
    double dis=sqrt(z)/12;
    return dis;

}
/**Mycode**/
/***This will determine the distance between main and subcharacter in feet**/
/**Assume the distances are in inches**/
double Player::getdis_character4(){

    float characterxpos= main.getx();
    float characterypos=  main.gety();
    float subcharacter4xpos,subcharater4Ypos;
    subcharacter4xpos=character4.getx();
    subcharater4Ypos=character4.gety();
    float x=subcharacter4xpos-characterxpos;
    float y=subcharater4Ypos-characterypos;
    double New_XPOS=pow(static_cast<double>(x),2);
    double New_YPos=pow(static_cast<double>(y),2);
    double z=New_XPOS+New_YPos;
    double dis=sqrt(z)/12;
    return dis;




}
/**The below function is from lynda gaming tutorial it will set the text to the Font.**/
void Player::setMessages(){
    /**Exception Handling -have learned from class**/
    try{
        font.loadFromFile("fonts/KOMIKAH_.ttf");
        if(!font.loadFromFile("fonts/KOMIKAH_.ttf")){
            throw std::string("Error file opening");
        }


    scoretext.setFont(font);
    messagetext.setFont(font);
    sixfeet.setFont(font);
    endgame.setFont(font);
    //assign the actual message//
    scoretext.setString("Live=3");
    scoretext.setCharacterSize(60);

    messagetext.setString("Hehe,Coronavirus!!..Press Enter to continue.");
    messagetext.setCharacterSize(50);

    sixfeet.setString("6 feet distance violence");
    sixfeet.setCharacterSize(50);
    }
    catch (std::string message){
        std::cout<<message<<std::endl;

    }





    endgame.setString("End game! Press ESC to quit this game");
    endgame.setCharacterSize(50);

    //setcolor//
    scoretext.setFillColor(Color::White);
    messagetext.setFillColor(Color::Red);
    sixfeet.setFillColor(Color::White);
    endgame.setFillColor(Color::White);




    FloatRect textrect=messagetext.getLocalBounds();
    messagetext.setOrigin(textrect.left+textrect.width/3.0f,textrect.top+textrect.height/3.0f);
    messagetext.setPosition(1366/3.0f,768/3.0f);

    FloatRect textrect1=sixfeet.getLocalBounds();
    sixfeet.setOrigin(textrect1.left+textrect1.width/4.0f,textrect1.top+textrect1.height/4.0f);
    sixfeet.setPosition(1366/4.0f,768/4.0f);

    FloatRect textrect2=endgame.getLocalBounds();
    endgame.setOrigin(textrect2.left+textrect2.width/3.0f,textrect2.top+textrect2.height/3.0f);
    endgame.setPosition(1366/3.0f,768/3.0f);


    scoretext.setPosition(20,20);

}
/***Game instruction before starting the game**/
void Player::setGameinstruction(){
    ///Try-catch block from CSC211-H///

    try{
        font.loadFromFile("fonts/KOMIKAH_.ttf");
        if(!font.loadFromFile("fonts/KOMIKAH_.ttf")){
            throw std::string("Error file opening");
        }
    gameinstruction.setFont(font);
    gameinstruction.setString("    Arrow keys=move the main character.");
    gameinstruction.setCharacterSize(30);

    direc.setFont(font);
    direc.setString("Main character=Coronavirus=lose one point.");
    direc.setCharacterSize(30);

    gameins.setFont(font);
    gameins.setString("|Main character...Sub characters| <6ft=lose one point..");
    gameins.setCharacterSize(30);

    keyIns1.setFont(font);
    keyIns1.setString("Enter=Continue the game.");
    keyIns1.setCharacterSize(30);

    KeyIns2.setFont(font);
    KeyIns2.setString("Main Character=.");
    KeyIns2.setCharacterSize(30);

    keyins3.setFont(font);
    keyins3.setString("ESC=Quit the game.");
    keyins3.setCharacterSize(30);
    ///Setting the message color///
    gameinstruction.setFillColor(Color::White);
    direc.setFillColor(Color::White);
    keyIns1.setFillColor(Color::White);
    KeyIns2.setFillColor(Color::White);
    keyins3.setFillColor(Color::White);
    gameins.setFillColor(Color::White);



    FloatRect textrect=gameinstruction.getLocalBounds();
    gameinstruction.setOrigin(textrect.left+textrect.width/3.0f,textrect.top+textrect.height/3.0f);
    gameinstruction.setPosition(1366/3.0f,768/4.0f);

    FloatRect textrect1=direc.getLocalBounds();
    direc.setOrigin(textrect1.left+textrect1.width/2.5f,textrect1.top+textrect1.height/2.5f);
    direc.setPosition(1366/2.5f,768/3.0f);

    FloatRect textrect5=gameins.getLocalBounds();
    gameins.setOrigin(textrect5.left+textrect5.width/2.5f,textrect5.top+textrect1.height/2.5f);
    gameins.setPosition(1366/2.5f,768/2.6f);

    FloatRect textrect2=keyIns1.getLocalBounds();
    keyIns1.setOrigin(textrect2.left+textrect2.width/2.5f,textrect2.top+textrect2.height/2.5f);
    keyIns1.setPosition(1366/2.7f,768/2.3f);

    FloatRect textrect3=KeyIns2.getLocalBounds();
    KeyIns2.setOrigin(textrect3.left+textrect3.width/2.5f,textrect3.top+textrect3.height/2.5f);
    KeyIns2.setPosition(1366/3.0f,768/1.7f);

    FloatRect textrect4=keyins3.getLocalBounds();
    keyins3.setOrigin(textrect4.left+textrect4.width/2.5f,textrect4.top+textrect4.height/2.5f);
    keyins3.setPosition(1366/2.7f,768/2.0f);
    }
    catch (std::string message){
        std::cout<<message<<std::endl;

    }



}
/**Main algorithm **/
void Player::play(){

    /**CODE from lynda**/
    VideoMode vm(1366,768,32);
    RenderWindow window(vm, "Coronavirus game", Style::Default);///End of lynda code///
    setTextureforCharacters();
    setSpriteforCharacters();
    setMessages();
    setGameinstruction();
    Event event;
    /**Code from C++ game programming 1 from lynda**/
    while (window.isOpen())
    {

        if(Keyboard::isKeyPressed(Keyboard::Escape)){
            window.close();
        }
        else{
        while(window.pollEvent(event)){
            switch(event.type){

        case Event::EventType::Closed:
            window.close();
            break;
            }
        }
        }

        window.clear();
        if(Keyboard::isKeyPressed(Keyboard::Return)){
            paused=false;
        }

       window.draw(background.getsprite());
       /**End of the lynda program**/
       if(!paused){
        /**My code. Its checking if the distance is not 6 feet**/
        /**If the distance is not six feet it will call move function**/
        if(!character2_6_feet){
            character2++;///Learn from CSC211-H///
        }
       /**This segment is basically replacing new character with the old one**/
        if(coronaattack){
            corona.setsprite(-1400,-1000);
       }
        if(character2_6_feet){
            character2.setsprite(-1400,-1000);

            character4++;

            window.draw(character4.getsprite());///Lynda///
        }

        if(!character1_6_feet){
            character1++;
        }
        if(character1_6_feet){
            character1.setsprite(-1400,-1000);
            character3++;
            window.draw(character3.getsprite());

        }

        if(!coronaattack){
            corona++;
        }
        /**End of my code for this segment**/
        //main.move();
        main++;
        std::stringstream ss;///Lynda///
        ss<<"Live= "<<score;///Lynda///
        scoretext.setString(ss.str());///Lynda///
        window.draw(scoretext);///Lynda///
    }


      window.draw(main.getsprite());
      window.draw(restaurent.getsprite());
      window.draw(zoo.getsprite());
      window.draw(character2.getsprite());

      window.draw(character1.getsprite());

      window.draw(corona.getsprite());
    if(!gamestartmode){
        paused=true;
        gamestartmode=true;
    }

    if(paused&gamestartmode&&!coronaattack&&!character1_6_feet&&!character2_6_feet){
        window.draw(gameinstruction);
        window.draw(direc);
        window.draw(keyIns1);
        window.draw(end2.getsprite());
        window.draw(KeyIns2);
        window.draw(keyins3);
        window.draw(gameins);
    }

    if(getdistance_Corona()<=50&&!coronaattack){

        paused=true;

        /**My code**/
        coronaattack=true;

        score--;


    }
    if(paused&&coronaattack&&!character1_6_feet&&!character2_6_feet){
            window.draw(messagetext);
    }
    //comparing character's six feet distance//

    if(getdistance_charac1()<6&&!character1_6_feet&&coronaattack){
        paused=true;
        /****My code***/
        character1_6_feet=true;

        score--;
    }
    if(paused&&character1_6_feet&&coronaattack){

         window.draw(sixfeet);

    }
    if(getdis_charac2()<6&&!character2_6_feet&coronaattack){

        paused=true;
        character2_6_feet=true;

        score--;
    }
    if(paused&&character2_6_feet&&coronaattack){
        window.draw(sixfeet);

    }
    if(getdis_chrac3()<6&&!character3_6_feet&coronaattack&character1_6_feet){

        paused=true;
        character3_6_feet=true;
        score--;
    }
    if(paused&&character3_6_feet&&coronaattack&&character1_6_feet){
        window.draw(sixfeet);

    }
      //std::cout<<getdis_character4()<<std::endl;

      if(getdis_character4()<6&&!character4_6_feet&&coronaattack&&character2_6_feet){
            std::cout<<getdis_character4()<<std::endl;

        paused=true;
        character4_6_feet=true;
        score--;
    }
    if(paused&&character4_6_feet&&coronaattack&&character2_6_feet){
        window.draw(sixfeet);

    }

    if(score==0){
        paused=true;
    }
    if(paused&&character2_6_feet&&coronaattack&&character1_6_feet&&score==0){
        window.draw(endgame);
    }
    window.display();


  }

}
Player::~Player(){



}
