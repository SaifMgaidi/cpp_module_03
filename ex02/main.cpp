#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main(void)
{
	std::cout << "---------constructor--------------------\n";
	ClapTrap	one("one");
	FragTrap	two("two");

	std::cout << "\n---------ClapTrap case--------------------\n";
	one.attack("two");
	one.takeDamage(20);
	one.beRepaired(10);

	std::cout << "\n---------FragTrap case--------------------\n";
	two.attack("one");
	two.takeDamage(20);
	two.beRepaired(10);
	two.highFivesGuys();

	std::cout << "\n---------destructor--------------------\n";
	return (0);
}