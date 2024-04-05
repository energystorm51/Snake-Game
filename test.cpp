//OOP Group Project Code
//Stacey Heng (a1765806), Jingyi Qiu (a1848048), Dilrajveer Singh (a1825200)

// test.cpp

#include <iostream>

#include "Capybara.h"
#include "Durian.h"
#include "Grid.h"
#include "Keyboard.h"
#include "Tangerine.h"
#include "Wagon.h"
#include "Player.h"
#include "Menu.h"
using namespace std;

int main() {
  int choice = 0;
  try {
        std::cin >> choice;
        if (std::cin.fail()) throw std::runtime_error("Input is not an integer\n");
  } catch (const std::runtime_error& e) {
        std::cout << e.what();
        choice = 0;
  }
  cout << choice << endl;
  return 0;
}