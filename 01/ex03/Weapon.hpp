/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Weapon.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: cschabra <cschabra@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/21 17:30:30 by cschabra      #+#    #+#                 */
/*   Updated: 2023/11/22 14:40:41 by cschabra      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>
# include <string>

class Weapon
{
	private:
	std::string _type;

	public:
	const std::string&	getType();
	void				setType(std::string type);
	Weapon();
	Weapon(std::string type);
	~Weapon();
};

#endif
