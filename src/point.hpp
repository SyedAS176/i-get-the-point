#include <string>

class Point {

private:
    int x; // x-coordinate
    int y; // y-coordinate

public:
    Point (int x, int y) {
        this->x = x;
        this->y = y;
    }

    int getX() { // Return x-coordinate
        return this->x;
    }

    int getY() { // Return y-coordinate
        return this->y;
    }
};
