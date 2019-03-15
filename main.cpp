#include <iostream>
int main()
{
  // select object
  Game game;
  char ans;
  do {
    game.selectGameObject("knife");
    std::cout << "x to exit" << std::endl;
    std::cin >> ans;
  } while(ans != 'x');

  // present interaction options for object

  // select interaction

  // present interaction specific options

  // select interaction

  // print outcome
}

std::string flag[4][8]
