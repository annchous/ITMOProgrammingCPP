//
// Created by Анна on 03.03.2020.
//

#include <iostream>
#include "Hexagon.h"

Hexagon::Hexagon()
: r(0, 0)
, R(0, 0)
, Ox(0)
, Oy(0)
, Mass(0)
, pos(0, 0)
{
}

Hexagon::Hexagon(CVector2D& r_, CVector2D& R_, double Ox_, double Oy_, double Mass_, CVector2D& pos_)
: r(r_)
, R(R_)
, Ox(Ox_)
, Oy(Oy_)
, Mass(Mass_)
, pos(pos_)
{
}

double Hexagon::GetR() {
    return (sqrt((r.x-Ox) * (r.x-Ox) + (r.y-Oy) * (r.y-Oy)));
}

double Hexagon::Get_r() {
    return (sqrt(3) * GetR() / 2);
}

double Hexagon::square() {
    return (3 * sqrt(3) * GetR() * GetR() / 2);
}

double Hexagon::perimeter() {
    return (6 * GetR());
}

double Hexagon::mass() const {
    return Mass;
}

CVector2D Hexagon::position() {
    return pos;
}

bool Hexagon::operator==(const IPhysObject &ob) const {
    return mass() == ob.mass();
}

bool Hexagon::operator<(const IPhysObject &ob) const {
    return mass() < ob.mass();
}

void Hexagon::draw() {
    std::cout << "Center coordinates: {" << Ox << ", " << Oy << "}" << std::endl << "R length: " << GetR() << std::endl;
    std::cout << "r length: " << Get_r() << std::endl << "Mass: " << Mass << std::endl << "Position coordinates: {" << pos.x << ", " << pos.y << "}" << std::endl;
    std::cout << "Square: " << square() << std::endl << "Perimeter: " << perimeter() << std::endl;
}

void Hexagon::initFromDialog() {
    std::cout << "Enter center x and y coordinates, end of R coordinates (x and y), " << std::endl;
    std::cout << "end of r coordinates (x and y), mass ans position coordinates (x and y): " << std::endl;
    std::cin >> Ox >> Oy >> R.x >> R.y >> r.x >> r.y >> Mass >> pos.x >> pos.y;
}

std::string Hexagon::classname() const {
    return name;
}

unsigned int Hexagon::size() const {
    return sizeof(*this);
}

Hexagon::~Hexagon() = default;