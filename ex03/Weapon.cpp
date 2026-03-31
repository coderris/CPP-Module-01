/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lanton-m <lanton-m@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/23 13:18:51 by lanton-m          #+#    #+#             */
/*   Updated: 2026/03/23 13:18:51 by lanton-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string str) : type(str){}

Weapon::~Weapon(){}

void	Weapon::setType(const std::string& new_val)
{
	type = new_val;
}

const std::string&	Weapon::getType() const
{
	const std::string &_type = type;
	return (_type);
}