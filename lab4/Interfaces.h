//
// Created by Анна on 26.02.2020.
//

#pragma once

// Интерфейс "Геометрическая фигура".
class IGeoFig {
public:
// Площадь.
    virtual double square() = 0;
// Периметр.
    virtual double perimeter() = 0;
};

// Вектор
class CVector2D {
public:
    double x, y;

    CVector2D() : x(0), y(0) {

    }

    CVector2D(double X, double Y) : x(X), y(Y) {

    }

    ~CVector2D() = default;

};

// Интерфейс "Физический объект".
class IPhysObject {
public:
// Масса, кг.
    [[nodiscard]] virtual double mass() const = 0;
// Координаты центра масс, м.
    [[nodiscard]] virtual CVector2D position() = 0;
// Сравнение по массе.
    virtual bool operator==( const IPhysObject& ob ) const = 0;
// Сравнение по массе.
    virtual bool operator<( const IPhysObject& ob ) const = 0;
};

// Интерфейс "Отображаемый"
class IPrintable {
public:
// Отобразить на экране
// (выводить в текстовом виде параметры фигуры).
    virtual void draw() = 0;
};

// Интерфейс для классов, которые можно задать через диалог с пользователем.
class IDialogInitiable {
// Задать параметры объекта с помощью диалога с пользователем.
public:
    virtual void initFromDialog() = 0;
};

// Интерфейс "Класс"
class BaseCObject {
public:
// Имя класса (типа данных).
    [[nodiscard]] virtual std::string classname() const = 0;
// Размер занимаемой памяти.
    [[nodiscard]] virtual unsigned int size() const = 0;
};

class IFigureUnion : public IGeoFig, public CVector2D, public IPhysObject, public IPrintable, public IDialogInitiable, public BaseCObject {

};