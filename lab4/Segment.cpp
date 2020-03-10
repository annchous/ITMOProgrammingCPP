//
// Created by Анна on 26.02.2020.
//
#include <iostream>
#include "Segment.h"

Segment::Segment() : A(0), B(0), Mass(0), pos(0, 0) {

}

void Segment::draw() {
    std::cout << "Start coordinate: " << A << std::endl << "End coordinate: " << B << std::endl << "Mass: " << Mass << std::endl << "Position coordinates: {" << pos.x << ", " << pos.y << "}" << std::endl;
}

void Segment::initFromDialog() {
    std::cout << "Enter the start and the end points of segment, mass and position coordinates: " << std::endl;
    std::cin >> A >> B >> Mass >> pos.x >> pos.y;
}

std::string Segment::classname() const{
    return name;
}

unsigned int Segment::size() const {
    return sizeof(*this);
}

Segment::Segment(const double a, const double b, const double mass_, const CVector2D& pos_) : A(a), B(b), Mass(mass_), pos(pos_){

}

double Segment::square() {
    return 0;
}

double Segment::perimeter() {
    return 0;
}

CVector2D Segment::position() {
    return pos;
}

bool Segment::operator==(const IPhysObject& ob) const {
    return mass() == ob.mass();
}

bool Segment::operator<(const IPhysObject& ob) const {
    return mass() < ob.mass();
}

double Segment::mass() const {
    return Mass;
}

Segment::Segment(const Segment& segment)
: A(segment.A)
, B(segment.B)
, Mass(segment.Mass)
, pos(segment.pos)
{

}

Segment::~Segment() = default;
