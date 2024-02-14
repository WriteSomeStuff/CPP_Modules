/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   WrongCat.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: cschabra <cschabra@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/13 13:46:50 by cschabra      #+#    #+#                 */
/*   Updated: 2024/02/13 14:14:15 by cschabra      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include <iostream>
#include <string>
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	private:
	std::string	_sound;

	public:
	WrongCat();
	WrongCat(const WrongCat& WrongCat);
	WrongCat&	operator=(const WrongCat& WrongCat);
	~WrongCat();
};

#endif
