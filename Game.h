#ifndef GAME_H
#define GAME_H

class Game
{
    private:
        std::string gameObjects[4];
        int currentObject;
    public:
        Game() {
          gameObjects = {"knife", "painting", "gun", "hammer"}
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
