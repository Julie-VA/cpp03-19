/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvan-aud <rvan-aud@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 11:45:48 by rvan-aud          #+#    #+#             */
/*   Updated: 2021/12/15 16:12:12 by rvan-aud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main(void)
{
	ClapTrap	clappy("Clappy");
	ClapTrap	trappy("Trappy");
	ScavTrap	scavy("Scavy");

	std::cout << std::endl;
	clappy.attack("Trappy");
	trappy.takeDamage(0);
	trappy.beRepaired(5);
	std::cout << std::endl;
	
	scavy.attack("Trappy");
	scavy.takeDamage(20);
	scavy.beRepaired(15);
	scavy.guardGate();
	clappy.attack("Scavy");
	scavy.takeDamage(100);
	scavy.guardGate();
	std::cout << std::endl;
	return (0);
}
