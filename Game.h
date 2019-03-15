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
          flag = {"10000110", "10100100", "10000110", "10000110"};
        }

        /* Look, Open, Move, TurnOn, TurnOff, Taste, PickUp, Drop */
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
