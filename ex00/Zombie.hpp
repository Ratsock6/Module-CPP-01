/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aallou-v <aallou-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 11:38:19 by aallou-v          #+#    #+#             */
/*   Updated: 2024/04/08 13:18:28 by aallou-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class   Zombie {

	private:
		std::string	_name;
	public:
		std::string	getName( void );
		void		setName( std::string name );
		void		announce( void );
		Zombie( std::string nam );
		Zombie( void );
		//~Zombie( void );
};

void	randomChump( std::string name );
Zombie* newZombie( std::string name );