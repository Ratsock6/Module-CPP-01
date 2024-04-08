/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aallou-v <aallou-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 00:29:07 by aallou-v          #+#    #+#             */
/*   Updated: 2024/04/09 01:21:04 by aallou-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"


Harl::Harl(void) {}

Harl::~Harl(void) {}

void	Harl::debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}
void	Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void	Harl::warning(void)
{
	std::clog << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void	Harl::error(void)
{
	std::cerr << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void	Harl::complain(std::string level)
{
	bool		ok = false;
	std::string tab[4] = { "DEBUG", "INFO", "WARNING", "ERROR" };

	void (Harl::*optionFunctions[])() = {
		&Harl::debug, 
		&Harl::info, 
		&Harl::warning,
		&Harl::error
	};

	
	for (size_t i = 0; i < 4; i++)
	{
		if (tab[i] == level)
		{
			ok = true;
			(this->*optionFunctions[i])();
		}
	}
	if (!ok)
		std::cout << "The option '" << level << "' don't exist" << std::endl;
}