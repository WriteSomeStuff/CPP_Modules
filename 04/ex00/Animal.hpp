/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Animal.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: cschabra <cschabra@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/13 13:46:50 by cschabra      #+#    #+#                 */
/*   Updated: 2024/02/13 14:28:03 by cschabra      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal
{
	protected:
	std::string	_type;
	std::string	_sound;

	public:
	void		makeSound() const;
	std::string	getType() const;
	void		setType(const std::string& type);
	std::string	getSound() const;
	void		setSound(const std::string& sound);

	Animal();
	Animal(const Animal& Animal);
	Animal&	operator=(const Animal& Animal);
	~Animal();
};

#endif
