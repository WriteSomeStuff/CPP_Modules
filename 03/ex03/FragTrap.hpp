/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: cschabra <cschabra@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/08 14:01:08 by cschabra      #+#    #+#                 */
/*   Updated: 2024/02/09 15:03:00 by cschabra      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include <iostream>
#include <string>
#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
	private:

	public:
	void		attack(const std::string& target);
	void		highFivesGuys(void);

	FragTrap();
	FragTrap(const std::string& name);
	FragTrap(const FragTrap& ct);
	FragTrap& operator=(const FragTrap& ct);
	~FragTrap();
};

#endif
