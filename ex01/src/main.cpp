/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: michel_32 <michel_32@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 17:55:34 by michel_32         #+#    #+#             */
/*   Updated: 2026/04/21 14:36:44 by michel_32        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "iter.hpp"

void print(const int &i)
{
    std::cout << i << std::endl;
}

void increment32(int &i)
{
    i+=32;
}

int main(void)
{
    int tab[] = {2, 4, 8, 16, 32, 32, 32, 32};
    unsigned int length = 8;

    std::cout << MAGENTA << "\n-----------initial tab----------" << RESET << std::endl;
    iter(tab, length, print);
    std::cout << "\n";
    
    iter(tab, length, increment32);

    std::cout << MAGENTA << "\n-----------incremented tab----------" << RESET << std::endl;
    iter(tab, length, print);
    std::cout << "\n";
}
