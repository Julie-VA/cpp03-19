/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvan-aud <rvan-aud@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 15:57:27 by rvan-aud          #+#    #+#             */
/*   Updated: 2021/12/17 15:40:49 by rvan-aud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap()
{
	std::cout << "Default FragTrap constructor called" << std::endl;
	this->_hitpoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
}

FragTrap::FragTrap(std::string str) : ClapTrap(str)
{
	std::cout << "FragTrap " << str << " constructor called" << std::endl;
	this->_hitpoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
}

FragTrap::FragTrap(FragTrap const &src) : ClapTrap(src)
{
	std::cout << "FragTrap " << src._name << " copy constructor called" << std::endl;
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap " << this->_name << " destructor called" << std::endl;
}

FragTrap	&FragTrap::operator=(FragTrap const &rhs)
{
	ClapTrap::operator=(rhs);
	return (*this);
}

void	FragTrap::attack(std::string const &target)
{
	if (this->_energyPoints >= 20)
	{
		this->_energyPoints -= 20;
		std::cout << "FragTrap " << this->_name
			<< " gently attacks " << target
			<< ", causing " << this->_attackDamage << " points of damage! He lost 20 energy points and now has " << this->_energyPoints << std::endl;
	}
	else
		std::cout << "FragTrap " << this->_name << " doesn't have enough energy to attack!" << std::endl;
}

void	FragTrap::highFivesGuys(void)
{
	if (this->_hitpoints == 0)
		std::cout << "FragTrap " << this->_name << " can't high five anyone, he's dead!" << std::endl;
	else
		std::cout << "FragTrap " << this->_name << " wants to high five you!" << std::endl;
}
