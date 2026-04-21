/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: michel_32 <michel_32@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 15:07:25 by michel_32         #+#    #+#             */
/*   Updated: 2026/04/21 15:32:49 by michel_32        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <string>

/*
Need to store the functions implementations here because of the typename. If 
the functions would have been implemented in another file, the linker would have
failed.
*/

template <typename T> class Array
{
  public:
	// ---------- Constructors / Destructor ----------

	Array<T>(void) : _array(new T[0]), _size(0) {
        std::cout << "Array<T> default constructor called" << std::endl;
    };

	Array<T>(const Array<T> &copy){
        std::cout << "Array<T> copy constructor called" << std::endl;
        *this = copy;
    };
    
	~Array<T>(void){
        std::cout << "Array<T> destructor called" << std::endl;
        delete[] _array;
    };

	// ---------- Overloading Operators Methods -------

	Array<T> &operator=(const Array<T> &copy){
        std::cout << "Array<T> assignment operator called" << std::endl;
        if (this != &copy) {
            // copy data members here
        }
        return (*this);
    };

	// ---------- Getter and Setter Methods ------------

	// ---------- Member Methods -----------------------

  protected:
	// ---------- Protected Data Members ---------------------

  private:
	// ---------- Private Data members -------------------------
	T           *_array;
	unsigned int _size;
};

#endif // ARRAY_HPP