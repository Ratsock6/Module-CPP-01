/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aallou-v <aallou-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 17:30:04 by aallou-v          #+#    #+#             */
/*   Updated: 2024/04/08 21:39:26 by aallou-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	this->name = name;
}

void		HumanB::attack(void)
{
	if (this->weapon)
		std::cout << name << " attackes with their " << (*weapon).getType() << std::endl;
	else
		std::cout << name << " attackes with nothing" << std::endl;
}

void		HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
}
Weapon		HumanB::getWeapon(void)
{
	return (*weapon);
}
