/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phartman <phartman@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 14:31:33 by phartman          #+#    #+#             */
/*   Updated: 2025/01/22 14:34:05 by phartman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _value(0) {
	//std::cout << "Default constructor called" << std::endl;
};

Fixed::Fixed(const Fixed &copy) {
	//std::cout << "Copy constructor called" << std::endl;
	*this = copy;
};

Fixed::Fixed(const int value) {
	//std::cout << "Int constructor called" << std::endl;
	_value = value << _bits;
};

Fixed::Fixed(const float value){
	//std::cout << "Float constructor called" << std::endl;
	_value = static_cast<int>(roundf(value * (1 << _bits)));
};

Fixed& Fixed::operator=(const Fixed &copy) {
	//std::cout << "Copy assignment operator called" << std::endl;
	if(this != &copy){
		_value = copy._value;
	}
	return *this;
}

Fixed::~Fixed() {
	//std::cout << "Destructor called" << std::endl;
};

int Fixed::getRawBits(void) const{
	//std::cout << "getRawBits member function called" << std::endl;
	return _value;
}

void Fixed::setRawBits(int const raw){
	_value = raw;
}

int Fixed::toInt() const{
	return _value >> _bits;
}

float Fixed::toFloat() const{
	return static_cast<float>(_value) / (1 << _bits);
}

std::ostream& operator<<(std::ostream& out, const Fixed &fixed){
	out << fixed.toFloat();
	return out;
}

bool Fixed::operator>(const Fixed &fixed) const{
	return _value > fixed._value;
}

bool Fixed::operator<(const Fixed &fixed) const{
	return _value < fixed._value;
}

bool Fixed::operator>=(const Fixed &fixed) const{
	return _value >= fixed._value;
}

bool Fixed::operator<=(const Fixed &fixed) const{
	return _value <= fixed._value;
}

bool Fixed::operator==(const Fixed &fixed) const{
	return _value == fixed._value;
}

bool Fixed::operator!=(const Fixed &fixed) const{
	return _value != fixed._value;
}

Fixed Fixed::operator+(const Fixed &fixed) const{
	int result = this->_value + fixed._value;
	Fixed tmp = Fixed();
	tmp._value = result;
	return (tmp);
}

Fixed Fixed::operator-(const Fixed &fixed) const{
	int result = this->_value - fixed._value;
	Fixed tmp = Fixed();
	tmp._value = result;
	return (tmp);
}

Fixed Fixed::operator*(const Fixed &fixed) const{
	Fixed tmp = Fixed(this->_value * fixed._value);
	tmp._value = tmp._value >> (_bits *2);
	return tmp;
}

Fixed Fixed::operator/(const Fixed &fixed) const{

	Fixed tmp = Fixed((this->_value << _bits) / fixed._value);
	tmp._value = tmp._value >> _bits;
	return tmp;
}


Fixed& Fixed::operator++()
{
	_value++;
	return *this;
}

Fixed Fixed::operator++(int)
{
	Fixed tmp(*this);
	++(*this);
	return tmp;
}

Fixed& Fixed::operator--()
{
	_value--;
	return *this;
}

Fixed Fixed::operator--(int)
{
	Fixed tmp(*this);
	--(*this);
	return tmp;
}

Fixed& Fixed::min(Fixed &a, Fixed &b){
	return a < b ? a : b;
}

const Fixed& Fixed::min(const Fixed &a, const Fixed &b){
	return a < b ? a : b;
}

Fixed& Fixed::max(Fixed &a, Fixed &b){
	return a > b ? a : b;
}

const Fixed& Fixed::max(const Fixed &a, const Fixed &b){
	return a > b ? a : b;
}










