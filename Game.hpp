#ifndef GAME_H
#define GAME_H

#include <vector>

class Game
{
private:
    /* data */
public:
    Game(int width, int height, std::vector<std::pair<int, int>> obstacleCoordinates);
};

#endif