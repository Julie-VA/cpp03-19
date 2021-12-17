/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvan-aud <rvan-aud@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 13:04:42 by rvan-aud          #+#    #+#             */
/*   Updated: 2021/12/17 17:11:26 by rvan-aud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"


// With virtual     Without
//inheritance
//   A       		A   A
//  / \      		|   |
// B   C  	 		B   C
//  \ /  	  		 \ /
//   D 		  		  D

class	DiamondTrap : public ScavTrap, public FragTrap
{
	public:

		DiamondTrap(void);
		DiamondTrap(std::string str);
		DiamondTrap(DiamondTrap const &src);
		~DiamondTrap(void);

		DiamondTrap	&operator=(DiamondTrap const &rhs);

		void	attack(std::string const &target);
		void	whoAmI(void);

	private:

		std::string	_name;
};
