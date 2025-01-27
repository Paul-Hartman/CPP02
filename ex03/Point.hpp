/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phartman <phartman@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 15:25:21 by phartman          #+#    #+#             */
/*   Updated: 2025/01/27 13:13:01 by phartman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Fixed.hpp"

class Point{
	public:
		Point();
		Point(const Point &copy);
		Point(const float x, const float y);
		Point& operator=(const Point &copy);
		~Point();

		friend void swap(Point &a, Point &b);

		const Fixed getX() const;
		const Fixed getY() const;

		Fixed sideOfLine(Point const a, Point const b, Point const point);

		bool bsp(Point const a, Point const b, Point const c, Point const point);

	private:
		const Fixed _x;
		const Fixed _y;
};