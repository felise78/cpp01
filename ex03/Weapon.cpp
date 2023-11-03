/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hemottu <hemottu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 17:23:45 by hemottu           #+#    #+#             */
/*   Updated: 2023/11/03 21:05:47 by hemottu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) : m_type(type)
{
	
}

Weapon::~Weapon()
{
	
}

const std::string&	Weapon::getType(void)
{
	return this->m_type;
}

void 	Weapon::setType(std::string type)
{
	this->m_type = type;
}