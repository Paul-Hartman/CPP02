#include "Point.hpp"

Point::Point() : _x(0), _y(0) {
	//std::cout << "Point Default constructor called" << std::endl;
};

Point::Point(const Point &copy) : _x(copy._x), _y(copy._y)
{
	//std::cout << "Point Copy constructor called" << std::endl;
}

Point::Point(const float x, const float y): _x(x), _y(y) {
	//std::cout << "Point Float constructor called" << std::endl;
};

// Point& Point::operator=(const Point &copy) {
// 	if (this != &copy){
// 		_x = copy._x;
// 		_y = copy._y;
// 		std::cout << "Assignation operator called" << std::endl;
// 	}
// 	else
// 		return *this;
// }

Point::~Point() {
	//std::cout << "Destructor called" << std::endl;
};

// void swap(Point &a, Point &b){
// 	using std::swap;
// 	swap(a._x, b._x);
// 	swap(a._y, b._y);
// }

const Fixed Point::getX() const {
	return _x;
}

const Fixed Point::getY() const {
	return _y;
}