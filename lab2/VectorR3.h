//
// Created by Анна on 12.02.2020.
//

#pragma once

// task #3

// Конструкторы:
// По умолчанию
// Копирования
// Три вещественных числа
// Вектор

// Функциональность:
// Сложение и вычитание векторов
// Длина вектора
// Угол с другим вектором
// Вывод на экран (в любом виде)

#include <ostream>

class VectorR3 {
private:
    double x;
    double y;
    double z;
public:
    // Конструктор по умолчанию
    VectorR3();
    // Конструктор копирования
    VectorR3(const VectorR3 &);
    // Конструктор трёх вещественных чисел
    VectorR3(double, double, double);
    // Конструктор вектора:
    VectorR3(double, double, double, double, double, double);
    // Деструктор
    ~VectorR3();

    friend std::ostream& operator<< (std::ostream &out, const VectorR3 &);
    static VectorR3 VectorPlus(VectorR3&, VectorR3&); // Сложение векторов
    static VectorR3 VectorMinus(VectorR3&, VectorR3&); // Вычитание векторов
    static double VectorLength(VectorR3&); // Длина вектора
    static double VectorsAngle(VectorR3&, VectorR3&); // Угол между векторами
    double GetX() {
        return x;
    };
    double GetY() {
        return y;
    };
    double GetZ() {
        return z;
    };

};
