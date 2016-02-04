// File: area.cpp
// Name: Jacob Jolly
// Class: CSCI 2312

#include <cmath>
#include "point.h"

double computeArea(const Point &a, const Point &b, const Point &c) {
    double A, B, C, S, Area;

    // Variable initialization
    A = a.distanceTo(b);
    B = b.distanceTo(c);
    C = c.distanceTo(a);
    S = (A + B + C) / 2;

    Area = sqrt(S * (S - A) * (S - B) * (S - C));

    return Area;
}

