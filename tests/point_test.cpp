#include <catch2/catch_test_macros.hpp>
#include <catch2/benchmark/catch_benchmark.hpp>
#include <catch2/benchmark/catch_constructor.hpp>
#include <catch2/generators/catch_generators_range.hpp>

#include "../src/point.hpp"
#include <cmath>

// Test constructor and getters
TEST_CASE("Point constructor and getters work correctly") {
    Point p(3.5, -2.1);
    REQUIRE(p.getX() == 3.5);
    REQUIRE(p.getY() == -2.1);
}

// Test equality and inequality
TEST_CASE("Equality and inequality operators") {
    Point p1(2.0, 3.0);
    Point p2(2.0, 3.0);
    Point p3(4.0, 5.0);

    REQUIRE(p1 == p2);
    REQUIRE(p1 != p3);
}

// Test distance operator (-)
TEST_CASE("Distance operator calculates correctly") {
    Point p1(0.0, 0.0);
    Point p2(3.0, 4.0);
    double distance = p1 - p2;

    REQUIRE(distance == (5.0)); // 3-4-5 triangle
}

// Test midpoint operator (/)
TEST_CASE("Midpoint operator works correctly") {
    Point p1(2.0, 4.0);
    Point p2(4.0, 8.0);
    Point mid = p1 / p2;

    REQUIRE(mid.getX() == (3.0));
    REQUIRE(mid.getY() == (6.0));
}

// Test multiplication by a constant (extra credit)
TEST_CASE("Multiplication by a constant works correctly") {
    Point p(3.0, -2.0);
    Point result = p * 2.0;

    REQUIRE(result.getX() == (6.0));
    REQUIRE(result.getY() == (-4.0));
}

// Optional: test multiplication by a negative constant
TEST_CASE("Multiplication by a negative constant") {
    Point p(1.0, 2.0);
    Point result = p * -3;

    REQUIRE(result.getX() == (-3.0));
    REQUIRE(result.getY() == (-6.0));
}

// Test the output stream operator (<<)
TEST_CASE("Point output stream operator works correctly") {
    Point p(3.0, 4.0);
    std::stringstream ss;
    ss << p;
    REQUIRE(ss.str() == "(3, 4)\n");
}