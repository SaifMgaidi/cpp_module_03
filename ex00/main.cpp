#include "ClapTrap.hpp"

int	main(void)
{
	std::cout << "---------constructor--------------------\n";
	ClapTrap	one("one");
	ClapTrap	two(one);
	ClapTrap	three = two;
	ClapTrap	four;

	std::cout << "\n---------normal case--------------------\n";

	one.attack("two");
	one.takeDamage(5);
	one.beRepaired(5);

	std::cout << "\n---------attack case (loop 20 times)--------------------\n";

	for (int i = 0; i < 20; ++i)
		two.attack("three");
	std::cout << "\n---------repair case (loop 20 times)--------------------\n";
	for (int i = 0; i < 20; ++i)
		three.beRepaired(10);
	std::cout << "\n---------dammage case (loop 20 times)--------------------\n";
	for (int i = 0; i < 20; ++i)
		four.takeDamage(5);

	std::cout << "\n---------destructor--------------------\n";
	return (0);
}