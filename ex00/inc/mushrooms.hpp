/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whateverMan.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: michel_32 <michel_32@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 17:32:54 by michel_32         #+#    #+#             */
/*   Updated: 2026/04/20 17:37:51 by michel_32        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


template<typename T>
void swap(T &a, T &b)
{
    T tmp = a;
    a = b;
    b = tmp;
}

template<typename T>
T const &min(T const &a, T const &b)
{
    if (b <= a)
        return (b);
    else
        return (a); 
}

template<typename T>
T const &max(T const &a, T const &b)
{
    if (b >= a)
        return (b);
    else
        return (a);
}