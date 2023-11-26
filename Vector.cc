#include "Vector.h"
#include <iostream>
#include <cmath>

// implement all the functions declared in Vector.h here
Vector::Vector(/* args */)
    :x{0.0}, y{0.0}
{}

Vector::Vector(double x, double y)
    :x{x}, y{y}
{}

Vector::~Vector()
{
}

bool Vector::operator==(Vector const &vector) {
    return x == vector.x && y == vector.y;
}

bool Vector::operator!=(Vector const &vector) {
    return !(*this == vector);
}

Vector &Vector::operator+=(Vector const &vector) {
    this->x += vector.x;
    this->y += vector.y;
    return *this;
}

Vector &Vector::operator-=(Vector const &vector) {
    this->x -= vector.x;
    this->y -= vector.y;
    return *this;
}

Vector &Vector::operator*=(double constant) {
    this->x *= constant;
    this->y *= constant;
    return *this;
}

Vector &Vector::operator/=(double constant) {
    this->x /= constant;
    this->y /= constant;
    return *this;
}

Vector Vector::operator-() {
    return Vector{-x, -y};
}

void Vector::print() {
    std::cout << "{" << x << ", " << y << "}" << std::endl;
}

Vector operator+(Vector const& lhs, Vector const& rhs) {
    return Vector{lhs} += rhs;
}

Vector operator-(Vector const& lhs, Vector const& rhs) {
    return Vector{lhs} -= rhs;
}

Vector operator*(Vector const& lhs, double constant) {
    return Vector{lhs} *= constant;
}

Vector operator*(double constant, Vector const& rhs) {
    return Vector{rhs} *= constant;
}

Vector operator/(Vector const& lhs, double constant) {
    return Vector{lhs} /= constant;
}

double Vector::length() {
    double length = sqrt(std::pow(x,2) + std::pow(y,2));
    return length;
}

std::ostream& operator<<(std::ostream& os, const Vector& vector) {
    os << "(" << vector.x << ", " << vector.y << ")" ;
    return os;
}

std::istream& operator>>(std::istream& is, Vector& vector) {
    Vector temp{};
    is >> std::ws;
    if(is.peek() == '(') {
        if(is.ignore(1) >> std::ws >> temp.x >> std::ws) {
            if(is.peek() == ',') {
                if(is.ignore(1) >> std::ws >> temp.y >> std::ws) {
                    if(is.peek() == ')') {
                        is.ignore(1);
                        is >> std::ws;
                        vector = temp;
                        return is;
                    }
                }
            }
        }
    }
    is.setstate(std::ios::failbit);
    return is;
}