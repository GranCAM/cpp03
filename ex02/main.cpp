/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carbon-m <carbon-m@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/12 17:50:05 by carbon-m          #+#    #+#             */
/*   Updated: 2025/12/12 17:50:06 by carbon-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main() 
{
	std::cout << "=== Creating ClapTrap ===" << std::endl;
	ClapTrap clap1("Clappy");
	ClapTrap clap2;
	
	std::cout << "\n=== ClapTrap Actions ===" << std::endl;
	clap1.attack("target1");
	clap1.takeDamage(5);
	clap1.beRepaired(3);
	
	std::cout << "\n=== Creating ScavTrap ===" << std::endl;
	ScavTrap scav1("Scavvy");
	ScavTrap scav2;
	
	std::cout << "\n=== ScavTrap Actions ===" << std::endl;
	scav1.attack("target2");
	scav1.takeDamage(10);
	scav1.beRepaired(5);
	scav1.guardGate();
	
	std::cout << "\n=== Creating FragTrap ===" << std::endl;
	FragTrap frag1("Fraggy");
	FragTrap frag2;
	
	std::cout << "\n=== FragTrap Actions ===" << std::endl;
	frag1.attack("target3");
	frag1.takeDamage(15);
	frag1.beRepaired(10);
	frag1.highFivesGuys();
	
	std::cout << "\n=== Testing Copy Constructor ===" << std::endl;
	FragTrap frag3(frag1);
	
	std::cout << "\n=== Testing Assignment Operator ===" << std::endl;
	FragTrap frag4;
	frag4 = frag1;
	
	std::cout << "\n=== Destruction Order ===" << std::endl;
	return 0;
}