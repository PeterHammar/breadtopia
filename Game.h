#ifndef GAME_H
#define GAME_H
#include <iostream>
#include <string>

class Game
{
    private:
        int currentObject;
        int currentInteraction;
        std::string flag = "10101010110011001110001111110000";
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
            int count = 1;
            std::cout << "Gameobject: " << gameObjects[currentObject] << std::endl;
            for(int i = currentObject * 8; i < (currentObject + 1) * 8; i++) {
              if(flag[i] == '1')
                std::cout << count++ << ": "<< interactionTypes[i - currentObject * 8] << std::endl;
            }

        }
};
#endif
