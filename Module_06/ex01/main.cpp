/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: jul <jul@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/09/08 15:35:43 by jul           #+#    #+#                 */
/*   Updated: 2026/09/08 16:42:40 by jul           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"
#include "Data.hpp"

int main()
{
	Data ogData;
	ogData.id = 10;
	ogData.name = "Test";

	Data *ogPtr = &ogData;
	uintptr_t raw = Serializer::serialize(ogPtr);
	Data *deserializedPtr = Serializer::deserialize(raw);
	
	std::cout << "OG address: " << ogPtr << std::endl;
	std::cout << "Serialized value: " << raw << std::endl;
	std::cout << "Deserialized address: " << deserializedPtr << std::endl;

	if (ogPtr == deserializedPtr)
		std::cout << "Succes! Pointers match." << std::endl;
	else
		std::cout << "Error: Pointers do not match." << std::endl;
	return (0);
}