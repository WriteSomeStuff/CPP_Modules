/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cat.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: cschabra <cschabra@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/13 13:46:50 by cschabra      #+#    #+#                 */
/*   Updated: 2024/02/27 14:51:30 by cschabra      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include <iostream>
#include <string>
#include "Animal.hpp"

class Cat : public Animal
{
	private:
	std::string	_sound;

	public:
	void		makeSound() const;
	std::string	getSound() const;
	void		setSound(const std::string& sound);

	Cat();
	Cat(const Cat& Cat);
	Cat&	operator=(const Cat& Cat);
	virtual	~Cat();
};

#endif
