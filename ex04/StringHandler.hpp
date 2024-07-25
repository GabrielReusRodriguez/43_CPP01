/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   StringHandler.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriel <gabriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 22:54:51 by gabriel           #+#    #+#             */
/*   Updated: 2024/07/25 22:59:53 by gabriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef STRINGHANDLER_HPP
# define STRINGHANDLER_HPP

# include <string>

class StringHandler
{
	private: 
		std::string content;

	public:
	
		StringHandler(std::string content);
		~StringHandler(void);
		std::string	replace(std::string pattern, std::string replace);
};

#endif