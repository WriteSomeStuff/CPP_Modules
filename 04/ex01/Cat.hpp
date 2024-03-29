/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cat.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: cschabra <cschabra@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/13 13:46:50 by cschabra      #+#    #+#                 */
/*   Updated: 2024/02/28 18:00:11 by cschabra      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include <iostream>
#include <string>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
	private:
	std::string	_sound;
	Brain*		_brain;

	public:
	void		makeSound() const;
	std::string	getSound() const;
	void		setSound(const std::string& sound);

	Cat();
	Cat(const Cat& Cat);
	Cat&	operator=(const Cat& Cat);
	~Cat();
};

#endif
