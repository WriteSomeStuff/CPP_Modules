/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   DiamondTrap.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: cschabra <cschabra@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/08 14:02:59 by cschabra      #+#    #+#                 */
/*   Updated: 2024/02/09 15:40:33 by cschabra      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

void	DiamondTrap::whoAmI()
{
	std::cout << "DiamondTrap name: " << _name << "\n";
	std::cout << "ClapTrap name: " << this->ClapTrap::getName() << "\n";
	std::cout << "--------------------------------------------------------------------\n";
}

DiamondTrap::DiamondTrap()
{
	std::cout << "DiamondTrap default constructor called\n";
}

DiamondTrap::DiamondTrap(const std::string& name) : ClapTrap(name + "_clap_name"), _name(name)
{
	std::cout << "DiamondTrap string constructor called\n";
	std::cout << "--------------------------------------------------------------------\n";
	ScavTrap scavtemp("temp");
	FragTrap fragtemp("temp");
	std::cout << "--------------------------------------------------------------------\n";
	this->setHp(fragtemp.getHp());
	this->setMp(scavtemp.getMp());
	this->setDamage(fragtemp.getDamage());
}

DiamondTrap::DiamondTrap(const DiamondTrap& ct)
{
	std::cout << "DiamondTrap copy constructor called\n";
	*this = ct;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap destructor called\n";
}
