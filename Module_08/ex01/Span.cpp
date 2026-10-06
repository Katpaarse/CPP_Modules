/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Span.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: jukerste <jukerste@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/10/05 16:42:12 by jukerste      #+#    #+#                 */
/*   Updated: 2026/10/06 15:24:28 by jukerste      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int N) :_maxSize(N)
{
	
}

Span::Span(const Span &other) :_maxSize(other._maxSize), _numbers(other._numbers)
{
	
}

Span	&Span::operator=(const Span &other)
{
	if (this != &other)
	{
		_maxSize = other._maxSize;
		_numbers = other._numbers;
	}
	return (*this);
}

Span::~Span()
{
	
}

void	Span::addNumber(int number)
{
	if (_numbers.size() >= _maxSize)
		throw std::runtime_error("Error: Span is full! not able to add more numbers\n");
	_numbers.push_back(number);
}

int		Span::shortestSpan() const
{
	if (_numbers.size() < 2)
		throw std::runtime_error("Error: not enough numbers to find a span!\n");
	
	std::vector<int> sorted = _numbers;
	std::sort(sorted.begin(), sorted.end());
	
	int minSpan = sorted[1] - sorted[0];
	
	for (size_t i = 1; i < sorted.size() - 1; ++i)
	{
		int diff = sorted[i + 1] - sorted[i];
		if (diff < minSpan)
		{
			diff = minSpan;
		}
	}
	return (minSpan);
}

int Span::longestSpan() const
{
	if (_numbers.size() < 2)
		throw std::runtime_error("Error: not enough numbers to find a span!\n");
	
	int minVal = *std::min_element(_numbers.begin(), _numbers.end());
	int maxVal = *std::max_element(_numbers.begin(), _numbers.end());
	
	return (maxVal - minVal);
}
