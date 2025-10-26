#pragma once

class Point {

private:
    double x; // x-coordinate
    double y; // y-coordinate

public:
    // This is the Point object's default constructor
    Point (double x, double y);

    double getX(); // Return x-coordinate
    double getY(); // Return y-coordinate

    // Operator overload declarations
    double operator-(const Point& other); // Distance
    bool operator==(const Point& other);  // Equal
    bool operator!=(const Point& other);  // Not equal
    Point operator/(const Point& other);  // Midpoint
    Point operator*(double scalar);       // Multiply by constant (extra credit 1)

    // Function to print the point
    void print();
};
