/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriel <gabriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 15:35:53 by gabriel           #+#    #+#             */
/*   Updated: 2024/07/25 16:04:08 by gabriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/* 
It is better to allocate the zombies in the stack when you do not 
know how many zombies will you have ( dynamic ) 
in other cases it is better to allocate at heap because the memory 
is free ( delete ) automatically when the go out of context  so
no leaks are possible.
*/
int	main(void)
{
	Zombie *zombie_stack;

	zombie_stack = newZombie("Zombie stack");
	if (zombie_stack != NULL)
	{
		zombie_stack->announce();
		delete (zombie_stack);
	}
	randomChump("Zombie heap");
	return (0);
}