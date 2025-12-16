/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carbon-m <carbon-m@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/12 17:50:00 by carbon-m          #+#    #+#             */
/*   Updated: 2025/12/12 17:50:01 by carbon-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "DiamondTrap.hpp"

int main() 
{
	std::cout << "\n=== Creating DiamondTrap ===\n" << std::endl;
	DiamondTrap diamond1("Robot");
	DiamondTrap diamond2;
	
	std::cout << "\n=== DiamondTrap Actions ===\n" << std::endl;
	diamond1.attack("enemy");
	diamond1.takeDamage(20);
	diamond1.beRepaired(15);
	
	std::cout << "\n=== Testing whoAmI ===\n" << std::endl;
	diamond1.whoAmI();
	diamond2.whoAmI();
	
	std::cout << "\n=== Testing Inherited Methods ===\n" << std::endl;
	diamond1.guardGate();     // From ScavTrap
	diamond1.highFivesGuys(); // From FragTrap
	
	std::cout << "\n=== Testing Copy Constructor ===\n" << std::endl;
	DiamondTrap diamond3(diamond1);
	diamond3.whoAmI();
	
	std::cout << "\n=== Testing Assignment Operator ===\n" << std::endl;
	DiamondTrap diamond4;
	diamond4 = diamond1;
	diamond4.whoAmI();
	
	std::cout << "\n=== Destruction Order ===\n" << std::endl;

	return 0;
}