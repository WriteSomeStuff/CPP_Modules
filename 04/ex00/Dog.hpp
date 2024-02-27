/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Dog.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: cschabra <cschabra@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/13 13:46:50 by cschabra      #+#    #+#                 */
/*   Updated: 2024/02/22 14:43:21 by cschabra      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include <iostream>
#include <string>
#include "Animal.hpp"

class Dog : public Animal
{
	private:
	std::string	_sound;

	public:
	void		makeSound() const;
	std::string	getSound() const;
	void		setSound(const std::string& sound);

	Dog();
	Dog(const Dog& dog);
	Dog&	operator=(const Dog& dog);
	~Dog();
};

#endif
