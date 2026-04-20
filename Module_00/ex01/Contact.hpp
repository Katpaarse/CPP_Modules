/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jukerste <jukerste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/01 14:57:39 by jukerste          #+#    #+#             */
/*   Updated: 2026/04/20 17:53:50 by jukerste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACTS_H
#define CONTACTS_H

#include <iostream>
#include <string>

class Contact
{
	private:
	std::string _firstName;
	
	public:
	void	setFirstName(std::string str);
	void	getFirstname(void);
};

#endif