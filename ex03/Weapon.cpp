/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aallou-v <aallou-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 17:29:44 by aallou-v          #+#    #+#             */
/*   Updated: 2024/04/08 18:39:16 by aallou-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon (void) {
};

Weapon::Weapon (std::string init_type) {
	type = init_type;
};

std::string	Weapon::getType(void)
{
	return (type);
}

void	Weapon::setType(std::string new_type)
{
	type = new_type;
}

