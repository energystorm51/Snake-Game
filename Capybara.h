//OOP Group Project Code
//Stacey Heng (a1765806), Jingyi Qiu (a1848048), Dilrajveer Singh (a1825200)

// Capybara.h outline the attributes and behaviours of a Capybara class.
// The Capybara class contains a defult constructor, a modifiable constructor and a range of 'get' and 'set' beahaviours 

#ifndef CAPYBARA_H
#define CAPYBARA_H

class Capybara{
    private:
        // Capybara attributes
        int bcapy_x;                        // x cordinate of baby capybara
        int bcapy_y;                        // y cordinate of baby capybara
        char bcapy_symbol;                  // symbol/character of baby capybara
    
    public:
        // Defult Capybara constructor
        Capybara(); 

        // Capybara constructor that accaepts x and y coordinates and a character/symbol to represent the capybara
        Capybara(int bcapy_x, int bcapy_y, char bcapy_symbol);

        // Capybara behaviours
        int get_bcapy_x();                  // get x coordinate of baby capybara
        int get_bcapy_y();                  // get y coordinate of baby capybara
        char get_bcapy_symbol();            // get character/symbol of baby capybara
        void set_bcapy_x(int bcapy_x);      // set x coordinate of baby capybara
        void set_bcapy_y(int bcapy_y);      // set y coordinate of baby capybara

        // Destructor
        ~Capybara();
};

#endif//CAPYBARA