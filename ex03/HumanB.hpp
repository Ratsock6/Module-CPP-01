/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aallou-v <aallou-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 17:31:01 by aallou-v          #+#    #+#             */
/*   Updated: 2024/04/08 21:39:34 by aallou-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Weapon.hpp"

class	HumanB
{
	private:
	public:
		HumanB(std::string name);
		void		attack(void);
		void		setWeapon(Weapon &weapon);
		Weapon		getWeapon(void);
		std::string	name;
		Weapon		*weapon;
};