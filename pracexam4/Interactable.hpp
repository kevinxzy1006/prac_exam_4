#ifndef INTERACTABLE_HPP
#define INTERACTABLE_HPP

#include "GridItem.hpp"
#include "Robot.hpp"

enum InteractableType
{
    GOAL,
    OBSTACLE
};

class Interactable : public GridItem
{
public:
    Interactable() : GridItem(0,0,0,0) {}
    Interactable(int x, int y, int width, int height) : GridItem(x, y, width, height) {}

    virtual bool interact(Robot *player) = 0;
    virtual InteractableType getType() = 0;

    // int getActiveInteractableCount() {}
    // ~Interactable() {}
};

#endif