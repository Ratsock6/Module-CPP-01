/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aallou-v <aallou-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 17:30:58 by aallou-v          #+#    #+#             */
/*   Updated: 2024/04/08 18:34:08 by aallou-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class	Weapon {
	private:
		std::string	type;
	public:
		std::string	getType(void);
		void		setType(std::string type);
		Weapon		(void);
		Weapon		(std::string type);
};