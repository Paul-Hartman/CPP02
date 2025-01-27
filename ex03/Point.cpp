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

Point& Point::operator=(const Point &copy) {
	(void)copy;
	return *this;
}

Point::~Point() {
	//std::cout << "Destructor called" << std::endl;
};


const Fixed Point::getX() const {
	return _x;
}

const Fixed Point::getY() const {
	return _y;
}