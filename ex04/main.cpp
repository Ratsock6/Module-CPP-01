/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aallou-v <aallou-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 21:50:27 by aallou-v          #+#    #+#             */
/*   Updated: 2024/04/09 00:19:38 by aallou-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string.h>

std::string	check(int argc, char **argv)
{
	std::string fileName;
	std::string	s1;
	std::string s2;
	
	if (argc != 4)
		return ("./Sed_is_for_losers <file> <s1> <s2>");
	fileName = argv[1];
	s1 = argv[2];
	s2 = argv[3];
	if (fileName.length() == 0)
		return ("Empty File Name");
	if (s1.length() == 0)
		return ("Empty s1");
	if (s2.length() == 0)
		return ("Empty s2");
	std::ifstream MyFile(fileName.c_str());
	if (MyFile.fail())
		return ("Open File fail");
	MyFile.close();
	return ("");
}

void	copy_file(std::ifstream &input, std::ofstream &output, std::string s1, std::string s2)
{
	std::string 	line;
	size_t			find;

	while (getline(input, line)) {
		find = line.find(s1, 0);
		if (find < line.length())
		{
			line.erase(find, s1.length());
			line.insert(find, s2);
			output << line << std::endl;
		}
		else
			output << line << std::endl;
	}
}

int main(int argc, char **argv) {
	
	std::string	error = check(argc, argv);

	if (error != "")
	{
		std::cout << error << std::endl;
		return (1);
	}

	std::string 	fileName = argv[1];
	std::string 	s1 = argv[2];
	std::string 	s2 = argv[3];
	std::string		outputFile = fileName + ".replace";

	std::ofstream 	output(outputFile.c_str());
	std::ifstream 	input(fileName.c_str());

	if (!output || !input) {
		std::cout << "Open File Error (1)" << std::endl;
		return (1);
	}
	copy_file(input, output, s1, s2);
	input.close();
	output.close();
}
