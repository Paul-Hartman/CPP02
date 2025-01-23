/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phartman <phartman@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 14:31:36 by phartman          #+#    #+#             */
/*   Updated: 2025/01/23 16:50:46 by phartman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Point.hpp"
#include "Fixed.hpp"
//#include "bsp.cpp"

Fixed sideOfLine(Point const a, Point const b, Point const point);

bool bsp(Point const a, Point const b, Point const c, Point const point);

int main( void ) {
	Point a = Point(0, 0);
	Point b = Point(0, 1);
	Point c = Point(-1, 0);
	Point point = Point(0, 0);
	if (bsp(a, b, c, point)){
		std::cout << "Point is inside the triangle" << std::endl;
	}
	else{
		std::cout << "Point is outside the triangle" << std::endl;
	}
	
	
	
	
	
	return 0;
}
