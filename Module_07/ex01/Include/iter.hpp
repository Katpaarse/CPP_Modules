/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   iter.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: jukerste <jukerste@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/09/19 16:56:01 by jukerste      #+#    #+#                 */
/*   Updated: 2026/09/19 18:10:53 by jukerste      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <cstddef>
#include <string>

template <typename T>
void	printElement(T const &x)
{
	std::cout << x << std::endl;
}

template <typename T>
void	increment(T &x)
{
	x = x + 1;
	std::cout << x << std::endl;
}

template <typename T, typename F>
void	iter(T *array, size_t len, F func)
{
	if (!array | !func)
		return ;
	for (size_t i = 0; i < len; ++i)
		func(array[i]);
}
