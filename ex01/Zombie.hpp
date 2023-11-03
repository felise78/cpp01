/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hemottu <hemottu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 19:04:45 by hemottu           #+#    #+#             */
/*   Updated: 2023/10/31 15:41:20 by hemottu          ###   ########.fr       */
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

	Zombie*		zombieHorde(int N, std::string name);

#endif