/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hemottu <hemottu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 19:04:45 by hemottu           #+#    #+#             */
/*   Updated: 2023/10/19 19:08:23 by hemottu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
 # define ZOMBIE_HPP

	#include <string>

	class Zombie
	{
		public:
		
		Zombie();
		~Zombie();
		
		void announce ( void );
		void	set_Name(std::string name);
		
		private:
		std::string name;
	};

Zombie *newZombie( std::string name );
void randomChump( std::string name );

#endif