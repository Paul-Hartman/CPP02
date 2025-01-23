
#include "Point.hpp"

bool bsp(Point const a, Point const b, Point const c, Point const point){
	Fixed sideA = sideOfLine(a, b, point);
	Fixed sideB = sideOfLine(b, c, point);
	Fixed sideC = sideOfLine(c, a, point);
	 bool has_neg = (sideA < 0) || (sideB < 0) || (sideC < 0);
    bool has_pos = (sideA > 0) || (sideB > 0) || (sideC > 0);

    return !(has_neg && has_pos);
}

Fixed sideOfLine(Point const a, Point const b, Point const point)
{
	return Fixed(b.getX() - a.getX()) * (point.getY() - a.getY()) - (b.getY() - a.getY()) * (point.getX() - a.getX());
}