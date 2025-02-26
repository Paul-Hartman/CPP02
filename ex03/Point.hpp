/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phartman <phartman@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 15:25:21 by phartman          #+#    #+#             */
/*   Updated: 2025/02/26 13:57:48 by phartman         ###   ########.fr       */
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

	private:
		const Fixed _x;
		const Fixed _y;
};