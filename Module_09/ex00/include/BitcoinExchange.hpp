/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   BitcoinExchange.hpp                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: jukerste <jukerste@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/11/04 15:20:39 by jukerste      #+#    #+#                 */
/*   Updated: 2026/11/04 18:56:52 by jukerste      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>
#include <sstream>
#include <fstream>
#include <map>
#include <algorithm>

class BitcoinExchange
{
	private:
		std::map<std::string, float> _database;
		bool is_valid_date(const std::string &date) const;
		bool is_valid_value(float value, bool is_input_file) const;

	public:
		BitcoinExchange();
		BitcoinExchange(const BitcoinExchange &other);
		BitcoinExchange &operator=(const BitcoinExchange &other);
		~BitcoinExchange();

		void load_database(const std::string &db_filename);
		void process_input(const std::string &input_filename) const;
};
