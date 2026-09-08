/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Serializer.hpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: jul <jul@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/09/08 14:55:11 by jul           #+#    #+#                 */
/*   Updated: 2026/09/08 15:35:20 by jul           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <cstdint>
#include <iostream>
#include <Data.hpp>

class Serializer
{
	private:
		Serializer();
		Serializer(const Serializer &other);
		Serializer& operator=(const Serializer &other);
		~Serializer();

	public:
		static uintptr_t serialize(Data *ptr);
		static Data *deserialize(uintptr_t raw);
};

