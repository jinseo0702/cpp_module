#include "./whatever.hpp"

int main(void)
{
    long a = 2;
    long b = 3;
    temp::swap( a, b );
    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << "min( a, b ) = " << temp::min( a, b ) << std::endl;
    std::cout << "max( a, b ) = " << temp::max( a, b ) << std::endl;
    std::string c = "chaine1";
    std::string d = "chaine2";
    temp::swap(c, d);
    std::cout << "c = " << c << ", d = " << d << std::endl;
    std::cout << "min( c, d ) = " << temp::min( c, d ) << std::endl;
    std::cout << "max( c, d ) = " << temp::max( c, d ) << std::endl;
    return (0);
}