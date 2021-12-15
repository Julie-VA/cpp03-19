/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvan-aud <rvan-aud@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 15:20:27 by rvan-aud          #+#    #+#             */
/*   Updated: 2021/12/15 15:54:12 by rvan-aud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap()
{
	std::cout << "Default ScavTrap constructor called" << std::endl;
	this->_hitpoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
}

ScavTrap::ScavTrap(std::string str) : ClapTrap(str)
{
	std::cout << "ScavTrap " << str << " constructor called" << std::endl;
	this->_hitpoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
}

ScavTrap::ScavTrap(ScavTrap const &src)
{
	*this = src;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap " << this->_name << " destructor called" << std::endl;
}

ScavTrap	&ScavTrap::operator=(ScavTrap const &rhs)
{
	this->_name = rhs._name;
	this->_hitpoints = rhs._hitpoints;
	this->_energyPoints = rhs._energyPoints;
	this->_attackDamage = rhs._attackDamage;
	return (*this);
}

void	ScavTrap::attack(std::string const &target)
{
	if (this->_energyPoints >= 10)
	{
		this->_energyPoints -= 10;
		std::cout << "ScavTrap " << this->_name
			<< " ruthlessly attacks " << target
			<< ", causing " << this->_attackDamage << " points of damage! He lost 10 energy points and now has " << this->_energyPoints << std::endl;
	}
	else
		std::cout << "ScavTrap " << this->_name << " doesn't have enough energy to attack!" << std::endl;
}

void	ScavTrap::guardGate(void)
{
	if (this->_hitpoints == 0)
		std::cout << "ScavTrap " << this->_name << " can't enter Gate keeper mode, he's dead!" << std::endl;
	else
		std::cout << "ScavTrap " << this->_name << " entered Gate keeper mode!" << std::endl;
}
