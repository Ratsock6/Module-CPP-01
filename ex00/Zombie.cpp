/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aallou-v <aallou-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 11:38:16 by aallou-v          #+#    #+#             */
/*   Updated: 2024/04/08 13:19:01 by aallou-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	Zombie::setName(std::string name)
{
	_name = name;
}

std::string	Zombie::getName(void)
{
	return (_name);;
}

Zombie::Zombie(std::string name)
{
	this->_name = name;
}

Zombie::Zombie(void) {}

void	Zombie::announce (void)
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}