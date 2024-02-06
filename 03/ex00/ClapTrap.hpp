/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: cschabra <cschabra@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/05 16:18:41 by cschabra      #+#    #+#                 */
/*   Updated: 2024/02/06 17:47:19 by cschabra      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap
{
	private:
	std::string			_name;
	int					_hp;
	int					_mp;
	static const int	_damage;

	public:
	void		attack(const std::string& target);
	void		takeDamage(unsigned int amount);
	void		beRepaired(unsigned int amount);

	ClapTrap();
	ClapTrap(const std::string& name);
	ClapTrap(const ClapTrap& ct);
	ClapTrap& operator=(const ClapTrap& ct);
	~ClapTrap();
	
	std::string	getName() const;
	int			getHp() const;
	int			getMp() const;
	int			getDamage() const;

	void		setName(const std::string& name);
	void		setHp(const int hp);
	void		setMp(const int mp);
};

#endif
