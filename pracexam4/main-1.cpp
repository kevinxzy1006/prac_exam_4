#include <iostream>
#include <cmath>
#include "GridItem.hpp"
#include "Helper.hpp"

using namespace std;

int main() {
    GridItem griditem(3, 5, 10, 10);

    std::pair<int, int> coordinate = griditem.getCoordinates();
    cout << "The coordinate: (" << std::get<0>(coordinate) << ", " << std::get<1>(coordinate) << ")." << endl;

    int gridwidth = griditem.getGridWidth();
    cout << "The gridwidth: " << gridwidth << endl;
    int gridheight = griditem.getGridHeight();
    cout << "The gridheight: " << gridheight << endl;

    return 0;
}