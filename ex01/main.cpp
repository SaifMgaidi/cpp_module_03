#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	std::cout << "---------constructor--------------------\n";
	ClapTrap	one("one");
	ScavTrap	two("two");

	std::cout << "\n---------ClapTrap case--------------------\n";
	one.attack("two");
	one.takeDamage(20);
	one.beRepaired(10);

	std::cout << "\n---------ScavTrap case--------------------\n";
	two.attack("one");
	two.takeDamage(20);
	two.beRepaired(10);
	two.guardGate();

	std::cout << "\n---------destructor--------------------\n";
	return (0);
}