//OOP Group Project Code
//Stacey Heng (a1765806), Jingyi Qiu (a1848048), Dilrajveer Singh (a1825200)

// Capybara.cpp implements the constructor and behaviours of the Capybara class

#include "Grid.h"
#include "Capybara.h"

// Impimentation of defult Capybara constructor
Capybara::Capybara(){
    bcapy_x = 20/4;
    bcapy_y = 20/4;
    bcapy_symbol = 'b';
}

// Impimentation of Capybara constructor that accepts an x and y coordinate and a character/symbol
Capybara::Capybara(int bcapy_x, int bcapy_y, char bcapy_symbol){
    this -> bcapy_x = bcapy_x;
    this -> bcapy_y = bcapy_y;
    this -> bcapy_symbol = bcapy_symbol;
}

// Capybara behaviours
int Capybara::get_bcapy_x(){                // get x coordinate of baby capybara
    return bcapy_x;
}

int Capybara::get_bcapy_y(){                // get y coordinate of baby capybara
    return bcapy_y;
}

char Capybara::get_bcapy_symbol(){          // get character/symbol of baby capybara
    return bcapy_symbol;
}

void Capybara::set_bcapy_x(int bcapy_x){    // set x coordinate of baby capybara 
    this -> bcapy_x = bcapy_x;
}

void Capybara::set_bcapy_y(int bcapy_y){    // set y coordinate of baby capybara
    this -> bcapy_y = bcapy_y;
}

// Destructor
Capybara::~Capybara(){
}