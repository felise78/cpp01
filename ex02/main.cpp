/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hemottu <hemottu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 15:49:18 by hemottu           #+#    #+#             */
/*   Updated: 2023/10/31 17:20:29 by hemottu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main()
{
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;

	std::cout << "adresse de str : " << &str << std::endl; 
	std::cout << "adresse dans strPTR : " << stringPTR << std::endl;
	std::cout << "adresse dans strREF : " << &stringREF << std::endl; 
	std::cout << std::endl;
	std::cout << "valeur de str : " << str << std::endl;
	std::cout << "valeur de strPTR : " << *stringPTR << std::endl;
	std::cout << "valeur de strREF : " << stringREF << std::endl; 

	return 0;
}