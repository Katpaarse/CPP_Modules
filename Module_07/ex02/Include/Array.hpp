/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Array.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: jukerste <jukerste@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/09/19 18:19:24 by jukerste      #+#    #+#                 */
/*   Updated: 2026/09/19 19:53:41 by jukerste      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdexcept>
#include <string>

template <typename T>
class Array
{
	private:
		T* _elements;
		unsigned int _size;
	public:
		Array() : _elements(NULL), _size(0)
		{
			
		}
		Array(unsigned int n) : _size(n)
		{
			_elements = new T[n]();
		}
		Array(Array const &other) : _elements(NULL), _size(0)
		{
			*this = other;
		}
		Array &operator=(Array const &other)
		{
			if (this != &other)
			{
				delete[] _elements;
				_size = other._size;
				_elements = new T[_size];
				for (unsigned int i = 0; i < _size; ++i)
					_elements[i] = other._elements[i];
			}
			return (*this);
		}
		~Array()
		{
			delete[] _elements;
		}
		T& operator[](unsigned int i)
		{
			if (i >= _size)
				throw std::out_of_range("Index is out of bounds!\n");
			return (_elements[i]);
		}
		T const& operator[](unsigned int i) const
		{
			if (i >= _size)
				throw std::out_of_range("Index is out of bounds!\n");
			return (_elements[i]);
		}
		unsigned int size() const
		{
			return (_size);
		}
};