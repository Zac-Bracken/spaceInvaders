#ifndef GAME_H
#define GAME_H

class Game
{

private:
    bool gameState;
    int playerScore;
    int gameLevel;

public:
    Game();
    void renderEntity();
    void die();
    void shoot();
};

#endif