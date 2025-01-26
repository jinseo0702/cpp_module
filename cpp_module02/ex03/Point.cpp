#include "./Fixed.hpp"
#include "./Point.hpp"

Point::Point(void) : x(0), y(0)
{

}

Point::Point(const float num1, const float num2) : x(num1), y(num2)
{

}

Point::Point(const Point& others)
{
    *this = others;
}

Point& Point::operator=(const Point& others)
{
    if (this != &others)
    {
        const_cast<Fixed&>(this->x) = others.x;
        const_cast<Fixed&>(this->y) = others.y;
    }
    return (*this);
}

float Point::multi(const Point& otr1, const Point& otr2) const
{
    Fixed Vec1_x = (otr1.x.toFloat() - this->x.toFloat());
    Fixed Vec1_y = (otr1.y.toFloat() - this->y.toFloat());
    Fixed Vec2_x = (otr2.x.toFloat() - this->x.toFloat());
    Fixed Vec2_y = (otr2.y.toFloat() - this->y.toFloat());

    float temp = ((Vec1_x.toFloat() * Vec2_y.toFloat()) - (Vec2_x.toFloat() * Vec1_y.toFloat()));
    return (temp);
}

float Point::getX(void) const
{
    return (x.toFloat());
}

float Point::getY(void) const
{
    return (y.toFloat());
}

void Point::printPointer(void) const
{
    std::cout<<x<<" "<<y<<std::endl;
}

Point::~Point( void )
{

}