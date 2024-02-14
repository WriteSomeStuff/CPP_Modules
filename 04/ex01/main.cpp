/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: cschabra <cschabra@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/13 13:52:22 by cschabra      #+#    #+#                 */
/*   Updated: 2024/02/13 14:34:35 by cschabra      ########   odam.nl         */
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

	Animal*	animalArray[100];

	for (int i = 0; i < 100; i++)
	{
		if (i < 50)
			animalArray[i] = new Dog();
		else
			animalArray[i] = new Cat();

	}
	for (int i = 0; i < 100; i++)
		delete animalArray[i];
	return 0;
}
