#ifndef GOAL_HPP
#define GOAL_HPP

#include "Interactable.hpp"
#include "Robot.hpp"
#include "Helper.hpp"
#include <iostream>
#include <cmath>

class Goal : public Interactable
{
public:
    Goal(int width, int height) : Interactable(0,0, width, height) {}
    bool interact(Robot* player) override {
        double distance = Helper::euclideanDistance(player->getCoordinates(), getCoordinates());
        if(distance == 0) {
            std::cout << "True." << std::endl;
            return true;
        } else {
            std::cout << "False." << std::endl;
            return false;
        }
    }

    InteractableType getType() override {
        return GOAL;
    }
};


#endif
