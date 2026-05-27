/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkaras-g <bkaras-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 17:32:27 by michel_32         #+#    #+#             */
/*   Updated: 2026/05/27 16:13:33 by bkaras-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mushrooms.hpp"
#include <string>
#include <iostream>

int	main(void)
{
	int a = 2;
	int b = 3;
	std::cout << "\nBefore swapping mushrooms" << std::endl;
	std::cout << "a = " << a << ", b = " << b << std::endl;
	::swap(a, b); //to force the call to the swap() in the global namespace
	//from mushrooms.hpp
	std::cout << "\nAfter swapping mushrooms" << std::endl;
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "\nmin( a, b ) = " << ::min(a, b) << std::endl;
	std::cout << "max( a, b ) = " << ::max(a, b) << std::endl;

	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	
	std::cout << "\nc = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min(c, d) << std::endl;
	std::cout << "max( c, d ) = " << ::max(c, d) << std::endl;
	return (0);
}