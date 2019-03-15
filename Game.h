#ifndef GAME_H
#define GAME_H

class Game
{
    private:
        GameObjectRepository myGameObjects;
        Scene currentScene;
        Scene playerInventory
    public:
        void selectGameObject(String name);
        void selectInteraction(GameObject theGameObject, String theInteraction);
        void setInteraction(String theOptions);
        void startInteraction();
        void abortInteraction();
};
#endif
