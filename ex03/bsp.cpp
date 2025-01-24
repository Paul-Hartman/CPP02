
#include "Point.hpp"

Fixed sideOfLine(Point const a, Point const b, Point const point)
{
	Fixed first = Fixed((point.getX() - b.getX()) * (a.getY() - b.getY()));
	std::cout << "first: " << first << std::endl;
	Fixed second = Fixed((a.getX() - b.getX()) * (point.getY() - b.getY()));
	std::cout << "second: " << second << std::endl;
	return Fixed(first - second);
}

bool bsp(Point const a, Point const b, Point const c, Point const point){
	Fixed sideA = sideOfLine(a, b, point);
	std::cout << "sideA: " << sideA << std::endl;
	Fixed sideB = sideOfLine(b, c, point);
	std::cout << "sideB: " << sideB << std::endl;
	Fixed sideC = sideOfLine(c, a, point);
	std::cout << "sideC: " << sideC << std::endl;
	 bool has_neg = (sideA < 0) || (sideB < 0) || (sideC < 0);
    bool has_pos = (sideA > 0) || (sideB > 0) || (sideC > 0);

    return !(has_neg && has_pos);
}

