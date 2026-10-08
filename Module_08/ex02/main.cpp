/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: jukerste <jukerste@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/10/06 16:51:32 by jukerste      #+#    #+#                 */
/*   Updated: 2026/10/08 16:04:10 by jukerste      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main()
{
	std::cout << "\nTesting with integers" << std::endl;
	MutantStack<int> mstack;

	mstack.push(5);
	mstack.push(17);

	std::cout << mstack.top() << std::endl;
	mstack.pop();

	std::cout << mstack.size() << std::endl;
	std::cout << mstack.top() << std::endl;

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();

	++it;
	--it;

	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);

	std::cout << "\nTesting with strings.." << std::endl;
	MutantStack<std::string> sstack;
	sstack.push("These");
	sstack.push("are");
	sstack.push("strings");
	for (MutantStack<std::string>::iterator it = sstack.begin(); it != sstack.end(); ++it)
	{
		std::cout << *it << " " << std::endl;;
	}
	return (0);
}
