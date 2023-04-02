#pragma once
#include <iostream>
using namespace std;

// Declare your class here
class Vector
{
private:
    double x, y;
public:
    Vector(double a = 0.0, double b = 0.0);

    bool operator==(Vector const& data) const;
    bool operator!=(Vector const& data) const;

    Vector operator+(Vector const& data);
    Vector operator*(double const& constant);
    //Vector operator*(double const& constant, const Vector &data);

    ~Vector();
    
    /* Multiplication */
    /*Vector operator*(const double &constant){
        double x_multi = x * constant;
        double y_multi = y * constant;
        //cout << "x: " << x << ", y: " << y << endl;
        //cout << "const: " << constant << endl;
        Vector result {x_multi, y_multi};
        //cout << "x_multi: " << x_multi << ", y_multi: " << y_multi << endl;
        return result;
    }*/
    /* Division */
    /*Vector operator/(const double &constant){
        double x_div = x / constant;
        double y_div = y / constant;
        cout << "x: " << x << ", y: " << x << endl;
        cout << "constant: " << constant << endl;
        Vector result {x_div, y_div};
        cout << "x_div: " << x_div << ", y_div: " << y_div << endl;
        return result;
    }*/
    /* Substraction */
    /*Vector operator-(const Vector &data){
        double x_sub = x - data.x;
        double y_sub = y - data.y;
        cout << "x: " << x << ", y: " << x << endl;
        cout << "x: " << data.x << ", y: " << data.y << endl;
        Vector result {x_sub, y_sub};
        cout << "x_sub: " << x_sub << ", y_sub: " << y_sub << endl;
        return result;
    }*/ 
    /* Negative */
    /*Vector operator-() { 
        double x_neg = -x;
        double y_neg = -y;
        Vector result {x_neg, y_neg};
        cout << "x_neg: " << x_neg << ", y_neg: " << y_neg << endl;
        return result;    
    }*/
    
};
/* Multiplication */
/*Vector operator*(const double &constant, const Vector &data){
    double x_multi = constant * data.x;
    double y_multi = constant * data.y;
    //cout << "x: " << data.x << ", y: " << data.x << endl;
    //cout << "constant: " << constant << endl;
    Vector result {x_multi, y_multi};
    //cout << "x_multi: " << x_multi << ", y_multi: " << y_multi << endl;
    return result;
}*/
