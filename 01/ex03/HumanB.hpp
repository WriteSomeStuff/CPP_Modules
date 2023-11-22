/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanB.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: cschabra <cschabra@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/21 17:30:24 by cschabra      #+#    #+#                 */
/*   Updated: 2023/11/22 18:12:20 by cschabra      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include <string>
# include <iostream>
# include "Weapon.hpp"

class HumanB
{
	private:
	std::string	_name;
	Weapon*		_weapon;

	public:
	void	attack();
	void	setWeapon(Weapon &weapon);
	HumanB();
	HumanB(std::string name);
	~HumanB();
};

#endif
