
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main() 
{
	std::cout << "=== Creating ClapTrap ===" << std::endl;
	ClapTrap clap1("Clappy");
	ClapTrap clap2;
	
	std::cout << "\n=== ClapTrap Actions ===" << std::endl;
	clap1.attack("target1");
	clap1.takeDamage(5);
	clap1.beRepaired(3);
	clap1.status();
	
	std::cout << "\n=== Creating ScavTrap ===" << std::endl;
	ScavTrap scav1("Scavvy");
	ScavTrap scav2;
	
	std::cout << "\n=== ScavTrap Actions ===" << std::endl;
	scav1.attack("target2");
	scav1.takeDamage(10);
	scav1.beRepaired(5);
	scav1.guardGate();
	scav1.status();
	
	std::cout << "\n=== Testing Copy Constructor ===" << std::endl;
	ScavTrap scav3(scav1);
	scav3.status();
	
	std::cout << "\n=== Testing Assignment Operator ===" << std::endl;
	ScavTrap scav4;
	scav4 = scav1;
	scav4.status();
	
	std::cout << "\n=== Destruction Order ===" << std::endl;
	return 0;
}