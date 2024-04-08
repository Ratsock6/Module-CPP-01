/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aallou-v <aallou-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 17:31:04 by aallou-v          #+#    #+#             */
/*   Updated: 2024/04/08 21:20:12 by aallou-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Weapon.hpp"

class	HumanA
{
	private:
	public:
		HumanA(std::string name, Weapon &weapon);
		Weapon		getWeapon(void);
		void		attack(void);
		std::string	name;
		Weapon		&weapon;
};