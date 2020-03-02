//
// Created by Анна on 25.02.2020.
//

#pragma once

// Треугольник на плоскости

// Реализовать
// Равенство площадей треугольников (перегрузить операции
// ==, !=, <, >) – для вычисления площади можно
// использовать, например, формулу Герона (зависит от тех
// данных, что используются для хранения треугольника).
// Прибавление вектора (смещение треугольника на
// указанный вектор).

#include <ostream>

class Triangle {
private:
    double aX, aY;
    double bX, bY;
    double cX, cY;
public:
    Triangle();
    Triangle(double, double, double, double, double, double);
    ~Triangle();

    friend bool operator==(const Triangle& triangle1, const Triangle& triangle2);
    friend bool operator!=(const Triangle& triangle1, const Triangle& triangle2);
    friend bool operator>(const Triangle& triangle1, const Triangle& triangle2);
    friend bool operator<(const Triangle& triangle1, const Triangle& triangle2);
    friend std::ostream& operator<< (std::ostream &out, const   Triangle &);
    static double TriangleSquare(const Triangle&);
    static void MoveOnVector(Triangle&, double, double);

};
