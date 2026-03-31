/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lanton-m <lanton-m@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/24 12:48:16 by lanton-m          #+#    #+#             */
/*   Updated: 2026/03/24 12:48:16 by lanton-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string _name) : name(_name), w_B(NULL){}
HumanB::~HumanB(){}

void	HumanB::attack(void)
{
	if (w_B)
		std::cout << name << " attacks with their " << w_B->getType() << std::endl;
	else
		std::cout << "unarmed" << std::endl;
}

void	HumanB::setWeapon(Weapon& _w_B)
{
	w_B = &_w_B;
}