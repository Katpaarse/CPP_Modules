/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Contact.hpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: jukerste <jukerste@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/04/01 14:57:39 by jukerste      #+#    #+#                 */
/*   Updated: 2026/04/23 13:21:00 by jukerste      ########   odam.nl         */
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
	std::string	_nickName;
	std::string	_phoneNumber;
	std::string _darkestSecret;
	
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