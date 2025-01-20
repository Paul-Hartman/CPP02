#include "Fixed.hpp"

Fixed::Fixed() : _value(0) {};

Fixed::Fixed(const Fixed &copy) : _value(copy._value) {};

Fixed& Fixed::operator=(const Fixed &copy) {
	_value = copy._value;
	return *this;
}

Fixed::~Fixed() {};



