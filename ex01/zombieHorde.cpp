/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hemottu <hemottu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 15:25:19 by hemottu           #+#    #+#             */
/*   Updated: 2023/11/03 15:22:40 by hemottu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*		zombieHorde( int N, std::string name )
{
	Zombie *horde(0);
	horde = new Zombie[N];
	for(int i = 0; i < N; i++)
		horde[i].set_Name(name);
	return horde;	
}