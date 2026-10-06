/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   MutantStack.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: jukerste <jukerste@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/10/06 15:43:35 by jukerste      #+#    #+#                 */
/*   Updated: 2026/10/06 16:57:47 by jukerste      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <stack>
#include <deque>

template <typename T>
class MutantStack : public std::stack<T>
{
	public:
		MutantStack() : std::stack<T>()
		{
		}
		MutantStack(const MutantStack &other) : std::stack<T>(other)
		{
		}
		MutantStack &operator=(const MutantStack &other)
		{
			if (this != &other)
				std::stack<T>::operator=(other);
			return (*this);
		}
		virtual ~MutantStack()
		{	
		}
		typedef typename std::stack<T>::container_type::iterator iterator;
		typedef typename std::stack<T>::container_type::const_iterator const_iterator;

		iterator begin()
		{
			return (std::stack<T>::c.begin());
		}
		iterator end()
		{
			return (std::stack<T>::c.end());
		}
		const_iterator begin() const
		{
			return (std::stack<T>::c.begin());
		}
		const_iterator end() const
		{
			return (std::stack<T>::c.end());
		}
};
