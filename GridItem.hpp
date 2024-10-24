#ifndef GRIDITEM_HPP
#define GRIDITEM_HPP

#include <iostream>
#include <cmath>
#include <memory>

class GridItem
{
private:
    std::pair<int, int> coordinate;
    int gridWidth;
    int gridHeight;

public:
    GridItem() : coordinate(0,0), gridWidth(0), gridHeight(0) {}
    GridItem(int x, int y, int gridWidth, int gridHeight) : coordinate(x, y), gridWidth(gridWidth), gridHeight(gridHeight) {}

    std::pair<int,int> getCoordinates() {
        return coordinate;
    }
    int getGridWidth() {
        return gridWidth;
    }
    int getGridHeight() {
        return gridHeight;
    }
    // void setCoordinates(int x, int y) {
    //     this->coordinate = std::make_pair<int, int>(x, y);
    // }
    void setGridWidth(int width) {
        this->gridWidth = gridWidth;
    }
    void setGridHeight(int height) {
        this->gridHeight = gridHeight;
    }
    // int getActiveGridItemCount() {
    //     int count = 0;

    // }
//     virtual ~GridItem() {
//         delete[];
//     }
};


#endif