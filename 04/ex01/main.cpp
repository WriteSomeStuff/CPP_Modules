/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: cschabra <cschabra@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/13 13:52:22 by cschabra      #+#    #+#                 */
/*   Updated: 2024/02/15 17:16:24 by cschabra      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal*	j = new Dog();
	const Animal*	i = new Cat();

	delete(i);
	delete(j);
	std::cout << "------------------------------------------\n";

	Animal*	animalArray[4];

	for (int i = 0; i < 4; i++)
	{
		if (i < 2)
			animalArray[i] = new Dog();
		else
			animalArray[i] = new Cat();

	}
	std::cout << "------------------------------------------\n";
	for (int i = 0; i < 4; i++)
		delete animalArray[i];
	return 0;
}
