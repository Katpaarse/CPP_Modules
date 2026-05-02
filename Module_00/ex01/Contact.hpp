/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Contact.hpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: jukerste <jukerste@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/04/01 14:57:39 by jukerste      #+#    #+#                 */
/*   Updated: 2026/05/01 14:36:21 by jukerste      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACTS_H
#define CONTACTS_H

#include <iostream>
#include <string>
#include <iomanip>
#include <cctype>

class Contact
{
	private:
	std::string _firstName;
	std::string _lastName;
	std::string	_nickName;
	std::string	_phoneNumber;
	std::string _darkestSecret;
	bool		_digitsOnly(std::string str);
	
	public:
	void		setFirstName(std::string str);
	std::string	getFirstName(void);
	void		setLastName(std::string str);
	std::string	getLastName(void);
	void		setNickName(std::string str);
	std::string	getNickName(void);
	void		setPhoneNumber(std::string str);
	std::string	getPhoneNumber(void);
	void		setDarkestSecret(std::string str);
	std::string	getDarkestSecret(void);
};

#endif