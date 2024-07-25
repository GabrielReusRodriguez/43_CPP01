/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ReaderFileHandler.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriel <gabriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 22:11:03 by gabriel           #+#    #+#             */
/*   Updated: 2024/07/25 22:53:12 by gabriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

#include "ReaderFileHandler.hpp"

ReaderFileHandler::ReaderFileHandler(std::string _filename)
{
	this->filename = _filename;
	this->content = "";
}

ReaderFileHandler::~ReaderFileHandler(void)
{

}

void	ReaderFileHandler::cleafBuffer(char *buffer, size_t buffer_size)
{
	size_t	i;

	i = 0;
	while ( i < buffer_size)
	{
		buffer[i] = '\0';
		i++;
	}
}

boolean ReaderFileHandler::readContent(void)
{
	ifstream 	fileReader;
	char		buffer[READ_BUFFER];

	fileReader.open(this->filename);
	if (fileReader.is_open())
	{
		while (fileReader.getline(buffer, READ_BUFFER))
		{
			content.append(buffer);
			this->cleafBuffer(buffer, READ_BUFFER);
		}
		fileReader.close();
		return (true);
	}
	else
	{
		std::cout << "ERROR: The file you are trying to open '" << this->filename << "' does NOT exists." << std::endl;
		return (false);
	}
}

std::string	ReaderFileHandler::getContent(void)
{
	return (this->content);
}