/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   easyfind.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: jukerste <jukerste@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/09/22 15:50:28 by jukerste      #+#    #+#                 */
/*   Updated: 2026/09/25 15:08:02 by jukerste      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <algorithm>
#include <stdexcept>
#include <vector>
#include <list>

template <typename T>
typename T::iterator easyfind(T &container, int value)
{
	typename T it = std::find(container.begin(), container.end(), value);
	if (it == container.end())
		throw std::out_of_range("Error: value was not found in the container.\n");
	return (it);
}