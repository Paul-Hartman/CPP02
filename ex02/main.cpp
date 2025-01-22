/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phartman <phartman@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 14:31:36 by phartman          #+#    #+#             */
/*   Updated: 2025/01/22 14:39:49 by phartman         ###   ########.fr       */
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
    std::cout << "Division: " << a << " / " << b << " = " << result << std::endl; // Should print 2.525
}

void testIncrement() {
    Fixed a(5.05f);
    std::cout << "Initial: " << a << std::endl; // Should print 5.05
    std::cout << "Prefix Increment: " << ++a << std::endl; // Should print 5.0546875 (5.05 + 1/256)
    std::cout << "After Prefix Increment: " << a << std::endl; // Should print 5.0546875
    std::cout << "Postfix Increment: " << a++ << std::endl; // Should print 5.0546875
    std::cout << "After Postfix Increment: " << a << std::endl; // Should print 5.05859375 (5.0546875 + 1/256)
}

void testDecrement() {
    Fixed a(5.05f);
    std::cout << "Initial: " << a << std::endl; // Should print 5.05
    std::cout << "Prefix Decrement: " << --a << std::endl; // Should print 5.046875 (5.05 - 1/256)
    std::cout << "After Prefix Decrement: " << a << std::endl; // Should print 5.046875
    std::cout << "Postfix Decrement: " << a-- << std::endl; // Should print 5.046875
    std::cout << "After Postfix Decrement: " << a << std::endl; // Should print 5.04296875 (5.046875 - 1/256)
}


int main( void ) {
	//Fixed a;
	//Fixed const b( Fixed( 5.05f ) / Fixed( 2.0f ) );
	// std::cout << a << std::endl;
	// std::cout << ++a << std::endl;
	// std::cout << a << std::endl;
	// std::cout << a++ << std::endl;
	// std::cout << a << std::endl;

	//std::cout << b << std::endl;

// 	Fixed a(10.0f);
// Fixed b(3.0f);
// Fixed result = a / b;

//std::cout << "a: " << a.getRawBits() << std::endl; // Should print 5.05
//std::cout << "b: " << b.getRawBits()  << std::endl; // Should print 2.0
//std::cout << "a: " << a << std::endl; // Should print 5.05
//std::cout << "b: " << b  << std::endl; // Should print 2.0
//std::cout << "result: " << result << std::endl; // Should print 2.525
// Fixed c(a/b);
// std::cout << "c: " << c << std::endl; // Should print 2.525



 //testAddition();
   // testSubtraction();
    //testMultiplication();
    //testDivision();
	testDecrement();
	testIncrement();
	Fixed a(5.05f);
	Fixed b(5.06f);
	Fixed c = Fixed::min(a, b);
	Fixed d = Fixed::max(a, b);
	std::cout << "Min: " << c << std::endl; // Should print 2.0
	std::cout << "Max: " << d << std::endl; // Should print 5.05
	return 0;

}
