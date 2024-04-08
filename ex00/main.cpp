/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aallou-v <aallou-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 11:42:29 by aallou-v          #+#    #+#             */
/*   Updated: 2024/04/08 13:16:29 by aallou-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{
	Zombie	*zombie = newZombie("Pedro");
	zombie->announce();
	delete zombie;

	randomChump("Don Gusto");

	Zombie zombie2 = Zombie("Viki");
	zombie2.announce();
}