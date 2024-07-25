/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WritterFileHandler.cpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriel <gabriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 22:46:05 by gabriel           #+#    #+#             */
/*   Updated: 2024/07/25 22:54:31 by gabriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <fstream>

#include "WritterFileHandler.hpp"

WritterFileHandler::WritterFileHandler(std::string _filename)
{
	this->filename = _filename;
}

WritterFileHandler::~WritterFileHandler(void)
{

}

boolean WritterFileHandler::writeContent(std::string content)
{
	ofstream writter(this->filename);
	if (writer.is_open())
	{
		writer.write(content, content.size());
		writer.close();
		return (true);
	}
	else
	{
		std::cout << "ERROR: openning "  << this->filename << std::endl;
		return (false);
	}
}