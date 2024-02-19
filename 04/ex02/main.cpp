/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: cschabra <cschabra@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/13 13:52:22 by cschabra      #+#    #+#                 */
/*   Updated: 2024/02/19 17:23:31 by cschabra      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
	// const Animal*	meta = new Animal();
	const Animal*	j = new Dog();
	const Animal*	i = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();

	delete(i);
	delete(j);

	const WrongAnimal*	w = new WrongCat();

	std::cout << w->getType() << " " << std::endl;
	w->makeSound();

	delete(w);
	return 0;

	// const Animal*	j = new Dog();
	// const Animal*	i = new Cat();
	// std::cout << "General test------------------------------\n";

	// delete(i);
	// delete(j);
	// std::cout << "Array test--------------------------------\n";

	// Animal*	animalArray[4];

	// for (int i = 0; i < 4; i++)
	// {
	// 	if (i < 2)
	// 		animalArray[i] = new Dog();
	// 	else
	// 		animalArray[i] = new Cat();

	// }
	// std::cout << "------------------------------------------\n";

	// for (int i = 0; i < 4; i++)
	// 	delete animalArray[i];
	// std::cout << "Cat deep copy test------------------------\n";

	// Cat	c = Cat();
	// Cat	d(c);

	// std::cout << "------------------------------------------\n";

	// std::cout << c.getType() << '\n';
	// std::cout << d.getType() << '\n';
	// d.setType("Clouded leopard");
	// std::cout << c.getType() << '\n';
	// std::cout << d.getType() << '\n';
	// std::cout << "Dog deep copy test------------------------\n";

	// Dog	q = Dog();
	// Dog	z(q);

	// std::cout << "------------------------------------------\n";

	// std::cout << q.getType() << '\n';
	// std::cout << z.getType() << '\n';
	// z.setType("Saarlooswolfdog");
	// std::cout << q.getType() << '\n';
	// std::cout << z.getType() << '\n';
	
	// std::cout << "------------------------------------------\n";

	// return 0;
}
