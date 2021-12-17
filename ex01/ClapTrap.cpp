/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvan-aud <rvan-aud@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 11:45:55 by rvan-aud          #+#    #+#             */
/*   Updated: 2021/12/17 15:57:59 by rvan-aud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : _name("Default"), _hitpoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "Default ClapTrap constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string str) : _name(str), _hitpoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "ClapTrap " << str << " constructor called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &src)
{
	*this = src;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap " << this->_name << " destructor called" << std::endl;
}

ClapTrap	&ClapTrap::operator=(ClapTrap const &rhs)
{
	this->_name = rhs._name;
	this->_hitpoints = rhs._hitpoints;
	this->_energyPoints = rhs._energyPoints;
	this->_attackDamage = rhs._attackDamage;
	return (*this);
}

void	ClapTrap::attack(std::string const &target)
{
	if (this->_energyPoints >= 3)
	{
		this->_energyPoints -= 3;
		std::cout << "ClapTrap " << this->_name
			<< " attacks " << target
			<< ", causing " << this->_attackDamage << " points of damage! He lost 3 energy points and now has " << this->_energyPoints << std::endl;
	}
	else
		std::cout << "ClapTrap " << this->_name << " doesn't have enough energy to attack!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hitpoints == 0)
		std::cout << "ClapTrap " << this->_name << " is already dead :'(" << std::endl;
	else
	{
		int i = this->_hitpoints;
		i -= amount;
		if (i <= 0)
			this->_hitpoints = 0;
		else
			this->_hitpoints -= amount;
		std::cout << "ClapTrap " << this->_name << " just took " << amount << " damage! He now has " << this->_hitpoints << " hitpoints";
		if (this->_hitpoints == 0)
			std::cout << " and sadly died" << std::endl;
		else
			std::cout << std::endl;
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_hitpoints == 0)
		std::cout << "ClapTrap " << this->_name << " can't be repaired, he's already dead!" << std::endl;
	else
	{
		this->_hitpoints += amount;
		std::cout << "ClapTrap " << this->_name << " got repaired! He now has " << this->_hitpoints << " hitpoints" << std::endl;
	}
}
