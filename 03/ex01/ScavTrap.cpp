/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: cschabra <cschabra@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/07 12:31:38 by cschabra      #+#    #+#                 */
/*   Updated: 2024/02/07 13:01:25 by cschabra      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

void	ScavTrap::attack(const std::string& target)
{
	if (this->getMp() == 0)
		std::cout << "Oh no! " << this->getName() << " has no MP left to do anything!\n";
	else
	{
		this->setMp(this->getMp() - 1);
		std::cout << this->getName() << " shoots " << target \
			<< ", causing " << this->getDamage() << " points of damage!\n";
	}
}

ScavTrap::ScavTrap()
{
	std::cout << "ScavTrap default constructor called\n";
}

ScavTrap::ScavTrap(const std::string& name)
{
	std::cout << "ScavTrap string constructor called\n";
	this->setName(name);
	this->setHp(10);
	this->setMp(10);
	this->setDamage(6);
}

ScavTrap::ScavTrap(const ScavTrap& ct)
{
	std::cout << "ScavTrap copy constructor called\n";
	*this = ct;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& ct)
{
	std::cout << "ScavTrap copy assignment operator called\n";
	if (this != &ct)
	{
		this->setName(ct.getName());
		this->setHp(ct.getHp());
		this->setMp(ct.getMp());
		this->setDamage(ct.getDamage());
	}
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called\n";
}
