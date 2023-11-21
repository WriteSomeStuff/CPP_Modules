/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanA.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: cschabra <cschabra@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/21 17:30:20 by cschabra      #+#    #+#                 */
/*   Updated: 2023/11/21 18:10:21 by cschabra      ########   odam.nl         */
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
	Weapon		_weapon;
	std::string	_name;

	public:
	void	attack();
	HumanA();
	~HumanA();
};

#endif
