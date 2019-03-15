#include <iostream>
#include "Game.h"
int main()
{
  Game game;
  char ans;
  do {
    game.selectGameObject("gun");
    game.selectInteraction();
    std::cout << "x to exit" << std::endl;
    std::cin >> ans;
  } while(ans != 'x');
}
