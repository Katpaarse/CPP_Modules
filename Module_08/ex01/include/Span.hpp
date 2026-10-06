/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Span.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: jukerste <jukerste@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/10/05 16:13:29 by jukerste      #+#    #+#                 */
/*   Updated: 2026/10/06 15:38:09 by jukerste      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <vector>
#include <algorithm>
#include <vector>

class Span
{
	private:
		unsigned int _maxSize;
		std::vector<int> _numbers;
	public:
		Span(unsigned int N);
		Span(const Span &other);
		Span &operator=(const Span &other);
		~Span();

		void	addNumber(int number);
		int		shortestSpan() const;
		int		longestSpan() const;

		template <typename Iterator>
		void addNumber(Iterator begin, Iterator end)
		{
			if (_numbers.size() + std::distance(begin, end) > _maxSize)
				throw std::runtime_error("Error: too many numbers. This exceeds span capacity!\n");
			_numbers.insert(_numbers.end(), begin, end);
		}
};
