//
// Created by Анна on 25.02.2020.
//

#include "Triangle.h"
#include <cmath>

Triangle::Triangle() : aX(1.0), aY(1.0), bX(3.0), bY(1.0), cX(2.0), cY(2.0) {

}

Triangle::Triangle(double x1, double y1, double x2, double y2, double x3, double y3) : aX(x1), aY(y1), bX(x2), bY(y2), cX(x3), cY(y3) {

}

double Triangle::TriangleSquare(const Triangle & triangle) {
    return std::abs((triangle.bX - triangle.aX) * (triangle.cY - triangle.aY) - (triangle.cX-triangle.aX) * (triangle.bY - triangle.aY)) / 2;
}

bool operator==(const Triangle &triangle1, const Triangle &triangle2) {
    return Triangle::TriangleSquare(triangle1) == Triangle::TriangleSquare(triangle2);
}

bool operator!=(const Triangle &triangle1, const Triangle &triangle2) {
    return Triangle::TriangleSquare(triangle1) != Triangle::TriangleSquare(triangle2);
}

bool operator>(const Triangle &triangle1, const Triangle &triangle2) {
    return Triangle::TriangleSquare(triangle1) > Triangle::TriangleSquare(triangle2);
}

bool operator<(const Triangle &triangle1, const Triangle &triangle2) {
    return Triangle::TriangleSquare(triangle1) < Triangle::TriangleSquare(triangle2);
}

void Triangle::MoveOnVector(Triangle & triangle, double x, double y) {
    triangle.aX += x;
    triangle.aY += y;
    triangle.bX += x;
    triangle.bY += y;
    triangle.cX += x;
    triangle.cY += y;
}

std::ostream &operator<<(std::ostream &out, const Triangle & triangle) {
    out << "Point1: " << "(" << triangle.aX << ", " << triangle.aY << ")" << std::endl;
    out << "Point2: " << "(" << triangle.bX << ", " << triangle.bY << ")" << std::endl;
    out << "Point3: " << "(" << triangle.cX << ", " << triangle.cY << ")" << std::endl;
    return out;
}


Triangle::~Triangle() = default;

