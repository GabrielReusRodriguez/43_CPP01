/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriel <gabriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 17:12:31 by gabriel           #+#    #+#             */
/*   Updated: 2024/07/26 18:09:11 by gabriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

#include "Harl.hpp"

Harl::Harl(std::string _filter_level)
{
	size_t	i;

	this->str_filter_level = _filter_level;
	this->functions_levels[0] = "DEBUG";
	this->functions_levels[1] = "INFO";
	this->functions_levels[2] = "WARNING";
	this->functions_levels[3] = "ERROR";
	i = 0;
	while (i < NUM_LEVELS)
	{
		if (this->str_filter_level == this->functions_levels[i])
			break;
		i++;
	}
	this->filter_level = i;
}

Harl::Harl(void)
{
	size_t	i;

	this->str_filter_level = "DEBUG";
	this->functions_levels[0] = "DEBUG";
	this->functions_levels[1] = "INFO";
	this->functions_levels[2] = "WARNING";
	this->functions_levels[3] = "ERROR";
	i = 0;
	while (i < NUM_LEVELS)
	{
		if (this->str_filter_level == this->functions_levels[i])
			break;
		i++;
	}
	this->filter_level = i;
}

Harl::~Harl(void)
{
	
}

void	Harl::debug(void)
{
	std::cout << "[ DEBUG ]" << std::endl << " This is a debug meessage." << std::endl;
}

void	Harl::info(void)
{
	std::cout << "[ INFO ]" << std::endl << " This is an info meessage." << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "[ WARNING ]" << std::endl << " This is a warning meessage." << std::endl;
}

void	Harl::error(void)
{
	std::cout << "[ ERROR ]" << std::endl << " This is an error meessage." << std::endl;
}

/*
	If level of filter or level of complain is incorrect ( NUM_LEVEL ) THEN we must use
	the default case because is an error.
*/
void	Harl::complain(std::string str_level)
{
	size_t	i;
	size_t	level;

	i = 0;
	while (i < NUM_LEVELS)
	{
		if (str_level == this->functions_levels[i])
			break;
		i++;
	}
	if (this->filter_level < NUM_LEVELS &&  i < NUM_LEVELS)
	{
		if (this->filter_level < i)
			level = this->filter_level;
		else
			level = i;
	}
	else
	{
		level = NUM_LEVELS;
	}
	switch(level)
	{
		case 3:
			this->debug();
			this->info();
			this->warning();
			this->error();
		break;
		case 2:
			this->debug();
			this->info();
			this->warning();
		break;
		case 1:
			this->debug();
			this->info();
		break;
		case 0:
			this->debug();
		break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
		break;

	}
}

void	Harl::setFilter(std::string filter)
{
	size_t	i;

	this->str_filter_level = filter;
	i = 0;
	while (i < NUM_LEVELS)
	{
		if (this->str_filter_level == this->functions_levels[i])
			break;
		i++;
	}
	this->filter_level = i;
}