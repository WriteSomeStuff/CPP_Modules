/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Weapon.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: cschabra <cschabra@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/21 17:30:28 by cschabra      #+#    #+#                 */
/*   Updated: 2023/11/21 18:04:07 by cschabra      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

const std::string&	Weapon::getType()
{
	return (_type);
}

void	Weapon::setType(std::string type)
{
	_type = type;
}

Weapon::Weapon()
{
}

Weapon::~Weapon()
{
}
