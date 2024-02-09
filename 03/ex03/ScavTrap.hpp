/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: cschabra <cschabra@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/07 12:31:40 by cschabra      #+#    #+#                 */
/*   Updated: 2024/02/09 15:02:51 by cschabra      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <iostream>
#include <string>
#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
	private:

	public:
	void		attack(const std::string& target);
	void		guardGate();

	ScavTrap();
	ScavTrap(const std::string& name);
	ScavTrap(const ScavTrap& ct);
	ScavTrap& operator=(const ScavTrap& ct);
	~ScavTrap();
};

#endif
