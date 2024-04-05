//OOP Group Project Code
//Stacey Heng (a1765806), Jingyi Qiu (a1848048), Dilrajveer Singh (a1825200)

// Grid.cpp implements the constructors and behaviours of the Grid class.

#include <iostream>
#include "Grid.h"
#include "Wagon.h"
#include "Capybara.h"
#include "Durian.h"
#include "Tangerine.h"

// Implimentation of defult Grid constructor
Grid::Grid(){
    rows = 20;
    cols = 20;
    wagon_list = nullptr;
    bcapy_list = nullptr;
    durian_list = nullptr;
    tang_list = nullptr;
}

// Implimentation of Grid constructor that accept rows and columns
Grid::Grid(int rows, int cols){
    this -> rows = rows;
    this -> cols = cols;

    // Create new array
    array = new char*[rows];
    for (int i = 0; i < rows; i++){
        array[i] = new char[cols];
    }

    // Fill array with '.'
    for (int i = 0; i < rows; i ++){
        for (int j = 0; j < cols; j++){
            array[i][j] = '.';
        }
    }
}

// Grid behaviours
Wagon* Grid::get_wagon(){                           // return Wagon pointer
    return wagon_list;
}

Wagon* Grid::set_wagon(Wagon* wagon){               // set Wagon pointer
    wagon_list = wagon;
    return wagon_list;
}

Capybara* Grid::get_bcapy(){                       // return Capybara pointer
    return bcapy_list;
}

Capybara* Grid::set_bcapy(Capybara* bcapy){        // set Capybara pointer
    bcapy_list = bcapy;
    return bcapy_list;
}

Durian* Grid::get_durian(){                        // return Durian pointer
    return durian_list;
}

Durian* Grid::set_durian(Durian* durian){         // set Durian pointer
    durian_list = durian;
    return durian_list;
}

Tangerine* Grid::get_tang(){                      // get Tangerine pointer
    return tang_list;
}

Tangerine* Grid::set_tang(Tangerine* tang){       // set Tangerine pointer
    tang_list = tang;
    return tang_list;
}

void Grid::print_game(){                                    // print grid, wagon and game items in terminal             
    
    // Grid colours (text highlight)
    const std::string blue("\033[3;44;3m");                 // for water edge
    const std::string green("\033[3;42;3m");                // for field
    const std::string magenta("\033[3;45;3m");
    const std::string orange("\033[3;48;2;255;165;3m");     // for tangerine
    const std::string red("\033[3;41;3m");
    const std::string white("\033[3;47;3m");
    const std::string yellow("\033[3;43;3m");               // for wagon
    const std::string revert("\033[0m");                    // revert back to normal terminal colour style

    // Print grid with set colour scheam 
     for (int i = 0; i < rows; i++){
        for (int j = 0; j < cols; j++){

            // Print wagon symbol
            if (i == wagon_list->get_wagon_y() && j == wagon_list->get_wagon_x()){
                std::cout << yellow << wagon_list->get_wagon_symbol() << " " << revert;
            }

               // Print blue boarder (water edge)
            else if (i == 0 || j == 0 || i == rows - 1 || j == cols - 1){
                std::cout << array[i][j] << " ";

                // Alternative print statment which colours the boarder blue:
                // The following line of code works, however causes lags regarding the user interface
                // std::cout << blue << array[i][j] << " " << revert;       
            }

            // Print baby capybara symbol
            else if (i == bcapy_list->get_bcapy_y() && j == bcapy_list->get_bcapy_x()){
                std::cout << orange << bcapy_list->get_bcapy_symbol() << " " << revert;
            }

            // Print baby durian symbol
            else if (i == durian_list->get_durian_y() && j == durian_list->get_durian_x()){
                std::cout << red << durian_list->get_durian_symbol() << " " << revert;
            }

            // Print baby capybara symbol
            else if (i == tang_list->get_tang_y() && j == tang_list->get_tang_x()){
                std::cout << magenta << tang_list->get_tang_symbol() << " " << revert;
            }
            
            // Print remaining array in green (field)
            else {
                std::cout << array[i][j] << " ";

                // Alternative print statment which colours the field green:
                // The following line of code works, however causes lags regarding the user interface
                // std::cout << green << array[i][j] << " " << revert;
            }
        }
        std::cout << std::endl;
    }
}

void Grid::delete_grid(){
    delete[] array; 
}

// Destructor
Grid::~Grid(){
}

