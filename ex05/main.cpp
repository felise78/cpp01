/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hemottu <hemottu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 13:36:33 by hemottu           #+#    #+#             */
/*   Updated: 2023/11/03 14:41:04 by hemottu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Harl.hpp"

int main ()
{
	Harl harl;
	
	std::cout << "DEBUG : " << std::endl;
	harl.complain("DEBUG");
	std::cout << "INFO : " << std::endl;
	harl.complain("INFO");
	std::cout << "WARNING : " << std::endl;
	harl.complain("WARNING");
	std::cout << "ERROR : " << std::endl;
	harl.complain("ERROR");
	
	return (0);
}