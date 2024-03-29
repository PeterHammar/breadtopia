#ifndef GAME_H
#define GAME_H
#include <iostream>
#include <string>

class Game
{
    private:
        int currentObject;
        int currentInteraction;
        std::string flag = "10000110101001001000110100001100";
        std::string state = "0000";
        std::string gameObjects[4] = {"knife", "painting", "gun", "hammer"};
        std::string interactionTypes[8] = {"look", "open", "move", "turnon",
                                           "turnoff", "taste", "pickup", "drop"};
        std::string dialog[8] = {"you look at the ", "you open the ", "you move the ",
                                 "you turn on the ", "you turn off the ", "you taste the ",
                                 "You pickup the ", "you drop the "};
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
              if(flag[i] == '1') {
                if(state[currentObject] == '0') {
                    std::cout << i - currentObject * 8 << ": "<< interactionTypes[i - currentObject * 8] << std::endl;
                }
              }
            }

            std::cout << "what would you like to do?" << std::endl;
            std::cin >> ans;
            if(ans > 0 && ans <= count) {
                currentInteraction = ans;
                if(ans == 6) {
                    state[currentObject] = '1';
                }
                else if (ans == 7) {
                    state[currentObject] = '0';
                }
            }
            std::cout << "state: " << state[currentObject];

            std::cout << dialog[ans] << gameObjects[currentObject]<< std::endl;


        }
};
#endif
