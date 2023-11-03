/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hemottu <hemottu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 17:23:48 by hemottu           #+#    #+#             */
/*   Updated: 2023/11/03 15:29:04 by hemottu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <string>

class Weapon 
{
	public:
	
	Weapon(std::string type);
	~Weapon();
	
	std::string	getType() const;

	void		setType(std::string type);
	
	private:
	std::string m_type;	
};

#endif