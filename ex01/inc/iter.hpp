/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: michel_32 <michel_32@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 17:55:25 by michel_32         #+#    #+#             */
/*   Updated: 2026/04/21 14:34:19 by michel_32        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define MAGENTA "\033[35m"
#define RESET   "\033[0m"

/*
typename D == Data Type. It represents the type of the elements stored in the array.
typename F == Function pointer type. It represents the entire signature of a function. 

No need to specify the number of arguments in `F func` because the compiler 
deduces the number of arguments of func() in the code: `func(array[i]);`

Defining a function pointer type allows to handle both cases when the argument 
of `func()` is `const` and when it's `non-const`
*/
template<typename D, typename F>
void iter(D *array, const unsigned int length, F func)
{
    for (unsigned int i = 0; i < length; i++)
        func(array[i]);
}