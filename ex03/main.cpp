/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvan-aud <rvan-aud@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 11:45:48 by rvan-aud          #+#    #+#             */
/*   Updated: 2021/12/17 17:18:38 by rvan-aud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int	main(void)
{
	ClapTrap	clappy("Clappy");
	ClapTrap	trappy("Trappy");
	ScavTrap	scavy("Scavy");
	FragTrap	fraggy("Fraggy");
	DiamondTrap	diammy("Diammy");

	std::cout << std::endl << "***ClapTrap tests***" << std::endl;
	clappy.attack("Trappy");
	trappy.takeDamage(0);
	trappy.beRepaired(5);
	std::cout << std::endl << "***ScavTrap tests***" << std::endl;

	scavy.attack("Trappy");
	scavy.takeDamage(20);
	scavy.beRepaired(15);
	scavy.guardGate();
	clappy.attack("Scavy");
	scavy.takeDamage(100);
	scavy.guardGate();
	std::cout << std::endl << "***FragTrap tests***" << std::endl;

	fraggy.attack("Trappy");
	fraggy.takeDamage(40);
	fraggy.beRepaired(3);
	fraggy.highFivesGuys();
	clappy.attack("Fraggy");
	fraggy.takeDamage(100);
	fraggy.highFivesGuys();
	std::cout << std::endl << "***DiamondTrap tests***" << std::endl;

	diammy.attack("Trappy");
	diammy.takeDamage(30);
	diammy.beRepaired(15);
	diammy.guardGate();
	diammy.highFivesGuys();
	diammy.whoAmI();
	std::cout << std::endl;
	return (0);
}
