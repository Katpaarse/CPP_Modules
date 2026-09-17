/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Whatever.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: jukerste <jukerste@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/09/17 15:58:28 by jukerste      #+#    #+#                 */
/*   Updated: 2026/09/17 19:00:56 by jukerste      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

template <typename T>
void swap(T& a, T& b)
{
	T temp = a;
	a = b;
	b = temp;
}

template <typename T>
T& min(T& a, T& b)
{
	if (a < b)
		return (a);
	return (b);
}

template <typename T>
T& max(T& a, T& b)
{
	if (a > b)
		return (a);
	return (b);
}
