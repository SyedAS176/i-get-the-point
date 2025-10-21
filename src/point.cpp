#include "point.hpp"
#include <cmath>

#include <string>

double distance(Point p1, Point p2) { // Return distance between two points

    double d = sqrt( pow((p2.getX() - p1.getX()), 2) + pow((p2.getY() - p1.getY()), 2) );

    return d;
}
