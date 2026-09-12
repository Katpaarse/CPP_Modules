/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: jukerste <jukerste@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/09/11 16:07:41 by jukerste      #+#    #+#                 */
/*   Updated: 2026/09/12 18:30:18 by jukerste      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

int main()
{
	std::srand(static_cast<unsigned int>(std::time(NULL)));
	std::cout << "Generating and identifying random objects.." << std::endl;
	
	for (int i = 0; i < 5; ++i)
	{
		std::cout << "\nTest: " << (i + 1) << std::endl;
		Base* basePtr = generate();
		std::cout << "Pointer identified: " << std::endl;
		identify(basePtr);
		std::cout << "Reference identified: " << std::endl;
		identify(*basePtr);
		delete basePtr;
	}
	std::cout << "Extra edgecase test with nullpointer.." << std::endl;
	Base* nullPtr = NULL;
	std::cout << "Pointer identified: " << std::endl;
	identify(nullPtr);
	return (0);
}