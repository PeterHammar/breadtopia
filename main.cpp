#include <iostream>
#include "Game.h"
int main()
{
  // select object
  Game game;
  char ans;
  std::string option;
  do {
    std::cout << "knife, painting, gun, hammer?" << std::endl;
    std::cin >> option;
    game.selectGameObject(option);
    game.selectInteraction();
    std::cout << "x to exit" << std::endl;
    std::cin >> ans;
  } while(ans != 'x');

  // present interaction options for object

  // select interaction

  // present interaction specific options

  // select interaction

  // print outcome
}
