/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hemottu <hemottu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 18:57:05 by hemottu           #+#    #+#             */
/*   Updated: 2023/11/03 15:20:51 by hemottu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


int	main(void)
{
	Zombie	*zombie;

	zombie = newZombie("Gerald");
	zombie->announce();
	delete zombie;
	randomChump("Bernard");
}