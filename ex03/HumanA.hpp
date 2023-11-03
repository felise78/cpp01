/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hemottu <hemottu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 17:23:33 by hemottu           #+#    #+#             */
/*   Updated: 2023/10/31 20:07:06 by hemottu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_A
# define HUMAN_A

#include <string>
#include "Weapon.hpp"

class HumanA 
{
	public:
	
	HumanA(std::string name, Weapon& weapon);
	~HumanA();
	
	void	attack();

	private:
	std::string m_name;
	Weapon& m_weapon;	
};

#endif