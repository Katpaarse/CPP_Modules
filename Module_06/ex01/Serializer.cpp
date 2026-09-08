/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Serializer.cpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: jul <jul@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/09/08 14:55:25 by jul           #+#    #+#                 */
/*   Updated: 2026/09/08 15:34:18 by jul           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

uintptr_t Serializer::serialize(Data *ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data* Serializer::deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data*>(raw));
}