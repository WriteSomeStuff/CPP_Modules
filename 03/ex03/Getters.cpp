/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Getters.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: cschabra <cschabra@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/07 11:55:42 by cschabra      #+#    #+#                 */
/*   Updated: 2024/02/07 12:50:44 by cschabra      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

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
