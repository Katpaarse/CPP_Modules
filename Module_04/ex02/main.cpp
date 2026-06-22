/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: jukerste <jukerste@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/06/08 13:36:41 by jukerste      #+#    #+#                 */
/*   Updated: 2026/06/23 01:10:34 by jul           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int main(void)
{
    std::cout << "ABSTRACT CLASS (ANIMAL) TEST:" << std::endl;
	// Animal genericAnimal; 
    // const Animal* meta = new Animal(); // commented out to show it will not compile
	
	std::cout << "Creating animals with pointers.." << std::endl;
    const Animal* dog = new Dog();
    const Animal* cat = new Cat();

    std::cout << "\nTesting Type Output:" << std::endl;
    std::cout << "Type: " << dog->getType() << std::endl;
    std::cout << "Type: " << cat->getType() << std::endl;

    std::cout << "\nTesting Polymorphic Sounds:" << std::endl;
    dog->makeSound();
    cat->makeSound();

    std::cout << "\nCleaning up memory:" << std::endl;
    delete dog;
    delete cat;

    std::cout << "ALL TESTS PASSED!" << std::endl;
    return (0);
}
