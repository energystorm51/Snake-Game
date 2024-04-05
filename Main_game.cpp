//OOP Group Project Code
//Stacey Heng (a1765806), Jingyi Qiu (a1848048), Dilrajveer Singh (a1825200)

// Main_game.cpp

// Include class header files
#include "Menu.h"
#include "Player.h"
#include "Capybara.h"
#include "Durian.h"
#include "Grid.h"
#include "Keyboard.h"
#include "Tangerine.h"
#include "Wagon.h"

// Include all libraries
#include <string>
#include <iostream>
#include <fstream>

int main(){
    // Initializing player object
    Player p1;
    // User input, asking users name
    std::cout << "Please enter your name: ";
    std::string name;
    std::cin >> name;
    p1.set_name(name);
    std::ofstream data_log("data_log.txt", std::ios::app);
    data_log << "Player Object initialized" << std::endl;

    // Initialize game menu
    Menu m1;
    bool runs = true;

    // Program runs until quit game
    while (runs != false){
        data_log << "Program Loop initiated" << std::endl;

        bool start = false;
        // Menu loops until game begins OR quit game
        while (start != true){
            data_log << "Main Menu Loop initiated" << std::endl;

            m1.set_choice(0);    // reinitialize choice
            m1.display_menu();
            switch(m1.get_choice()){
                case 1:          // menu option to start game
                    start = true;
                    break;
                case 2:          // menu option to display rules
                    std::cout << std::endl;
                    m1.display_rules();
                    break;
                case 3:          // menu option to quit game
                    std::cout << std::endl;
                    std::cout << "           See you again, " << p1.get_name() << std::endl;
                    return 0;
                    break;
                default:         // when unassigned key is pressed
                    std::cout << std::endl;
                    std::cout << "       Invalid choice please try again\n";
                    start = false;
                    break;
            }
        }
        data_log << "Main Menu Loop exited" << std::endl;

        bool play_again = true;
        data_log << "Gameplay Loop initiated" << std::endl;
        while (play_again != false){
            Keyboard key; // keyboard object

            // Initilizing dimensions of a 20X20 grid to play the game on
            int rows = 20;
            int cols = 20;

            // Intializing temporary wagon score
            int temp_score, wagon_score = 0;

            // Random seed generator for game items including: wagon baby capybara, tangarine, durian
            srand(time(NULL));

            // Generating random coordinates for the following items: wagon baby capybara, tangarine, durian
            int wagon_x = rand() % (cols - 2) + 1;                      // wagon random x-coordinate
            int wagon_y = rand() % (rows - 2) + 1;                      // wagon random y-coordinate

            int bcapy_x = rand() % (cols - 2) + 1;                      // baby capybara random x- coordinate
            int bcapy_y = rand() % (rows - 2) + 1;                      // baby capybara random y-coordinate

            int durian_x = rand() % (rows - 2) + 1;                     // durian random x- coordinate
            int durian_y = rand() % (rows - 2) + 1;                     // durian random y-coordinate

            int tang_x = rand() % (rows - 2) + 1;                       // tangerine random x- coordinate
            int tang_y = rand() % (rows - 2) + 1;                       // tangerine random y-coordinate

            bool game_over = false;
            while(game_over != true){
                data_log << "Game-over Loop initialized" << std::endl;

                Wagon *wagon;                                            // pointer to wagon object
                wagon = new Wagon(wagon_x, wagon_y, 'W');                // create dynamic wagon object

                Capybara *bcapy;                                         // pointer to baby capybara object
                bcapy = new Capybara(bcapy_x, bcapy_y, 'b');             // create dynamic baby capybara object

                Durian *durian;                                          // pointer to durian object
                durian = new Durian(durian_x, durian_y, 'D');            // create dynamic durian object

                Tangerine *tang;                                         // pointer to tangerine object
                tang = new Tangerine(tang_x, tang_y, 'T');               // create dynamic tangerine object

                // Creating the grid
                Grid Grid(rows, cols);

                // Setting 'objects' on the grid: Wagon(W), Baby capybara(b), Durian(D), Tangerine(T)
                Grid.set_wagon(wagon);
                Grid.set_bcapy(bcapy);
                Grid.set_durian(durian);
                Grid.set_tang(tang);

                // Displaying 'objects' on the grid: Wagon(W), Baby capybara(b), Durian(D), Tangerine(T)
                Grid.print_game();

                if(key.kbhit()){  // if a key press is detected
                    switch(key.getch()){ // getting the chracter of the key being pressed

                    case 'a': wagon->set_wagon_x(wagon_x--);            // moving the wagon towards left
                    break;

                    case 'd': wagon->set_wagon_x(wagon_x++);            // moving the wagon towards right
                    break;

                    case 'w': wagon->set_wagon_y(wagon_y--);            // moving the wagon towards top
                    break;

                    case 's': wagon->set_wagon_y(wagon_y++);            // moving the wagon towards bottom
                    break;

                    case 'q': game_over = true;                         // quitting the game
                    break;

                    default:                                            // any case unspecified (not 'a', 'd', 'w', 's', 'q'),  
                    break;                                              // switch statement breaks and moves on
                    }

                    // Collision detection between the Wagon and the water edge
                    // If the the wagon collides with water edge, game over
                    if(wagon_x < 0 || wagon_x > cols - 2 || wagon_y < 0 || wagon_y > rows - 2){
                        game_over = true;
                    }

                    // Collision detection between the wagon and baby capybara
                    else if(wagon_x == bcapy_x && wagon_y == bcapy_y){

                        temp_score = p1.get_current_score();
                        wagon_score = temp_score + 1;                    // adding +1 to the score

                    // Baby capybara relocation after collision
                        bcapy_x = rand() % (cols - 2) + 1;
                        bcapy_y = rand() % (rows - 2) + 1;

                    }

                    // Collision detection between the wagon and durian
                    else if(wagon_x == durian_x && wagon_y == durian_y){
                        temp_score = p1.get_current_score();

                        if (temp_score >= 3){                            // if score is greater then or equal to 3 then subtract -3
                            wagon_score = temp_score - 3;                // subtracting (-3) to the score
                        }
                        else{
                            wagon_score = 0;                             // else score is 0 and cannot be negative
                        }

                    // Durian relocation after collision
                        durian_x = rand() % (cols - 2) + 1;
                        durian_y = rand() % (rows - 2) + 1;

                    }

                    // Collision detection between the wagon and tangerine
                    else if(wagon_x == tang_x && wagon_y == tang_y){

                        temp_score = p1.get_current_score();
                        wagon_score = temp_score + 2;                      // adding +2 to the score

                    // Tangerine relocation after collision
                        tang_x = rand() % (cols - 2) + 1;
                        tang_y = rand() % (rows - 2) + 1;

                    }

                    p1.set_current_score(wagon_score);
                }
                
                std::cout << "Score:" << p1.get_current_score() << std::endl; // prints out current score
                std::cout << "Press 'q' to quit game" << std::endl;

                system("clear");
            }

            data_log << "Game-over Loop exited" << std::endl;


            std::string message = "              **GAME OVER**\n";
            std::cout << std::endl << message << std::endl;

            // Display scores
            std::cout << "Current Score: " << p1.get_current_score() << std::endl; // players current score
            std::cout << "Previous High Score: " << p1.get_high_score() << std::endl; // players high score

            // Check for new high score & write new score to file
            p1.update_high_score();
            std::cout << std::endl;
            p1.update_score_file(p1.get_current_score());

            std::ofstream data_log("data_log.txt", std::ios::app);
            data_log << "Score File successfully updated" << std::endl;

            // Gameover menu loops until valid entry
            bool valid = false;
            while (valid != true){
                data_log << "Gameover Menu initiated" << std::endl;

                m1.set_choice(0); // reinitialize choice
                m1.display_game_over();

                switch(m1.get_choice()){
                    case 0:
                        std::cout << std::endl;
                        std::cout << "       Invalid choice please try again\n";
                        break;
                    case 1: // play again
                        valid = true;
                        break;
                    case 2: // return to main menu
                        play_again = false;
                        valid = true;
                        break;
                    case 3: // quit
                        valid = true;
                        play_again = false;
                        runs = false;
                        break;

                    default:
                    break;
                }
            }

            data_log << "Gameover Menu exited" << std::endl;
        }

        data_log << "Gameplay Loop exited" << std::endl;
    }

    data_log << "Program Loop exited" << std::endl;

    std::cout << std::endl;
    std::cout << "           See you again, " << p1.get_name() << std::endl;
    data_log << "Program terminated" << std::endl;
    data_log.close();

    return 0;
}