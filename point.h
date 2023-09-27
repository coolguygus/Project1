

#include "fraction.h"

#ifndef _POINT_H
#define _POINT_H

class Point {
    private:
        Fraction x;
        Fraction y;
    
    public:
        Point(Fraction x = 0, Fraction y = 0); //constructor
        ~Point() = default; //destructor

        Fraction getx() { return x; } //getter
        Fraction gety() { return y; } //getter

        void setx(Fraction); //setter
        void sety(Fraction); //setter

        Point operator+(const Point&); //Addition operator
        Point operator-(const Point&); //Subtraction operator

        Point operator*(const Fraction&); //scalar multiplication

        Fraction operator*(const Point&); //cross product
};

//IO Operators

std::istream& operator>>(std::istream&, Point&);
std::ostream& operator<<(std::ostream&, Point&);

#endif