/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lanton-m <lanton-m@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/21 19:14:04 by lanton-m          #+#    #+#             */
/*   Updated: 2026/04/01 19:18:19 by lanton-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	zombieHorde( int N, std::string name )
{
	if (N <= 0 || name.empty())
	{
		std::cout << "Check imputs for your zombie horde" << std::endl;
		exit (1);
	}
	Zombie*	horde = new Zombie[N];
	int	i = 0;
	while (i < N)
	{
		
	}

}
