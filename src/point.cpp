#include "point.hpp"
#include <cmath>
#include <iostream>

Point::Point(double x, double y) {
    // Defining (implementing the functionality) of the constructor
    this->x = x;
    this->y = y;
}

// Defining getter methods

double Point::getX() {
    return x;
}

double Point::getY() {
    return y;
}

// Check if two points are equal
bool Point::operator==(const Point& other) {
    return (x == other.x && y == other.y);
}

// Check if two points are not equal
bool Point::operator!=(const Point& other) {
    return !(*this == other);
}

double Point::operator-(const Point& other) {
    double dx = x - other.x;
    double dy = y - other.y;
    return sqrt(dx * dx + dy * dy);
}

// Find the midpoint between two points
Point Point::operator/(const Point& other) {
    double midX = (x + other.x) / 2.0;
    double midY = (y + other.y) / 2.0;
    return Point(midX, midY);
}

std::ostream& operator<<(std::ostream &os, Point &other) {
    return os << "(" << other.getX() << ", " << other.getY() << ")" << std::endl;
}

// Multiply a point by a constant (extra credit 1)
Point Point::operator*(double scalar) {
    return Point(x * scalar, y * scalar);
}

// Print the point in (x, y) format
void Point::print() {
    std::cout << "(" << x << ", " << y << ")";
}