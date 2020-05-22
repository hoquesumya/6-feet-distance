/**SET UP OF SFML**
First we’ve to download sfml from https://www.sfml-dev.org/download/sfml/2.4.2/
Sfml will be downloaded as zip files so we need to unzip the zip file and save into the drive under a folder.
Next step will be to create a sfml codeblocks project. In the project of the left hand side of the IDE we will see the project name.
We’ve to left click on the name and then click on the build option.
After that we’ve click on the search directory in the build option and look for the sfml In the directory.
When we will find the SFML there will be an include folder. Click on that.
Then we have to click on the linker in the build option and go to SFML lib folder
Then click on the linker settings first and then  debug section in the build in option and add libraries  in there
Next,we’ve to release them and add the libraries again.
Then enable c++ 14 and add dynamic libraries. Just copy and past the Sfml libraries into the project folder.**/

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
#include<stdexcept>
#include "Player.h"

//#include"background.h"
using namespace sf;

int main()

{   Player player1;
    Player p=player1;
    p.play();





    return 0;
}

