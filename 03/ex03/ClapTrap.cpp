/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: cschabra <cschabra@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/05 16:18:48 by cschabra      #+#    #+#                 */
/*   Updated: 2024/02/08 14:56:43 by cschabra      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

void	ClapTrap::attack(const std::string& target)
{
	if (this->getMp() == 0)
		std::cout << "Oh no! " << this->getName() << " has no MP left to do anything!\n";
	else
	{
		this->setMp(this->getMp() - 1);
		std::cout << this->getName() << " slaps " << target \
			<< ", causing " << this->getDamage() << " points of damage!\n";
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	int temp = this->getHp() - amount;

	if (this->getHp() == 0)
		std::cout << this->getName() << " is already dead though..\n";
	else
	{
		std::cout << this->getName() << " took " << amount << " points of damage!\n";
		if (temp < 0)
			this->setHp(0);
		else
			this->setHp(this->getHp() - amount);
		if (this->getHp() == 0)
			std::cout << this->getName() << " is dead :c!\n";
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->getMp() == 0)
	{
		std::cout << "Oh no! " << this->getName() << " has no MP left to do anything!\n";
		return ;
	}
	if ((this->getHp() + amount) == 100 || (this->getHp() + amount) > 100)
	{
		this->setHp(100);
		std::cout << this->getName() << " repairs itself to max HP!\n";
	}
	else
	{
		this->setHp(this->getHp() + amount);
		std::cout << this->getName() << " repairs itself by " << amount << " HP!\n";
	}
	this->setMp(this->getMp() - 1);
}

ClapTrap::ClapTrap()
{
	std::cout << "ClapTrap default constructor called\n";
}

ClapTrap::ClapTrap(const std::string& name)
{
	std::cout << "ClapTrap string constructor called\n";
	this->setName(name);
	this->setHp(10);
	this->setMp(10);
	this->setDamage(6);
}

ClapTrap::ClapTrap(const ClapTrap& ct)
{
	std::cout << "ClapTrap copy constructor called\n";
	*this = ct;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& ct)
{
	std::cout << "ClapTrap copy assignment operator called\n";
	if (this != &ct)
	{
		this->setName(ct.getName());
		this->setHp(ct.getHp());
		this->setMp(ct.getMp());
		this->setDamage(ct.getDamage());
	}
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap destructor called\n";
}
