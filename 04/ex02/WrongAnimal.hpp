/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   WrongAnimal.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: cschabra <cschabra@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/13 13:46:50 by cschabra      #+#    #+#                 */
/*   Updated: 2024/02/27 14:40:33 by cschabra      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>
#include <string>

class WrongAnimal
{
	protected:
	std::string	_type;

	public:
	void		makeSound() const;
	std::string	getType() const;
	void		setType(const std::string& type);

	WrongAnimal();
	WrongAnimal(const WrongAnimal& WrongAnimal);
	WrongAnimal&	operator=(const WrongAnimal& WrongAnimal);
	virtual	~WrongAnimal();
};

#endif
