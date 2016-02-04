// File: area.cpp
// Name: Jacob Jolly
// Class: CSCI 2312

#include <cmath>

#include "Point.h"

// Default Constructor
Point::Point() {
    _x = 0;
    _y = 0;
    _z = 0;
}

// Alternate Constructor
Point::Point(double x, double y, double z) {
    _x = x;
    _y = y;
    _z = z;
}

// Mutator method for x
void Point::setX(double newX) {
    _x = newX;
}

// Mutator method for y
void Point::setY(double newY) {
    _y = newY;
}

// Mutator method for z
void Point::setZ(double newZ) {
    _z = newZ;
}

// DistanceTo function: finds distance between points
double Point::distanceTo(const Point &p) const {

    double distance;

    distance = sqrt(pow(_x - p.getX(),2) + pow(_y - p.getY(), 2) + pow(_z - p.getZ(),2));

    return distance;
}