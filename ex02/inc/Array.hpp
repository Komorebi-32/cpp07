/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: michel_32 <michel_32@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 15:07:25 by michel_32         #+#    #+#             */
/*   Updated: 2026/04/21 17:29:30 by michel_32        ###   ########.fr       */
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

    /*
    Construction with an unsigned int n as a parameter: Creates an array of n elements
    initialized by default. 
    The parentheses at the end of `new T[n]()` guarantee 
    that primitive types will be initialized at zero (int becomes 0, pointers
    become NULL). If no parentheses, the values would have been initialized to garbage
    values. For classes, the default constructor will be called (same as without
    the parentheses)
    */
    Array<T>(unsigned int n) : _array(new T[n]()), _size(n) {
        std::cout << "Array<T> unsigned int n constructor called" << std::endl;
    };

	Array<T>(const Array<T> &copy){
        std::cout << "Array<T> copy constructor called" << std::endl;

        this->_array = new T[copy._size];
        this->_size = copy._size;
        for (unsigned int i = 0; i < this->_size; i++)
              this->_array[i] = copy._array[i];
    };
    
	~Array<T>(void){
        std::cout << "Array<T> destructor called" << std::endl;
        delete[] _array;
    };

	// ---------- Overloading Operators Methods -------

    /*
    Assignment operator with deep copy of each element of the Array. 
    Using the Copy-and-Swap method: allocating and copying elements first, then delete
    the old array. Safer than first delete then copy, because if `new` fails, 
    `this->_array` would be in an undefined state.
    */
	Array<T> &operator=(const Array<T> &copy)
    {
        std::cout << "Array<T> assignment operator called" << std::endl;
        
        if (this != &copy) {
            T *new_array = new T[copy._size];
            for (unsigned int i = 0; i < copy._size; i++)
               new_array[i] = copy._array[i];

            delete[] this->_array;
            this->_array = new_array;
            this->_size = copy._size;  
        }
        return (*this);
    };

    T   &operator[](unsigned int index)
    {
        if (index >= this->_size)
            throw std::exception();
        return (this->_array[index]);
    };

    // Const version: Allows reading from const Arrays
    const T &operator[](unsigned int index) const
    {
        if (index >= this->_size)
            throw std::exception();
        return (this->_array[index]);
    }

	// ---------- Getter and Setter Methods ------------

	// ---------- Member Methods -----------------------
    unsigned int    size() const
    {
        return (this->_size);
    }

  protected:
	// ---------- Protected Data Members ---------------------

  private:
	// ---------- Private Data members -------------------------
	T           *_array;
	unsigned int _size;
};

#endif // ARRAY_HPP