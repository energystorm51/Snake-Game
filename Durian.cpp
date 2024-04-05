//OOP Group Project Code
//Stacey Heng (a1765806), Jingyi Qiu (a1848048), Dilrajveer Singh (a1825200)

// Durian.cpp implements the constructor and behaviours of the Durian class

#include "Grid.h"
#include "Durian.h"

// Impimentation of defult Durian constructor
Durian::Durian(){
    durian_x = 20/4;
    durian_y = 20/4;
    durian_symbol = 'D';
}

// Impimentation of Durian constructor that accepts an x and y coordinate and a character/symbol
Durian::Durian(int durian_x, int durian_y, char durian_symbol){
    this -> durian_x = durian_x;
    this -> durian_y = durian_y;
    this -> durian_symbol = durian_symbol;
}

// Durian behaviours
int Durian::get_durian_x(){                 // get x coordinate of durian
    return durian_x;
}

int Durian::get_durian_y(){                 // get y coordinate of durian
    return durian_y;
}

char Durian::get_durian_symbol(){           // get character/symbol of durian
    return durian_symbol;
}

void Durian::set_durian_x(int durian_x){    // set x coordinate of durian
    this -> durian_x = durian_x;
}

void Durian::set_durian_y(int durian_y){    // set y coordinate of durian
    this -> durian_y = durian_y;
}

// Destructor
Durian::~Durian(){
}