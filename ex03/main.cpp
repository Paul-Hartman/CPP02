/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phartman <phartman@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 14:31:36 by phartman          #+#    #+#             */
/*   Updated: 2025/02/04 16:29:16 by phartman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Point.hpp"
#include "Fixed.hpp"

bool bsp(Point const a, Point const b, Point const c, Point const point);

int main( void ) {
	Point a = Point(1, 1);
	Point b = Point(4, 1);
	Point c = Point(2, 5);
	Point point = Point(2, 3);
	if (bsp(a, b, c, point)){
		std::cout << "Point is inside the triangle" << std::endl;
	}
	else{
		std::cout << "Point is outside the triangle" << std::endl;
	}
	return 0;
}
