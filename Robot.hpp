#ifndef ROBOT_H
#define ROBOT_H

#include "GridItem.hpp"
#include <iostream>

class Robot : public GridItem
{
private:
    int health;

public:
    Robot(int gridWidth, int gridHeight) : GridItem(0, 0, gridWidth, gridHeight), health(3) {}
    // ~Robot();
    int getHealth() {
        return health;
    }
    void takeHit() {
        if(health == 0) {
            std::cout << "Health: 0." << std::endl;
        } else {
            health = health - 1;
            std::cout << "Health decrease 1. Remaining health: " << getHealth() << std::endl;
        }
    }
    bool move(int xOffset, int yOffset) {
        if(xOffset != 0) {
            if(yOffset != 0) {
                std::cout << "x and y coordinates cannot be changed at the same time." << std::endl;
                return false;
            } else {
                int orig_x = std::get<0>(getCoordinates());
                int new_x = orig_x + xOffset;
                std::cout << "The X coordinate has been changed, new X: " << new_x << std::endl;
                return true;
            }
        }
        if(yOffset != 0) {
            if(xOffset != 0) {
                std::cout << "x and y coordinates cannot be changed at the same time." << std::endl;
                return false;
            } else {
                int orig_y = std::get<1>(getCoordinates());
                int new_y = orig_y + yOffset;
                std::cout << "The Y coordinate has been changed, new Y: " << new_y << std::endl;
                return true;
            }
        }
    }
};

#endif