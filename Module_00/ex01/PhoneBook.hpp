/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PhoneBook.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: jukerste <jukerste@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/04/01 13:33:15 by jukerste      #+#    #+#                 */
/*   Updated: 2026/05/02 16:21:49 by jukerste      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include <iostream>
#include <string>
#include <iomanip>
#include <cctype>
#include <cstdlib>
#include "Contact.hpp"

class PhoneBook
{
	private:
	Contact 	_contacts[8];
	int			_index = 0;
	std::string	_maxString(std::string str);
	void		_seeContactInfo(void);
	bool		_validPhoneNum(std::string str);
	bool		_digitsOnly(std::string str);
	
	public:
	void		addContact(void);
	void		searchContact(void);
};

#endif