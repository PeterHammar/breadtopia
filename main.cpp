#include <iostream>
int main()
{
  Game game;
  char ans;
  do {
    game.selectGameObject("knife");
    std::cout << "x to exit" << std::endl;
    std::cin >> ans;
  } while(ans != 'x');
}
