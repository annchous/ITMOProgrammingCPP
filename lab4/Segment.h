//
// Created by Анна on 26.02.2020.
//

#pragma once

#include "Interfaces.h"

class Segment : public IFigureUnion {
private:
    double A;
    double B;
    double Mass;
    std::string name = "Segment";
    CVector2D pos{};
public:

    Segment();
    Segment(double, double, double, const CVector2D&);
    Segment(const Segment& segment);
    ~Segment();

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

};