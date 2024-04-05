//OOP Group Project Code
//Stacey Heng (a1765806), Jingyi Qiu (a1848048), Dilrajveer Singh (a1825200)

// Durian.h outline the attributes and behaviours of a Durian class.
// The Durian class contains a defult constructor, a modifiable constructor and a range of 'get' and 'set' beahaviours 

#ifndef DURIAN_H
#define DURIAN_H

class Durian{
    private:
        // Durian attributes
        int durian_x;                           // x cordinate of durian
        int durian_y;                           // y cordinate of durian
        char durian_symbol;                     // character/symbol of durian

    public:
        // Defult Durian constructor
        Durian();

        // Durian constructor that accepts x and y coordinates and a symbol or letter to represent the durian
        Durian(int durian_x, int durian_y, char durian_symbol);

        // Durian behaviours
        int get_durian_x();                     // get x coordinate of durian
        int get_durian_y();                     // get y coordinate of durian
        char get_durian_symbol();               // get character/symbol of durian
        void set_durian_x(int durian_x);        // set x coordinate of durian
        void set_durian_y(int durian_y);        // st y coordinate of durian

        // Destructor
        ~Durian();

};

#endif//DURIAN