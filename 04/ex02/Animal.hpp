/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Animal.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: cschabra <cschabra@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/13 13:46:50 by cschabra      #+#    #+#                 */
/*   Updated: 2024/02/19 17:18:52 by cschabra      ########   odam.nl         */
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

	public:
	virtual void	makeSound() const = 0;
	std::string		getType() const;
	void			setType(const std::string& type);

	Animal();
	Animal(const Animal& Animal);
	Animal&	operator=(const Animal& Animal);
	virtual	~Animal();
};

#endif
