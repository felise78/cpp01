/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hemottu <hemottu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 17:23:38 by hemottu           #+#    #+#             */
/*   Updated: 2023/10/31 20:17:51 by hemottu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_B
# define HUMAN_B

#include <string>
#include "Weapon.hpp"

class HumanB 
{
	public:
	
	HumanB(std::string name);
	~HumanB();
	
	void	setWeapon(Weapon& weapon);
	
	void	attack();

	private:
	std::string m_name;
	Weapon* m_weapon;
};

#endif