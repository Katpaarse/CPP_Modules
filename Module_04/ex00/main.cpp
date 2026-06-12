/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: jukerste <jukerste@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/06/08 13:36:41 by jukerste      #+#    #+#                 */
/*   Updated: 2026/06/12 13:55:03 by jukerste      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main(void)
{
	std::cout << "Subject tests:" << std::endl;
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	std::cout << std::endl;

	std::cout << "Some extra tests to show everything works as intended:" << std::endl;
	Dog dog;
	Cat cat;
	std::cout << dog.getType() << " says: ";
	dog.makeSound();
	std::cout << cat.getType() << " says: ";
	cat.makeSound();
	std::cout << std::endl;

	const WrongAnimal* wrongAnimal = new WrongAnimal();
	const WrongAnimal* wrongCat = new WrongCat();
	std::cout << wrongAnimal->getType() << " ";
	wrongAnimal->makeSound();
	std::cout << wrongCat->getType() << " ";
	wrongCat->makeSound();
	delete meta;
	delete j;
	delete i;
	delete wrongAnimal;
	delete wrongCat;
	return (0);
}
