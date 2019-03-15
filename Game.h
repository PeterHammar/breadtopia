#ifndef GAME_H
#define GAME_H
#include <iostream>
#include <string>

class Game
{
    private:
        int currentObject;
        int currentInteraction;
        std::string flag = "1000011010100100100011010000110";
        std::string gameObjects[4] = {"knife", "painting", "gun", "hammer"};
        std::string interactionTypes[8] = {"look", "open", "move", "turnon",
                                           "turnoff", "taste", "pickup", "drop"};
    public:
        Game() {

        }
        void selectGameObject(std::string name) {
            for(int i = 0; i < 4; i++) {
              if(gameObjects[i] == name) {
                currentObject = i;
              }
            }
        }
        void selectInteraction() {
            int count = 0;
            int ans;
            std::cout << "Gameobject: " << gameObjects[currentObject] << std::endl;
            for(int i = currentObject * 8; i < (currentObject + 1) * 8; i++) {
              if(flag[i] == '1')
                std::cout << i - currentObject * 8 << ": "<< interactionTypes[i - currentObject * 8] << std::endl;
            }

            std::cout << "what would you like to do?" << std::endl;
            std::cin >> ans;
            if(ans > 0 && ans <= count)
              currentInteraction = ans;

            std::cout << "you picked: " << interactionTypes[ans] << std::endl;


        }
};
#endif
