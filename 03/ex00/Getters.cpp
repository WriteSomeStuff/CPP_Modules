/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Getters.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: cschabra <cschabra@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/05 16:44:59 by cschabra      #+#    #+#                 */
/*   Updated: 2024/02/06 17:46:43 by cschabra      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

std::string	ClapTrap::getName() const
{
	return (_name);
}

int	ClapTrap::getHp() const
{
	return (_hp);
}

int	ClapTrap::getMp() const
{
	return (_mp);
}

int	ClapTrap::getDamage() const
{
	return (_damage);
}
