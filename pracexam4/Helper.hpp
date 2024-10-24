#ifndef HELPER_H
#define HELPER_H

#include <cmath>
#include <iostream>
#include "GridItem.hpp"

class Helper
{
public:
    // function to calculate the euclidean distance between two coordinates.
    static double euclideanDistance(std::pair<int, int> item1, std::pair<int, int> item2) {
        //get the coordinates of the items
        //item1
        int pos_x1 = std::get<0>(item1);
        int pos_y1 = std::get<1>(item1);
        //item2
        int pos_x2 = std::get<0>(item2);
        int pos_y2 = std::get<1>(item2);

        //calculate the distance
        double distance = sqrt((pos_x2 - pos_x1) * (pos_x2 - pos_x1) + (pos_y2 - pos_y1) * (pos_y2 - pos_y1));

        return distance;
    }
};

#endif