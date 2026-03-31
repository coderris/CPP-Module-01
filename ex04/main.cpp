/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lanton-m <lanton-m@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/25 11:35:28 by lanton-m          #+#    #+#             */
/*   Updated: 2026/03/25 11:35:28 by lanton-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

int	main(int argc, char **argv)
{
	if (argc != 4)
		return (std::cout << "Check your imput. Usage: ./ex04 <filename> <s1> <s2>" << std::endl, 0);
	
	std::ifstream file(argv[1]);
	std::string	copy_name = std::string(argv[1]) + ".replace";
	std::ofstream copy(copy_name);
	std::string	content, s1 = argv[2], s2 = argv[3];
	std::ostringstream oss;
	size_t pos = 0;

	if (file.is_open())
	{
		oss << file.rdbuf();
		content = oss.str();
		pos = content.find(argv[1], pos);
		while (pos != std::string::npos)
			{
				content.substr(pos, s1.size());
				content.insert(pos, s1.size(), s2);
				pos = content.find(argv[1], pos);
			}
		

	}
	return 0;
}