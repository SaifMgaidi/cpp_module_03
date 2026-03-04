#include "DiamondTrap.hpp"

int	main(void)
{
	std::cout << "---------constructor--------------------\n";
	DiamondTrap	one("one");

	std::cout << "\n---------DiamondTrap case--------------------\n";
	one.attack("two");
	for (int i = 0; i < 20; ++i)
		one.takeDamage(20);
	one.beRepaired(10);
	one.guardGate();
	one.whoAmI();

	std::cout << "\n---------destructor--------------------\n";
	return (0);
}