
#include "Point.hpp"

// bool bsp(Point const a, Point const b, Point const c, Point const point){

// }

Fixed sideOfLine(Point const a, Point const b, Point const point)
{
	return Fixed(b.getX() - a.getX()) * (point.getY() - a.getY()) - (b.getY() - a.getY()) * (point.getX() - a.getX());
}