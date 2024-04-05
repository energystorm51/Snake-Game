//OOP Group Project Code
//Stacey Heng (a1765806), Jingyi Qiu (a1848048), Dilrajveer Singh (a1825200)

// Wagon.h outlines the attributes and behaviours of the Wagon class.
// The Wagon class includes methods determine location of the Wagon on the game grid and methods to move the wagon on the grid

#include "Capybara.h"

#ifndef WAGON_H
#define WAGON_H

class Wagon{
    private:
        int wagon_x;
        int wagon_y;
        int wagon_speed;
        char wagon_symbol;
        char wagon_dir;

    public:
        // Defult constructor
        Wagon(); 

        // Grid constructor that accaepts x and y coordinates and a symbol or letter to represent the wagon
        Wagon(int wagon_x, int wagon_y, char wagon_symbol);
        
        // Wagon behaviours
        int get_wagon_x();                          // get x coordinate of wagon
        int get_wagon_y();                          // get y coordinate of wagon
        char get_wagon_symbol();                    // get character/symbol of wagon
        void set_wagon_x(int wagon_x);              // set x coordinate of wagon
        void set_wagon_y(int wagon_y);              // get y coordinate of wagon
        void set_wagon_dir(char dir);               // set direction of wagon movement
        void set_wagon_movment();                   // set movement of wagon movement

        // Destructor
        ~Wagon();

};

#endif//WAGON