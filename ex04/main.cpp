/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hemottu <hemottu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 20:27:20 by hemottu           #+#    #+#             */
/*   Updated: 2023/11/03 20:19:44 by hemottu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

std::string		ft_replace(std::string line, std::string s1, std::string s2)
{
	if (line.empty() || s1.empty() || s2.empty())
		return ("error");
	int i = 0;
	i = line.find(s1);
	while (i != -1)
	{
		line.erase(i, s1.size());
		line.insert(i, s2, 0, s2.size());
		i = line.find(s1, i + s2.size());
	}
	return(line);
}

int main(int argc, char **argv)
{	
	if (argc != 4)
	{
		std::cout << "This program takes 3 arguments" << std::endl;
		return 2;
	}
	
	//ouverture du fichier  
	std::ifstream fichier(argv[1]);	
	if (not fichier)
	{
		std::cout << "Error when opening the file" << std::endl;
		return 2; 
	}
	
	//creation du fichier copie
	std::string const nomFichier = (std::string)argv[1] + ".replace";
	std::ofstream copie(nomFichier.c_str(), std::ios::app);
	if (not copie)
	{
		std::cout << "Error when creating a copie" << std::endl;
		return 2;
	}
	
	//copie du fichier avec la fonction replace
	std::string line;
	std::string s1 = argv[2];
	std::string s2 = argv[3];
	
	while(getline(fichier, line))
	{
		line = ft_replace(line, s1, s2);
		if (line == "error")
			return (1);
		copie << line;
	}
	
	return 0;
}
