//OOP Group Project Code
//Stacey Heng (a1765806), Jingyi Qiu (a1848048), Dilrajveer Singh (a1825200)

// Grid.h outline the attributes and behaviours of a Grid class.
// The Grid class contains places to store an array used to define the game grid, the wagon and the 
// game items (baby capybara, durian, tangerine).

#ifndef GRID_H
#define GRID_H

#include <string>

#include "Wagon.h"
#include "Capybara.h"
#include "Durian.h"
#include "Tangerine.h"

class Grid{
    private:
        // Something to store an array
        char** array = NULL;

        // Grid dimensions
        int rows;
        int cols;   

        // Something to store wagon
        Wagon* wagon_list;

        // Something to store game items
        Capybara* bcapy_list;
        Durian* durian_list;
        Tangerine* tang_list;
        
    public:
        // Defult Grid constructor
        Grid();

        // Grid constructor that accaepts the number of rows and columns
        Grid(int rows, int cols);

        // Grid behaviour
        void print_game();                          // print the grid with the wagon and game items

        Wagon* set_wagon(Wagon* wagon);             // sets wagon for the grid
        Wagon* get_wagon();                         // gets wagon pointer for the grid

        Capybara* set_bcapy(Capybara* bcapy);       // sets baby capybara for the grid
        Capybara* get_bcapy();                      // gets baby capybara pointer for the grid

        Durian* set_durian(Durian* durian);         // sets durian for the grid
        Durian* get_durian();                       // gets durian pointer for the grid

        Tangerine* set_tang(Tangerine* tang);       // sets tangerine for the grid
        Tangerine* get_tang();                      // gets tangerine pointer for the 
    
        void delete_grid();                         // deletes array

        // Destructor
        ~Grid();
};

#endif//GRID