
#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : name("Default"), hitPoints(10), energyPoints(10), attackDamage(0) 
{
	std::cout << "ClapTrap " << this->name << " constructed." << std::endl;
}

ClapTrap::ClapTrap(const std::string &name) : name(name), hitPoints(10), energyPoints(10), attackDamage(0) 
{
	std::cout << "ClapTrap " << this->name << " constructed." << std::endl;
}



ClapTrap::ClapTrap(const ClapTrap &other) : name(other.name), hitPoints(other.hitPoints), energyPoints(other.energyPoints), attackDamage(other.attackDamage)
{
	std::cout << "ClapTrap " << this->name << " copy constructed." << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
	if (this != &other)
	{
		this->name = other.name;
		this->hitPoints = other.hitPoints;
		this->energyPoints = other.energyPoints;
		this->attackDamage = other.attackDamage;
	}
	return *this;
}



ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << this->name << " destructed." << std::endl;
}



void ClapTrap::attack(const std::string &target)
{
	if (this->energyPoints > 0 && this->hitPoints > 0)
	{
		this->energyPoints--;
		std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing " << this->attackDamage << " points of damage!" << std::endl;
	}
	else if (this->hitPoints <= 0)
		std::cout << "ClapTrap " << this->name << " cannot attack because it has no hit points left." << std::endl;
	else if (this->energyPoints <= 0)
		std::cout << "ClapTrap " << this->name << " has insufficient energy to attack." << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->hitPoints <= amount)
	{
		this->hitPoints = 0;
		std::cout << "ClapTrap " << this->name << " takes " << amount << " points of damage and is now destroyed!" << std::endl;
	}
	else
	{
		this->hitPoints -= amount;
		std::cout << "ClapTrap " << this->name << " takes " << amount << " points of damage, remaining hit points: " << this->hitPoints << "." << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->energyPoints > 0 && this->hitPoints > 0)
	{
		this->energyPoints--;
		this->hitPoints += amount;
		std::cout << "ClapTrap " << this->name << " is repaired by " << amount << " points, new hit points: " << this->hitPoints << "." << std::endl;
	}
	else if (this->hitPoints <= 0)
		std::cout << "ClapTrap " << this->name << " cannot be repaired because it has no hit points left." << std::endl;
	else if (this->energyPoints <= 0)
		std::cout << "ClapTrap " << this->name << " has insufficient energy to repair." << std::endl;
}