/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: cschabra <cschabra@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/07 11:55:38 by cschabra      #+#    #+#                 */
/*   Updated: 2024/02/09 14:19:53 by cschabra      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap
{
	protected:
	std::string			_name;
	int					_hp;
	int					_mp;
	int					_damage;

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
	void		setDamage(const int damage);
};

#endif
