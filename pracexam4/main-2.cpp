#include <iostream>
#include "Robot.hpp"
#include "Goal.hpp"
#include "Obstacle.hpp"
#include "Interactable.hpp"

using namespace std;

int main() {
    Robot robot(1, 1);
    int health = robot.getHealth();
    cout << "The health of the robot: " << health << endl;

    robot.takeHit();
    robot.move(10, 0);
    robot.move(0, 10);
    robot.move(10, 10);

    Goal goal(10, 10);
    goal.interact(&robot);
    cout << "Type of the Goal: " << goal.getType() << endl;

    Obstacle obstacle(1, 1, 10, 10);
    obstacle.interact(&robot);
    cout << "Type of the Obstacle: " << obstacle.getType() << endl;
}