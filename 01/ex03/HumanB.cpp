/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanB.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: cschabra <cschabra@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/21 17:30:22 by cschabra      #+#    #+#                 */
/*   Updated: 2023/11/22 18:11:57 by cschabra      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

void	HumanB::attack()
{
	if (_weapon)
		std::cout << _name << " attacks with their " << _weapon->getType() << '\n';
	else
		std::cout << _name << " runs, no weapon to fight with\n";
		
}

void	HumanB::setWeapon(Weapon &weapon)
{
	_weapon = &weapon;
}

HumanB::HumanB()
{
}

HumanB::HumanB(std::string name) : _name(name)
{
	_weapon = NULL;
}

HumanB::~HumanB()
{
}
