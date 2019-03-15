#ifndef GAME_H
#define GAME_H

class Game
{
    private:
        int currentObject;
        std::string flag = "00000000111111112222222233333333";
        std::string gameObjects[4] = {"knife", "painting", "gun", "hammer"};
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
            for(int i = currentObject * 8; i < (currentObject + 1) * 8; i++) {
              std::cout << "Flag: " << flag[i] << std::endl;
            }
        }
};
#endif
