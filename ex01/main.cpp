/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hemottu <hemottu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 18:57:05 by hemottu           #+#    #+#             */
/*   Updated: 2023/10/31 15:46:47 by hemottu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


int	main(void)
{
	Zombie	*horde;

	horde = zombieHorde(5, "Jean-Luc");
	for(int i = 0; i < 5; i++)
		horde[i].announce();
	delete[] horde;
	return 0;
}