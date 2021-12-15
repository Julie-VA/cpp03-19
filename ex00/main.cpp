/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvan-aud <rvan-aud@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 11:45:48 by rvan-aud          #+#    #+#             */
/*   Updated: 2021/12/15 15:44:17 by rvan-aud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	clappy("Clappy");
	ClapTrap	trappy("Trappy");

	std::cout << std::endl;
	clappy.attack("Trappy");
	trappy.takeDamage(0);
	trappy.beRepaired(5);
	std::cout << std::endl;
	clappy.attack("Trappy");
	trappy.takeDamage(7);
	trappy.beRepaired(2);
	clappy.attack("Trappy");
	trappy.takeDamage(8);
	trappy.beRepaired(10);
	clappy.attack("Trappy");
	std::cout << std::endl;
	return (0);
}
