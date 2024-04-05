//OOP Group Project Code
//Stacey Heng (a1765806), Jingyi Qiu (a1848048), Dilrajveer Singh (a1825200)

// Wagon.cpp implements the constructor and behaviours of the Wagon class

#include "Grid.h"
#include "Wagon.h"

// Implimentation of defult Wagon constructor
Wagon::Wagon(){
    wagon_x = 20/2;
    wagon_y = 20/2;
    wagon_speed = 1;
    wagon_symbol = 'W';
    wagon_dir = 'O';                                            // inital direction of wagon is 'O'= undefined
}

// Implimentation of Wagon constructor that accepts x amd y coordinates and a character/symbol
Wagon::Wagon(int wagon_x, int wagon_y, char wagon_symbol){
    this -> wagon_x = wagon_x;
    this -> wagon_y = wagon_y;
    wagon_speed = 1;
    this -> wagon_symbol = wagon_symbol;
    wagon_dir = 'O';                                            // inital direction of wagon is 'O'= undefined
}

// Implementation of Wagon behaviours
void Wagon::set_wagon_dir(char dir){                            // set the wagon direction
    wagon_dir = dir;
}

int Wagon::get_wagon_x(){                                       // get current x coordinate of wagon
    return wagon_x;
}

int Wagon::get_wagon_y(){                                       // get current y coordinate of wagon
    return wagon_y;
}

char Wagon::get_wagon_symbol(){                                 // get symbol of wagon
    return wagon_symbol;
}

void Wagon::set_wagon_x(int wagon_x){                           // set x coordinate of wagon
    this -> wagon_x = wagon_x;
}

void Wagon::set_wagon_y(int new_wagon_y){                       // set y coordinate of wagon
    this -> wagon_y = wagon_y;
}

// Concept code for continuous movement of wagon one wagon direction (wagon_dir) is set
// void Wagon::set_wagon_movment(){                                // set wagon movement 
    
//     switch(wagon_dir){

//     case 'l':                                                   // move wagon LEFT
//     wagon_x -= wagon_speed;
//     break;

//     case 'r':                                                   // move wagon RIGHT
//     wagon_x += wagon_speed;
//     break;

//     case 'u':                                                    // move wagon UP
//     wagon_y -= wagon_speed;
//     break;

//     case 'd':                                                    // move wagon DOWN
//     wagon_y += wagon_speed;
//     break;

//     default:                                                    // any case unspecified (not 'l', 'r', 'u', 'd'),                                                          
//     break;                                                      // switch statement breaks and moves on
//     }
// }

// Destructor
Wagon::~Wagon(){
}