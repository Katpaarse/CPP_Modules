/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Base.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: jukerste <jukerste@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/09/11 16:10:46 by jukerste      #+#    #+#                 */
/*   Updated: 2026/09/12 18:13:20 by jukerste      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <cstdlib>
#include <ctime>

class Base
{
	private:
		
	public:
		virtual ~Base();
};

Base* generate(void);
void identify(Base *p);
void identify(Base &p);