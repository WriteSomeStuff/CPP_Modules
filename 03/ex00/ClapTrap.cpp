/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: cschabra <cschabra@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/05 16:18:48 by cschabra      #+#    #+#                 */
/*   Updated: 2024/02/06 17:50:56 by cschabra      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

void	ClapTrap::attack(const std::string& target)
{
	if (this->getMp() == 0)
		std::cout << "Oh no! No MP left to do anything!\n";
	else
	{
		this->setMp(this->getMp() - 1);
		std::cout << "ClapTrap " << this->getName() << " attacks " << target;
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	int temp = this->getHp() - amount;

	if (this->getHp() < 1)
		std::cout << "'s dead body!\n";
	else
	{
		if (temp < 0)
			this->setHp(0);
		else
			this->setHp(this->getHp() - amount);
		std::cout << " causing " << amount << " points of damage!\n";
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->getMp() == 0)
	{
		std::cout << "Oh no! No MP left to do anything!\n";
		return ;
	}
	if ((this->getHp() + amount) == 10 || (this->getHp() + amount) > 10)
	{
		this->setHp(10);
		std::cout << "ClapTrap " << this->getName() << " repairs itself to max HP!\n";
	}
	else
	{
		this->setHp(this->getHp() + amount);
		std::cout << "ClapTrap " << this->getName() << " repairs itself by " << amount << " HP!\n";
	}
	this->setMp(this->getMp() - 1);
}

ClapTrap::ClapTrap()
{
	std::cout << "Default constructor called\n";
}

ClapTrap::ClapTrap(const std::string& name)
{
	std::cout << "String constructor called\n";
	this->_name = name;
	this->_hp = 10;
	this->_mp = 10;
}

ClapTrap::ClapTrap(const ClapTrap& ct)
{
	std::cout << "Copy constructor called\n";
	*this = ct;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called\n";
}

ClapTrap& ClapTrap::operator=(const ClapTrap& ct)
{
	std::cout << "Copy assignment operator called\n";
	if (this != &ct)
	{
		this->_name = ct._name;
		this->_hp = ct._hp;
		this->_mp = ct._mp;
	}
	return (*this);
}
