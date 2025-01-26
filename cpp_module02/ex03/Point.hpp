#ifndef POINT_H
#define POINT_H

#include "./Fixed.hpp"
#include <cmath>
#include <string>
#include <iostream>

class Point
{
private:
    const Fixed x;
    const Fixed y;
public:
    Point(void);
    Point(const float num1,  const float num2);
    Point(const Point& ohters);
    ~Point( void );
    Point& operator=(const Point& others);
public:
    float multi(const Point& otr1, const Point& otr2) const;
    float getX(void) const;
    float getY(void) const;
    void printPointer(void) const;
};

bool bsp( Point const a, Point const b, Point const c, Point const point);
#endif