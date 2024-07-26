/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriel <gabriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 17:12:12 by gabriel           #+#    #+#             */
/*   Updated: 2024/07/26 18:05:57 by gabriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Harl.hpp"

int	main(int argc, char **argv)
{
	Harl harl;
	
	if (argc == 1)
	{
		std::cout << "Bad number of arguments." << std::endl;
		return (1);
	}
	harl.setFilter(argv[1]);
	std::cout << "\t complain ERROR." << std::endl;
	harl.complain("ERROR");
	std::cout << "\t complain WARNING." << std::endl;
	harl.complain("WARNING");
	std::cout << "\t complain INFO." << std::endl;
	harl.complain("INFO");
	std::cout << "\t complain DEBUG." << std::endl;
	harl.complain("DEBUG");
	std::cout << "\t complain BAD." << std::endl;
	harl.complain("ASEREJE");

	return (0);
}