## CSCI 2312: Programming Assignment 1

#### Name: Jacob Jolly
#### Date: February 4th, 2016

* * *

The program calculates the area of a triangle. It takes input of three coordinates (x, y, & z) for three different points then calls a member function from the Point class, called distanceTo, to find the total distance between each coordinate for each point.

Equation used: distance = sqrt((X1 - X2) + (Y1 - Y2) + (Z1 - Z2))

The program then sends the data to a function in the area.cpp file called computeArea after being called by the PointTests class, which computes the area of the triangle created by the three points using the distanceTo function and Heron's Formula.

Variable: S = (A + B + C) / 2

Equation: Area = sqrt(S * (S - A) * (S - B) * (S - C))

The function then returns the area to the PointTests.cpp and PointTests.h, which are called by the main.cpp to test the Point class and the area function.

Note: ErrorContext and PointTests classes created by the instructor, Ivo Georgiev, to test the Point class and area source file.

