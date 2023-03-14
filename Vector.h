#pragma once
#include <iostream>
using namespace std;

// Declare your class here
class Vector
{
private:
    /* double x, y; */
public:
    double x, y;
    Vector();
    Vector(double a, double b);
    ~Vector();

    int operator==(const Vector &data){
        if(x == data.x && y == data.y){
            cout << "Both vector are same" << endl;
            return 1;
        }
        cout << "Both vector are not the same" << endl;
        return 0;
    }
    int operator!=(const Vector &data){
        if(x != data.x || y != data.y){
            cout << "Both vector are not the same" << endl;
            return 1;
        }
        cout << "Both vector are same" << endl;
        return 0;
    }
    /* Addition */
    Vector operator+(const Vector &data){
        double x_plus = x + data.x;
        double y_plus = y + data.y;
        //cout << "x: " << x << ", y: " << y << endl;
        //cout << "x: " << data.x << ", y: " << data.y << endl;
        Vector result {x_plus, y_plus};
        cout << "x_plus: " << x_plus << ", y_plus: " << y_plus << endl;
        return result;
    }
    /* Multiplication */
    Vector operator*(const double &constant){
        double x_multi = x * constant;
        double y_multi = y * constant;
        //cout << "x: " << x << ", y: " << y << endl;
        //cout << "const: " << constant << endl;
        Vector result {x_multi, y_multi};
        //cout << "x_multi: " << x_multi << ", y_multi: " << y_multi << endl;
        return result;
    }
    /* Division */
    Vector operator/(const double &constant){
        double x_div = x / constant;
        double y_div = y / constant;
        cout << "x: " << x << ", y: " << x << endl;
        cout << "constant: " << constant << endl;
        Vector result {x_div, y_div};
        cout << "x_div: " << x_div << ", y_div: " << y_div << endl;
        return result;
    }
    /* Substraction */
    Vector operator-(const Vector &data){
        double x_sub = x - data.x;
        double y_sub = y - data.y;
        cout << "x: " << x << ", y: " << x << endl;
        cout << "x: " << data.x << ", y: " << data.y << endl;
        Vector result {x_sub, y_sub};
        cout << "x_sub: " << x_sub << ", y_sub: " << y_sub << endl;
        return result;
    } 
    /* Negative */
    Vector operator-() { 
        double x_neg = -x;
        double y_neg = -y;
        Vector result {x_neg, y_neg};
        cout << "x_neg: " << x_neg << ", y_neg: " << y_neg << endl;
        return result;    
    }
};

Vector::Vector()
{
    x = 0.0;
    y = 0.0;
    cout << "x: " << x << ", y: " << y << endl;
}

Vector::Vector(double a, double b)
{
    x = a;
    y = b;
    cout << "x: " << x << ", y: " << y << endl;
}

Vector::~Vector()
{
    /*double* x_ptr = &x;
    double* y_ptr = &y;
    delete x_ptr;
    delete y_ptr;*/
    cout << "destructor" << endl;
}
/* Multiplication */
Vector operator*(const double &constant, const Vector &data){
    double x_multi = constant * data.x;
    double y_multi = constant * data.y;
    //cout << "x: " << data.x << ", y: " << data.x << endl;
    //cout << "constant: " << constant << endl;
    Vector result {x_multi, y_multi};
    //cout << "x_multi: " << x_multi << ", y_multi: " << y_multi << endl;
    return result;
}
