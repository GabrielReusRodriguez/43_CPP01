/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriel <gabriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 17:12:27 by gabriel           #+#    #+#             */
/*   Updated: 2024/07/26 17:51:47 by gabriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <string>

# define NUM_LEVELS 4

class Harl
{
	private:
	
	std::string str_filter_level;
	size_t		filter_level;
	std::string	functions_levels[NUM_LEVELS];

	void	debug(void);
	void	info(void);
	void	warning(void);
	void	error(void);

	public:
	
	Harl(void);
	Harl(std::string filter_level);
	~Harl(void);
	void	setFilter(std::string filter);
	void	complain(std::string _level);

};

#endif