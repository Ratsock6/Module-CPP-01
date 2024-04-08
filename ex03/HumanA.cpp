/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aallou-v <aallou-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 17:30:10 by aallou-v          #+#    #+#             */
/*   Updated: 2024/04/08 21:22:29 by aallou-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon): name(name), weapon(weapon) {}

Weapon	HumanA::getWeapon(void)
{
	return(this->weapon);
}

void	HumanA::attack(void)
{
	std::cout << name << " attackes with their " << weapon.getType() << std::endl;
}