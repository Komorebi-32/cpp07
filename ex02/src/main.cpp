/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: michel_32 <michel_32@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 17:03:53 by michel_32         #+#    #+#             */
/*   Updated: 2026/04/21 18:15:00 by michel_32         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "Array.hpp"

#define CYAN    "\033[36m"
#define YELLOW  "\033[33m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"

int main(void)
{
    std::cout << YELLOW << "--- Test 1: Tip from subject (new int()) ---" << RESET << std::endl;

    int * a = new int();
    std::cout << "Value of *a: " << *a << std::endl;
    delete a;

    std::cout << std::endl << CYAN << "--- Test 2: Default Construction ---" << RESET << std::endl;

    Array<int> empty;
    std::cout << "Empty array size: " << empty.size() << std::endl;

    std::cout << std::endl << CYAN << "--- Test 3: Size Construction & Default Values ---" << RESET << std::endl;

    unsigned int n = 5;
    Array<int> numbers(n);
    std::cout << "Numbers array size: " << numbers.size() << std::endl;
    for (unsigned int i = 0; i < numbers.size(); i++)
        std::cout << "numbers[" << i << "] = " << numbers[i] << " (should be 0)" << std::endl;

    std::cout << std::endl << CYAN << "--- Test 4: Modifying (i*=10) & Accessing ---" << RESET << std::endl;

    for (unsigned int i = 0; i < numbers.size(); i++)
        numbers[i] = i * 10;
    for (unsigned int i = 0; i < numbers.size(); i++)
        std::cout << "numbers[" << i << "] = " << numbers[i] << std::endl;

    std::cout << std::endl << CYAN << "--- Test 5: Copy Construction (Deep Copy check) ---" << RESET << std::endl;

    Array<int> copy(numbers);
    std::cout << "Modifying original (numbers[0] = 500)" << std::endl;
    numbers[0] = 500;
    std::cout << "original numbers[0]: " << numbers[0] << std::endl;
    std::cout << "copy[0]: " << copy[0] << " (should still be 0)" << std::endl;

    std::cout << std::endl << CYAN << "--- Test 6: Assignment Operator (Deep Copy check) ---" << RESET << std::endl;

    Array<int> assigned;
    assigned = numbers;
    std::cout << "Modifying original (numbers[1] = 99999999)" << std::endl;
    numbers[1] = 99999999;
    std::cout << "original numbers[1]: " << numbers[1] << std::endl;
    std::cout << "assigned[1]: " << assigned[1] << " (should still be 10)" << std::endl;

    std::cout << std::endl << CYAN << "--- Test 7: Out of bounds (Edge Case) ---" << RESET << std::endl;

    try {
        std::cout << "Accessing numbers[10]..." << std::endl;
        std::cout << numbers[10] << std::endl;
    } catch (const std::exception& e) {
        std::cout << RED << "Caught exception: " << e.what() << RESET << std::endl;
    }

    try {
        std::cout << "Accessing numbers[-1] (wraparound)..." << std::endl;
        Array<int> test_wrap(2);
        std::cout << test_wrap[-1] << std::endl;
    } catch (const std::exception& e) {
        std::cout << RED << "Caught exception: " << e.what() << RESET << std::endl;
    }

    std::cout << std::endl << CYAN << "--- Test 8: Const Array ---" << RESET << std::endl;

    const Array<int> const_arr(3);
    std::cout << "Const array size: " << const_arr.size() << std::endl;
    std::cout << "Const access const_arr[0]: " << const_arr[0] << std::endl;
    // const_arr[0] = 5; // Should not compile if uncommented

    std::cout << std::endl << GREEN << "--- All tests complete ---" << RESET << std::endl;

    return 0;
}
