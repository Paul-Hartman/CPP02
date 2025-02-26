/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phartman <phartman@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 13:47:11 by phartman          #+#    #+#             */
/*   Updated: 2025/02/26 13:47:12 by phartman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Point.hpp"

// return value pos if on right left side of the line and neg if on the right side
Fixed sideOfLine(Point const a, Point const b, Point const point)
{
	Fixed first = Fixed((point.getX() - b.getX()) * (a.getY() - b.getY()));
	Fixed second = Fixed((a.getX() - b.getX()) * (point.getY() - b.getY()));
	return Fixed(first - second);
}

bool bsp(Point const a, Point const b, Point const c, Point const point){
	Fixed sideA = sideOfLine(a, b, point);
	Fixed sideB = sideOfLine(b, c, point);
	Fixed sideC = sideOfLine(c, a, point);
	bool has_neg = (sideA < 0) || (sideB < 0) || (sideC < 0);
	bool has_pos = (sideA > 0) || (sideB > 0) || (sideC > 0);

	return !(has_neg && has_pos);
}

