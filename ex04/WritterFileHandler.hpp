/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WritterFileHandler.hpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriel <gabriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 22:44:07 by gabriel           #+#    #+#             */
/*   Updated: 2024/07/25 22:46:55 by gabriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRITTERFILEHANDLER_HPP
# define WRITTERFILEHANDLER_HPP

# include <string>

class WritterFileHandler
{
	private:
		std::string	filename;
		
	public:
	WritterFileHandler(std::filename);
	~WritterFileHandler(void);
	boolean 	writeContent(std::string content);
};

#endif