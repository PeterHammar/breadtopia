#ifndef GAME_H
#define GAME_H

class Game
{
    private:
        GameObjectRepository myGameObjects;
        Scene currentScene;
        Scene playerInventory
    public:
        selectGameObject(String name);
        selectInteraction(GameObject theGameObject, String theInteraction);
        setInteraction(String theOptions);
        startInteraction();
        abortInteraction();
};
#endif