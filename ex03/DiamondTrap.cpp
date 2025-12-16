/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carbon-m <carbon-m@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 18:06:51 by carbon-m          #+#    #+#             */
/*   Updated: 2025/12/16 14:01:40 by carbon-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap("default_clap_name"), FragTrap(), ScavTrap()
{
	this->name = "default";
	this->attackDamage = FragTrap::attackDamage;
	std::cout << "DiamondTrap " << this->name << " constructed." << std::endl;
};

DiamondTrap::DiamondTrap(const std::string &name) : ClapTrap(name + "_clap_name"), FragTrap(name), ScavTrap(name)
{
	this->name = name;
	this->attackDamage = FragTrap::attackDamage;
	std::cout << "DiamondTrap " << this->name << " constructed." << std::endl;
};

DiamondTrap::DiamondTrap(const DiamondTrap &other) : ClapTrap(other), FragTrap(other), ScavTrap(other)
{
	this->name = other.name;
	std::cout << "DiamondTrap " << this->name << " copy constructed." << std::endl;
};

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &other)
{
	if (this != &other)
	{
		ClapTrap::operator= (other);
		this->name = other.name;
	}
	return *this;
};

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap " << this->name << " destructed." << std::endl;
};

void DiamondTrap::attack(const std::string &target)
{
	ScavTrap::attack(target);
};

void DiamondTrap::whoAmI(void)
{
	std::cout << "I AM " << this->name << " ,SON OF "<<  ClapTrap::name << " DESTROYER OF CODE AND BRINGER OF SEGFAULTS\nPREPARE FOR YOUR DOOM" << std::endl;
};