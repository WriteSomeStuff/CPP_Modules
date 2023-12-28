/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Harl.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: cschabra <cschabra@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/12/28 14:26:12 by cschabra      #+#    #+#                 */
/*   Updated: 2023/12/28 16:42:03 by cschabra      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void	Harl::debug(void)
{
	std::cout << "[ DEBUG ]\nI love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!\n";
}

void	Harl::info(void)
{
	std::cout << "[ INFO ]\nI cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!\n";
}

void	Harl::warning(void)
{
	std::cout << "[ WARNING ]\nI think I deserve to have some extra bacon for free.\nI’ve been coming for years whereas you started working here since last month.\n";
}

void	Harl::error(void)
{
	std::cout << "[ ERROR ]\nThis is unacceptable, I want to speak to the manager now.\n";
}

void	Harl::complain(std::string level)
{
	std::string allLevels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void (Harl::*func[])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	
	int	which = -1;
	for (int i = 0; i < 4; i++)
	{
		if (allLevels[i] == level)
		{
			which = i;
			break ;	
		}
	}
	switch (which)
	{
		case -1:
			std::cout << "[ Probably complaining about insignificant problems ]\n";
			break ;
		default:
			while (which < 4)
			{
				(this->*func[which])();
				std::cout << '\n';
				which++;
			}
			break ;
	}
}

Harl::Harl()
{
}

Harl::~Harl()
{
}
