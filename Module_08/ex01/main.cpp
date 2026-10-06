/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: jukerste <jukerste@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/10/05 16:17:53 by jukerste      #+#    #+#                 */
/*   Updated: 2026/10/06 15:34:44 by jukerste      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
	std::cout << "\nTesting with given tests from subject.." << std::endl;
	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	
	std::cout << "Testing with adding too many numbers to span" << std::endl;
	try
	{
		Span sp = Span(3);
		sp.addNumber(1);
		sp.addNumber(2);
		sp.addNumber(3);
		sp.addNumber(4);
	}
	catch(const std::exception &e)
	{
		std::cerr << "Exception caught: " << e.what() << std::endl;
	}

	std::cout << "Testing with large span within range.." << std::endl;
	try
	{
		unsigned int size = 15000;
		Span sp(size);

		std::vector<int> vec;
		for (unsigned int i = 0; i < size; ++i)
			vec.push_back(i * 3);
		sp.addNumber(vec.begin(), vec.end());

		std::cout << "Shortest Span: " << sp.shortestSpan() << std::endl;
		std::cout << "Longest Span: " << sp.longestSpan() << std::endl;
		std::cout << "Succesfully added 15000 numbers with iterators!" << std::endl;
	}
	catch(const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	
	return (0);
}
