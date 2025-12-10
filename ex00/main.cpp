
#include "ClapTrap.hpp"

int main() 
{
	ClapTrap clap1("Clappy");
	ClapTrap clap2 = clap1;
	ClapTrap clap3;
	clap3 = clap1;          

	clap1.attack("Target1");
	clap1.takeDamage(5);
	clap1.attack("Target2");
	clap1.takeDamage(6);
	clap1.attack("Target3");

	return 0;
}