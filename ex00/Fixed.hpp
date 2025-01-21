/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phartman <phartman@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 16:44:42 by phartman          #+#    #+#             */
/*   Updated: 2025/01/21 12:51:52 by phartman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Fixed {

public:
	Fixed();
	Fixed(const Fixed &copy);
	Fixed& operator=(const Fixed &copy);
	~Fixed();

	int getRawBits(void) const;
	void setRawBits(int const raw);
	

private:
	int _value;
	static const int _bits = 8;

};

