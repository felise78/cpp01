/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hemottu <hemottu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 17:23:29 by hemottu           #+#    #+#             */
/*   Updated: 2023/11/03 21:07:45 by hemottu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon) : m_name(name), m_weapon(weapon) 
{

}

HumanA::~HumanA()
{
	
}

void HumanA::attack()
{
	std::cout << this->m_name << " attacks with their " << this->m_weapon.getType() << std::endl;
}

void	HumanA::setWeapon(Weapon weapon)
{
	this->m_weapon = weapon;
}