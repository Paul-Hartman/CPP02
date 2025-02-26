/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phartman <phartman@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 14:31:36 by phartman          #+#    #+#             */
/*   Updated: 2025/02/26 13:25:18 by phartman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Fixed.hpp"

void testAddition() {
	Fixed a(5.05f);
	Fixed b(2.0f);
	Fixed result = a + b;
	std::cout << "Addition: " << a << " + " << b << " = " << result << std::endl; // Should print 7.05
}

void testSubtraction() {
	Fixed a(5.05f);
	Fixed b(2.0f);
	Fixed result = a - b;
	std::cout << "Subtraction: " << a << " - " << b << " = " << result << std::endl; // Should print 3.05
}

void testMultiplication() {
	Fixed a(5.05f);
	Fixed b(2.0f);
	Fixed result = a * b;
	std::cout << "Multiplication: " << a << " * " << b << " = " << result << std::endl; // Should print 10.1
	
}

void testDivision() {
	Fixed a(5.05f);
	Fixed b(2.0f);
	Fixed result = a / b;
	std::cout << "Division: " << a << " / " << b << " = " << result << std::endl << std::endl; // Should print 2.525
}

void testIncrement() {
	std::cout << "***Increment test***" << std::endl;
	Fixed a(5.05f);
	std::cout << "Initial: " << a << std::endl; // Should print 5.05
	std::cout << "Prefix Increment: " << ++a << std::endl; // Should print 5.0546875 (5.05 + 1/256)
	std::cout << "After Prefix Increment: " << a << std::endl; // Should print 5.0546875
	std::cout << "Postfix Increment: " << a++ << std::endl; // Should print 5.0546875
	std::cout << "After Postfix Increment: " << a << std::endl << std::endl; // Should print 5.05859375 (5.0546875 + 1/256)
}

void testDecrement() {
	std::cout << "***Decrement test***" << std::endl;
	Fixed a(5.05f);
	std::cout << "Initial: " << a << std::endl; // Should print 5.05
	std::cout << "Prefix Decrement: " << --a << std::endl; // Should print 5.046875 (5.05 - 1/256)
	std::cout << "After Prefix Decrement: " << a << std::endl; // Should print 5.046875
	std::cout << "Postfix Decrement: " << a-- << std::endl; // Should print 5.046888
	std::cout << "After Postfix Decrement: " << a << std::endl << std::endl; // Should print 5.04296875 (5.046875 - 1/256)
}

void testSubject() {
	std::cout << "***Subject test***" << std::endl;
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl << std::endl;
}

void testMinMax() {
	Fixed a(5.05f);
	Fixed b(2.0f);
	Fixed c = Fixed::max(a, b);
	std::cout << "Max: " << c << std::endl; // Should print 5.05
	c = Fixed::min(a, b);
	std::cout << "Min: " << c << std::endl; // Should print 2
}


int main( void ) {

	testSubject();
	testAddition();
	testSubtraction();
	testMultiplication();
	testDivision();
	testIncrement();
	testDecrement();
	testMinMax();
	
	return 0;
}
