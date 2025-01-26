#include "./Point.hpp"


void printPointers(Point a, Point b, Point c, Point p)
{
	std::cout << "a: ";
	a.printPointer();
	std::cout << "b: ";
	b.printPointer();
	std::cout << "c: ";
	c.printPointer();
	std::cout <<"p: ";
	p.printPointer();
}

void runTests()
{
	{
		Point a(0, 0);
		Point b(0, 3);
		Point c(3, 1);
		Point p(1, 1);

		std::cout << "Test 0 - Basic Test" << std::endl;
		printPointers(a, b, c, p);
		std::cout << "Expected: Point is in Triangle" << std::endl;
		if (bsp(a,b,c,p))
			std::cout << "Point is in Triangle" << std::endl;
		else
			std::cout << "Point is not in Triangle" << std::endl;
	}
    {
        Point a(0, 0);
        Point b(0, 3);
        Point c(3, 1);
        Point p(4, 4);
        
        std::cout << "Test 2 - Outer point" << std::endl;
        printPointers(a, b, c, p);
		std::cout << "Expected: Point is not in Triangle" << std::endl;
        if (bsp(a,b,c,p))
            std::cout << "Result: Point is in Triangle" << std::endl;
        else
            std::cout << "Result: Point is not in Triangle" << std::endl;
        std::cout << "------------------------" << std::endl;
    }
    {
        Point a(0, 0);
        Point b(0, 3);
        Point c(3, 1);
        Point p(0, 1.5f);
        
        std::cout << "Test 3 - Border point" << std::endl;
        printPointers(a, b, c, p);
		std::cout << "Expected: Point is not in Triangle" << std::endl;
        if (bsp(a,b,c,p))
            std::cout << "Result: Point is in Triangle" << std::endl;
        else
            std::cout << "Result: Point is not in Triangle" << std::endl;
        std::cout << "------------------------" << std::endl;
    }
	{
		Point a(0, 0);
		Point b(0, 5);
		Point c(5, 0);
		Point p(1, 1);

		std::cout << "Test 4 " << std::endl;
		printPointers(a, b, c, p);
		std::cout << "Expected: Point is in Triangle" << std::endl;
		if (bsp(a,b,c,p))
			std::cout << "Point is in Triangle" << std::endl;
		else
			std::cout << "Point is not in Triangle" << std::endl;
	}
}


int main( void )
{
	runTests(); // https://www.geogebra.org/classic#graphing)
	return (0);
}


// int	main(void)
// {
// 	Point	a(5, 5);
// 	Point	b(2, 9);
// 	Point	c(0, 5);
// 	Point	p(3, 7);
// 	Point	p2(4, 7);

// 	std::cout << "Point a.x = " << a.getX() << " a.y = " << a.getY() << std::endl;
// 	std::cout << "Point b.x = " << b.getX() << " b.y = " << b.getY() << std::endl;
// 	std::cout << "Point c.x = " << c.getX() << " c.y = " << c.getY() << std::endl;
// 	std::cout << "Point p.x = " << p.getX() << " p.y = " << p.getY() << std::endl;
// 	std::cout << "Point p2.x = " << p2.getX() << " p2.y = " << p2.getY() << std::endl;
// 	if (bsp(a, b, c, p))
// 		std::cout << "p is in the triangle" << std::endl;
// 	else
// 		std::cout << "p is out of the triangle" << std::endl;
// 	if (bsp(a, b, c, p2))
// 		std::cout << "p2 is in the triangle" << std::endl;
// 	else
// 		std::cout << "p2 is out of the triangle" << std::endl;
// 	return 0;
// }