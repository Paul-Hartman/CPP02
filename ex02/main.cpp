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



 testAddition();
    testSubtraction();
    //testMultiplication();
    //testDivision();
	return 0;

}
