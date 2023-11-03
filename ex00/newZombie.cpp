/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hemottu <hemottu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 19:11:04 by hemottu           #+#    #+#             */
/*   Updated: 2023/10/31 15:31:20 by hemottu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <string>

Zombie*	newZombie( std::string name )
{
	Zombie	*newZombie_ptr(0);
	newZombie_ptr = new Zombie;
	newZombie_ptr->set_Name(name);
	return newZombie_ptr;
}