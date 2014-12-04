

#ifndef GAME_H_INCLUDED
#define GAME_H_INCLUDED

#include "gLibrary.h"



class Game
{
    public:
    
    //Description:  set default value of game
    //Return Type:  none
    //Pre:          none
    //Post:         object exists
    Game();
    
    //Description:
    //Return Type
    //Pre:
    //Post:
    void play();

    private:
    int key;
    Plotter screen;
    paddleType paddle;
    ball gameBall;
    brick wall[WALL_ROWS][WALL_COLS];
    sideBoundariesReflections Reflections;
    bool gameOver, active;


};

#endif // GAME_H_INCLUDED
