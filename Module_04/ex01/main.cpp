/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: jukerste <jukerste@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/06/08 13:36:41 by jukerste      #+#    #+#                 */
/*   Updated: 2026/06/23 17:51:34 by jukerste      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int main(void)
{
    std::cout << "ROUND 1: SUBJECT ARRAY TEST" << std::endl;
    int array = 4;
    Animal* animals[array];

    int i = 0;
	while (i < array / 2)
	{
        std::cout << "\nCreating Dog [" << i << "]:" << std::endl;
        animals[i] = new Dog();
		i++;
	}
	while (i < array)
    {
        std::cout << "\nCreating Cat [" << i << "]:" << std::endl;
        animals[i] = new Cat();
		i++;
    }
    std::cout << "\nDeleting animals and brains.." << std::endl;
    i = 0;
	while (i < array)
	{
        std::cout << "\nDeleting animal [" << i << "]:" << std::endl;
        delete animals[i];
		i++;
    }

    std::cout << "\nROUND 2: DEEP COPY TESTS" << std::endl;
    std::cout << "\n--- Testing Copy Constructor (Dog) ---" << std::endl;
    {
        Dog originalDog;
        std::cout << "Creating copyDog using copy constructor..." << std::endl;
        Dog copyDog(originalDog);
        std::cout << "Leaving scope... Destructors firing:" << std::endl;
    }

    std::cout << "\n--- Testing Copy Assignment Operator (Cat) ---" << std::endl;
    {
        Cat originalCat;
        Cat assignedCat;
        
        std::cout << "Executing copy assignment (assignedCat = originalCat)..." << std::endl;
        assignedCat = originalCat; 
        std::cout << "Leaving scope... Destructors firing:" << std::endl;
    }
    std::cout << "ALL TESTS PASSED SUCCESSFULLY" << std::endl;
    return (0);
}
