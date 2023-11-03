/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hemottu <hemottu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 13:36:36 by hemottu           #+#    #+#             */
/*   Updated: 2023/11/03 20:33:01 by hemottu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include <string>

class Harl {

	public:

	Harl();
	~Harl();

	void complain( std::string level );

	private :

	void	debug(void);
	void	info(void);
	void	warning(void);
	void	error(void);

};

#endif