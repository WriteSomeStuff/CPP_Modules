/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Setters.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: cschabra <cschabra@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/05 16:43:50 by cschabra      #+#    #+#                 */
/*   Updated: 2024/02/07 12:44:59 by cschabra      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

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
