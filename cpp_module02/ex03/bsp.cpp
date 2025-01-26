#include "./Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
    float sign_a = a.multi(b, point);
    float sign_b = b.multi(c, point);
    float sign_c = c.multi(a, point);
    if (sign_a < 0 && sign_b < 0 && sign_c < 0)
        return (true);
    if (sign_a > 0 && sign_b > 0 && sign_c > 0)
        return (true);
    return (false);
}