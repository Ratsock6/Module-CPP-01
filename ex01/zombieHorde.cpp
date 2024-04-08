/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aallou-v <aallou-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 13:37:07 by aallou-v          #+#    #+#             */
/*   Updated: 2024/04/08 14:53:19 by aallou-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int n, std::string name )
{
	Zombie *horde;

	horde = new Zombie[n];
	for (int i = 0; i < n; i++)
		horde[i].setName(name);
	return (horde);
}