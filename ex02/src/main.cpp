/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: michel_32 <michel_32@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 17:03:53 by michel_32         #+#    #+#             */
/*   Updated: 2026/04/21 17:07:01 by michel_32        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "Array.hpp"

int main(void)
{
    int * a = new int();
    std::cout << *a << std::endl;
    float * b = new float();
    std::cout << *b << std::endl;
}