#include "point.h"

Point::Point(Fraction xcoord, Fraction ycoord) { //constructor
    x = xcoord;
    y = ycoord;
}

void Point::setx(Fraction xcoord) { //setter 
    x = xcoord;
}

void Point::sety(Fraction ycoord) { //setter 
    y = ycoord;
}

Point Point::operator+(const Point& p) { //Addition of two points
    return Point(x + p.x, y + p.y);
}

Point Point::operator-(const Point& p) { //Subtraction of two points
    return Point(x - p.x, y - p.y);
}

Point Point::operator*(const Fraction& f) { //Scalar Multiplication
    return Point(x * f, y * f); 
}

Fraction Point::operator*(const Point& p) { //Cross Product
    return (x * p.y) - (y * p.x);
}

std::istream& operator>>(std::istream& is, Point& point) {
    Fraction x, y;
    char par1, comma, par2;

    is >> par1 >> x >> comma >> y >> par2;

    point = Point(x, y);

    return is;
}

std::ostream& operator<<(std::ostream& os, Point& point) {

    Fraction x = p.getx;
    Fraction y = p.gety;
    os << "(" << x << "," << y << ")";

    return os;
}