//
// Created by Анна on 03.03.2020.
//

#pragma once

#include "Interfaces.h"
#include <cmath>

class Hexagon : public IFigureUnion {
private:
    CVector2D r{};
    CVector2D R{};
    double Ox;
    double Oy;
    double Mass;
    std::string name = "Hexagon";
    CVector2D pos{};
public:

    Hexagon();
    Hexagon(CVector2D&, CVector2D&, double, double, double, CVector2D&);
    ~Hexagon();

    double square() override;
    double perimeter() override;
    [[nodiscard]] double mass() const override;
    [[nodiscard]] CVector2D position() override;
    bool operator==( const IPhysObject& ob ) const override;
    bool operator<( const IPhysObject& ob ) const override;
    void draw() override;
    void initFromDialog() override;
    [[nodiscard]] std::string classname() const override;
    [[nodiscard]] unsigned int size() const override;
    double GetR();
    double Get_r();

};