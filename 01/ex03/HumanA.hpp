/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanA.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: cschabra <cschabra@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/21 17:30:20 by cschabra      #+#    #+#                 */
/*   Updated: 2023/11/22 14:45:36 by cschabra      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include <string>
# include <iostream>
# include "Weapon.hpp"

class HumanA
{
	private:
	std::string	_name;
	Weapon		&_weapon;

	public:
	void	attack();
	HumanA(std::string name, Weapon& weapon);
	~HumanA();
};

#endif
