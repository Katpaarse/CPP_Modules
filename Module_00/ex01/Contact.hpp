/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jul <jul@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/01 14:57:39 by jukerste          #+#    #+#             */
/*   Updated: 2026/04/21 00:30:41 by jul              ###   ########.fr       */
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
	
	public:
	void		setFirstName(std::string str);
	std::string	getFirstname(void);
};

#endif