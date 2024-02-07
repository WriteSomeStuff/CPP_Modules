/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: cschabra <cschabra@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/07 12:31:40 by cschabra      #+#    #+#                 */
/*   Updated: 2024/02/07 12:57:39 by cschabra      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <iostream>
#include <string>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	private:
	std::string			_name;
	int					_hp;
	int					_mp;
	int					_damage;

	public:
	void		attack(const std::string& target);

	ScavTrap();
	ScavTrap(const std::string& name);
	ScavTrap(const ScavTrap& ct);
	ScavTrap& operator=(const ScavTrap& ct);
	~ScavTrap();

};

#endif
