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
	if (argc != 4 || !argv[1] || !argv[2] || !argv[3])
		return (std::cout << "Check your imput. Usage: ./ex04 <filename> <s1> <s2>" << std::endl, 0);

	std::ifstream file(argv[1]);

	if (!file.is_open())
	{
		std::cout << "No file:'" << argv[1] << "' find in this folder";
		return (1);
	}

	std::string	copy_name = std::string(argv[1]) + ".replace";
	std::ofstream copy(copy_name.c_str());
	std::string	content, s1 = argv[2], s2 = argv[3], result;
	std::ostringstream oss;
	size_t pos = 0, start = 0;

	oss << file.rdbuf();
	content = oss.str();
	pos = content.find(s1, pos);
	while (pos != std::string::npos)
		{
			result += content.substr(start, pos - start);
			result += s2;
			start = pos + s1.length();
			pos = content.find(s1, start);
		}
	result += content.substr(start);
	copy << result;
	file.close();
	copy.close();
	return 0;
}
