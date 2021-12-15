/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvan-aud <rvan-aud@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 15:56:42 by rvan-aud          #+#    #+#             */
/*   Updated: 2021/12/15 16:18:28 by rvan-aud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ClapTrap.hpp"

class	FragTrap : public ClapTrap
{
	public:

		FragTrap(void);
		FragTrap(std::string str);
		FragTrap(FragTrap const &src);
		~FragTrap(void);

		FragTrap	&operator=(FragTrap const &rhs);

		void	attack(std::string const &target);
		void	highFivesGuys(void);
};
