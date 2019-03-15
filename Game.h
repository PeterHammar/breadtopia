#ifndef GAME_H
#define GAME_H

class Game
{
    private:
        int currentObject;
        std::string flag[4][8];
    public:
        Game() {
          gameObjects = {"knife", "painting", "gun", "hammer"};
          flag = {"00000000", "11111111", "22222222", "33333333"};
        }
        void selectGameObject(String name) {
            for(int i = 0; i < 4; i++) {
              if(gameObjects[i] == name) {
                currentObject = i;
              }
            }
        }
        void selectInteraction(GameObject theGameObject, String theInteraction);
        void setInteraction(String theOptions);
        void startInteraction();
        void abortInteraction();
};
#endif
