#ifndef OBSTACLE_HPP
#define OBSTACLE_HPP

#include "Interactable.hpp"
#include "Helper.hpp"
#include "Robot.hpp"

class Obstacle : public Interactable
{
public:
    Obstacle(int x, int y, int width, int height) : Interactable(x, y, width, height) {}

    bool interact(Robot* player) override {
                double distance = Helper::euclideanDistance(player->getCoordinates(), getCoordinates());
        if(distance == 0) {
            player->takeHit();
            if(player->getHealth() == 0) {
                std::cout << "True." << std::endl;
                return true;
            } else {
                std::cout << "False." << std::endl;
                return false;
            }
        } else {
            std::cout << "Hit is not taken. False." << std::endl;
            return false;
        }
    }

    InteractableType getType() override {
        return OBSTACLE;
    }
};

#endif