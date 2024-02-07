/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Setters.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: cschabra <cschabra@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/07 11:55:57 by cschabra      #+#    #+#                 */
/*   Updated: 2024/02/07 12:50:37 by cschabra      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

void	ClapTrap::setName(const std::string& name)
{
	_name = name;
}

void	ClapTrap::setHp(const int hp)
{
	_hp = hp;
}

void	ClapTrap::setMp(const int mp)
{
	_mp = mp;
}

void	ClapTrap::setDamage(const int damage)
{
	_damage = damage;
}
