/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lanton-m <lanton-m@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/23 14:50:59 by lanton-m          #+#    #+#             */
/*   Updated: 2026/03/23 14:50:59 by lanton-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string _name, Weapon& w_A) : name(_name), w_A(w_A) {}
HumanA::~HumanA(){}

void	HumanA::attack(void)
{
	std::cout << name << " attacks with their " << w_A.getType() << std::endl;
}