/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   BitcoinExchange.cpp                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: jukerste <jukerste@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/11/04 15:49:05 by jukerste      #+#    #+#                 */
/*   Updated: 2026/11/04 19:02:15 by jukerste      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange()
{

}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &other)
{
	*this = other;
}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &other)
{
	if (this != &other)
		_database = other._database;
	
	return *this;
}

BitcoinExchange::~BitcoinExchange()
{
	
}

bool BitcoinExchange:: is_valid_date(const std::string &date) const
{
	if (date.length() != 10 || date[4] != '-' || date[7] != '-')
		return (false);
	
	for (int i = 0; i < 10; ++i)
	{
		if (i == 4 || i == 7)
			continue ;
		if (!isdigit(date[i]))
			return false;
	}
}
