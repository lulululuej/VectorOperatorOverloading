#pragma once
#ifndef VECTOR_H
#define VECTOR_H
#include <iostream>

class Vector
{
private:
    double x;
    double y;
public:
    Vector(/* args */);
    Vector(double x, double y);
    ~Vector();
    bool operator==(Vector const &vector);
    bool operator!=(Vector const &vector);
    Vector &operator+=(Vector const &vector);
    Vector &operator-=(Vector const &vector);
    Vector &operator*=(double constant);
    Vector &operator/=(double constant);
    Vector operator-();     //unary operation
    double length();
    friend std::ostream& operator<<(std::ostream& os, const Vector& vector);
    friend std::istream& operator>>(std::istream& is, Vector& vector);
    void print();
};

Vector operator+(Vector const& lhs, Vector const& rhs);
Vector operator-(Vector const& lhs, Vector const& rhs);
Vector operator*(Vector const& lhs, double constant);
Vector operator*(double constant, Vector const& rhs);
Vector operator/(Vector const& lhs, double constant);

#endif // VECTOR_H
// Declare your class here
