//OOP Group Project Code
//Stacey Heng (a1765806), Jingyi Qiu (a1848048), Dilrajveer Singh (a1825200)

// Menu.cpp

// Including all libraries and header files
#include "Menu.h"
#include <iostream>
#include <unistd.h>
#include <string>

// Implementation of Menu constructor
Menu::Menu(){
    set_choice(0);
}

// Implementation of display_menu()
void Menu::display_menu(){

    // Welcoming message
    char message[100] = "Welcome to Cap'ain Capy's Wagon Taxi\n";


    for(int i = 0; message[i] != '\0'; i++){
        std::cout << message[i];
        usleep(5000);
        std::cout << " ";
    }
    std::cout << std::endl;

   // Home page displaying options to choose from by the player
    std::cout << "               START GAME [1]\n";
    std::cout << "                    RULES [2]\n";
    std::cout << "                     QUIT [3]\n";

    std::string choice;
    std::cout << std::endl << "       Enter your choice [1,2,3]: ";
    std::cin >> choice;
    const char* str = choice.c_str();

    int c;
    if (choice.length() > 1){
        c = 0;
    }
    else if(str[0] > '3' || str[0] < '1'){
        c = 0;
    }
    else{
        c = stoi(choice);
    }

    set_choice(c);
}

// implementation of display_rules()
void Menu::display_rules(){
    std::string aim = "AIM:\nHelp Cap'ain Capy pickup as many baby capybaras as possible while avoiding the dangerous water's edge!\n";
    std::string points = "-> +1 point with the collection of 1 baby capybara[b] \n-> +2 points with the collection of 1 tangerine[T] \n-> -3 points if the wagon crashes into a durian[D] \n-> GAME OVER if the wagon hits the water's edge or crashes into itself\n";
    std::string control = "GAME CONTROLS:\nMove wagon using 'W', 'S', 'A', 'D' keys\n";

    //cout << "\033[31;42m";
    std::cout << std::endl << "**RULES**\n" << std::endl << aim << std::endl;
    usleep(50000);
    std::cout << points << std::endl;
    usleep(50000);
    std::cout << control << std::endl;

    std::cout << "[Press any key to continue]" << std::endl;
    std::string key;
    std::cin >> key;
}

// Implementation of display_game_over()
void Menu::display_game_over(){
    std::string play = "               Play Again [1]\n";
    std::string main = "            Return to Main Menu [2]\n";
    std::string quit = "                 Quit [3]\n";

    std::cout << play << main << quit << std::endl;

    std::string choice;
    std::cout << std::endl << "       Enter your choice [1,2,3]: \n";

    std::cin >> choice;
    const char* str = choice.c_str();

    int c;
    if (choice.length() > 1){
        c = 0;
    }
    else if(str[0] > '3' || str[0] < '1'){
        c = 0;
    }
    else{
        c = stoi(choice);
    }

    set_choice(c);
}

// Implementation of get_choice()
int Menu::get_choice(){
    return this->_choice;
}

// Implementation of set_choice()
void Menu::set_choice(int choice){
    this->_choice = choice;
}

// Implementation of Menu destructor
Menu::~Menu(){

}