/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phartman <phartman@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 14:31:36 by phartman          #+#    #+#             */
/*   Updated: 2025/01/22 17:37:00 by phartman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Point.hpp"
#include "Fixed.hpp"
//#include "bsp.cpp"

Fixed sideOfLine(Point const a, Point const b, Point const point);

int main( void ) {
	
	std::cout << "Side of line: " << sideOfLine(Point(0, 0), Point(1, 1), Point(2, 2)) << std::cout << std::endl;
	return 0;
}
