/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: cschabra <cschabra@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/08 14:02:59 by cschabra      #+#    #+#                 */
/*   Updated: 2024/02/08 14:06:15 by cschabra      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

void	FragTrap::attack(const std::string& target)
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

void	FragTrap::highFivesGuys(void)
{
	std::cout << this->getName() << " is asking for a sweet high five!\n";
}

FragTrap::FragTrap()
{
	std::cout << "FragTrap default constructor called\n";
}

FragTrap::FragTrap(const std::string& name)
{
	std::cout << "FragTrap string constructor called\n";
	this->setName(name);
	this->setHp(100);
	this->setMp(100);
	this->setDamage(30);
}

FragTrap::FragTrap(const FragTrap& ct)
{
	std::cout << "FragTrap copy constructor called\n";
	*this = ct;
}

FragTrap& FragTrap::operator=(const FragTrap& ct)
{
	std::cout << "FragTrap copy assignment operator called\n";
	if (this != &ct)
	{
		this->setName(ct.getName());
		this->setHp(ct.getHp());
		this->setMp(ct.getMp());
		this->setDamage(ct.getDamage());
	}
	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called\n";
}
