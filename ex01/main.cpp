/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lanton-m <lanton-m@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/21 16:50:04 by lanton-m          #+#    #+#             */
/*   Updated: 2026/04/01 19:10:43 by lanton-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(int argc, char** argv)
{
	int	N;

	std::cin >> N;
	Zombie* Horde = zombieHorde(N, name);
	
}
