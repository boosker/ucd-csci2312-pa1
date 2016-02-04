// File: Point.h
// Name: Jacob Jolly
// Class: CSCI 2312
// A 3-dimensional point class!
// Coordinates are double-precision floating point.

#ifndef __POINT_H
#define __POINT_H

class Point {
    
private:
    double _x, _y, _z;

public:
    // Constructors
    Point();                                // default constructor
    Point(double x, double y, double z);    // three-argument constructor

    // Mutator methods
    void setX(double newX);
    void setY(double newY);
    void setZ(double newZ);

    // Accessor methods
    double getX() const { return _x; }
    double getY() const { return _y; }
    double getZ() const { return _z; }

    // DistanceTo Function
    double distanceTo(const Point &p) const;
    
};

#endif // __POINT_H
