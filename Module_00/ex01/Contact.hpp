/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Contact.hpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: jukerste <jukerste@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/04/01 14:57:39 by jukerste      #+#    #+#                 */
/*   Updated: 2026/04/22 15:26:21 by jukerste      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACTS_H
#define CONTACTS_H

#include <iostream>
#include <string>
#include <iomanip>

class Contact
{
	private:
	std::string _firstName;
	std::string _lastName;
	
	public:
	void		setFirstName(std::string str);
	std::string	getFirstname(void);
	void		setLastName(std::string str);
	std::string	getLastname(void);
};

#endif