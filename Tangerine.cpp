//OOP Group Project Code
//Stacey Heng (a1765806), Jingyi Qiu (a1848048), Dilrajveer Singh (a1825200)

// Tangerine.cpp implements the constructor and behaviours of the Tangerine class

#include "Grid.h"
#include "Tangerine.h"

// Impimentation of defult Tangerine constructor
Tangerine::Tangerine(){
    tang_x = 20/4;                      
    tang_y = 20/4;
    tang_symbol = 'T';
}

// Impimentation of tangerine constructor that accepts an x and y coordinate and a character/symbol
Tangerine::Tangerine(int tang_x, int tang_y, char tang_symbol){
    this -> tang_x = tang_x;
    this -> tang_y = tang_y;
    this -> tang_symbol = tang_symbol;
}

// Tangerine behaviours
int Tangerine::get_tang_x(){                        // get x coordinate of tangerine
    return tang_x;
}

int Tangerine::get_tang_y(){                        // get y coordinate of tangerine
    return tang_y;
}

char Tangerine::get_tang_symbol(){                  // get character/symbol of tangerine
    return tang_symbol;
}

void Tangerine::set_tang_x(int tang_x){             // set x coordinate of tangerine tangerine
    this -> tang_x = tang_x;
}

void Tangerine::set_tang_y(int tang_y){             // set y coordinate of tangerine
    this -> tang_y = tang_y;
}

// Destructor
Tangerine::~Tangerine(){
}