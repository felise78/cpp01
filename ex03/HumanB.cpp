/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hemottu <hemottu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 17:23:35 by hemottu           #+#    #+#             */
/*   Updated: 2023/11/03 15:58:22 by hemottu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "HumanB.hpp"

HumanB::HumanB(std::string name) : m_name(name)
{

}

HumanB::~HumanB()
{
	
}

void	HumanB::setWeapon(Weapon& weapon)
{
	this->m_weapon = &weapon;
}

void	HumanB::attack()
{
	std::cout << this->m_name << " attacks with their " << this->m_weapon->getType() << std::endl;
}