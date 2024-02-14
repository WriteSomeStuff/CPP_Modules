/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cat.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: cschabra <cschabra@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/13 13:46:50 by cschabra      #+#    #+#                 */
/*   Updated: 2024/02/13 14:14:15 by cschabra      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include <iostream>
#include <string>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal, public Brain
{
	private:
	std::string	_sound;

	public:
	void	makeSound() const;
	Cat();
	Cat(const Cat& Cat);
	Cat&	operator=(const Cat& Cat);
	~Cat();
};

#endif
