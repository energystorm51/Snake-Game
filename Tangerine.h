//OOP Group Project Code
//Stacey Heng (a1765806), Jingyi Qiu (a1848048), Dilrajveer Singh (a1825200)

// Tangerine.h outline the attributes and behaviours of a Tangerine class.
// The Tangerine class contains a defult constructor, a modifiable constructor and a range of 'get' and 'set' beahaviours 

#ifndef TANGERINE_H
#define TANGERINE_H

class Tangerine{
    private:
        // Capybara attributes
        int tang_x;                             // x cordinate of tangerine
        int tang_y;                             // y cordinate of tangerine
        char tang_symbol;                       // character/symbol of tangerine

    public:
        // Defult tangerineconstructor
        Tangerine();

        // Tangerine constructor that accaepts x and y coordinates and a symbol or letter to represent the tangerine
        Tangerine(int tang_x, int tang_y, char tang_symbol);

        // Tangerine behaviours
        int get_tang_x();                       // get x coordinate of tangerine
        int get_tang_y();                       // get y coordinate of tangerine
        char get_tang_symbol();                 // get character/symbol of tangerine
        void set_tang_x(int tang_x);            // set x coordinate of tangerine
        void set_tang_y(int tang_y);            // set y coordinate of tangerine

        // Destructor
        ~Tangerine();
};
#endif//Tangerine