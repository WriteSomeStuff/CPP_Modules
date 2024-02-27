/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Dog.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: cschabra <cschabra@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/13 13:46:50 by cschabra      #+#    #+#                 */
/*   Updated: 2024/02/27 14:51:46 by cschabra      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include <iostream>
#include <string>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	private:
	std::string	_sound;
	Brain*		_brain;

	public:
	void		makeSound() const;
	std::string	getSound() const;
	void		setSound(const std::string& sound);

	Dog();
	Dog(const Dog& dog);
	Dog&	operator=(const Dog& dog);
	virtual	~Dog();
};

#endif
