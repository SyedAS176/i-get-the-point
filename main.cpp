#include <iostream>
#include "src/point.hpp"

int main() {
    Point p1(3.2, 9.8);
    Point p2(5.5, -1.2);

    std::cout << "The chosen points are: ";
    p1.print();
    std::cout << " & "; // Makes the output look pretty
    p2.print();
    std::cout << "\n"; // Need a new line character to make things pretty

    std::cout << "Distance between points: " << (p1 - p2) << std::endl;
    std::cout << "Are points equal? (0 -> Not True): " << (p1 == p2) << std::endl;
    std::cout << "Are points not equal? (1 -> True): " << (p1 != p2) << std::endl;

    std::cout << "Midpoint: ";
    (p1 / p2).print();
    std::cout << std::endl;

    // Extra credit - multiply by a constant
    std::cout << "p1 * 2 = ";
    (p1 * 2).print();
    std::cout << std::endl;

    std::cout << "p1 * 2.0 = ";
    (p1 * 2.0).print();
    std::cout << std::endl;

    std::cout << "p1 * -3 = ";
    (p1 * -3).print();
    std::cout << std::endl;

    return 0;
}
