/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lanton-m <lanton-m@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 13:17:22 by lanton-m          #+#    #+#             */
/*   Updated: 2026/04/15 13:17:22 by lanton-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(void)
{
	Harl H_examp;

	H_examp.complain("DEBUG");
	H_examp.complain("INFO");
	H_examp.complain("WARNING");
	H_examp.complain("ERROR");
	return (0);
}