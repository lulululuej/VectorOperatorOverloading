#include "Vector.h"

// implement all the functions declared in Vector.h here

Vector::Vector(double a, double b)
    : x{a}, y{b}
{
    //cout << "x: " << x << ", y: " << y << endl;
}

bool Vector::operator==(Vector const& data) const {
    //cout << "x : " << x << " data.x : " << data.x << " y : " << y << " data.y" << data.y << endl;
    return x == data.x && y == data.y;
}

bool Vector::operator!=(Vector const& data) const {
    //cout << "x : " << x << " data.x : " << data.x << " y : " << y << " data.y" << data.y << endl;
    return x != data.x || y != data.y;
}

Vector Vector::operator+(const Vector &data){
    //cout << "x: " << x << ", y: " << y << endl;
    //cout << "data.x: " << data.x << ", data.y: " << data.y << endl;
    x += data.x;
    y += data.y;
    //cout << "x: " << x << ", y: " << y << endl;
    //cout << *this << endl;
    return *this;
}

Vector Vector::operator*(const double &constant){
    //cout << "x: " << x << ", y: " << y << endl;
    //cout << "const: " << constant << endl;
    x *= constant;
    y *= constant;
    //cout << "x: " << x << ", y: " << y << endl;
    return *this;
}

// Member function NOT allowed to use more than one parameter, cuz it initially has an implicit parameter this.
/*Vector Vector::operator*(const double &constant, const Vector &data){
    cout << "data.x: " << data.x << ", data.y: " << data.y << endl;
    cout << "constant: " << constant << endl;
    x = constant * data.x;
    y = constant * data.y;
    cout << "x: " << x << ", y: " << x << endl;
    return *this;
}*/

Vector::~Vector()
{
    /*double* x_ptr = &x;
    double* y_ptr = &y;
    delete x_ptr;
    delete y_ptr;*/
    cout << "destructor" << endl;
}