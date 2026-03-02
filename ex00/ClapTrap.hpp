#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap
{
public:
	// Constructor
	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap& other);
	ClapTrap& operator=(const ClapTrap& other);

	// Destructor
	~ClapTrap();

	// Member Functions
	void		attack(const std::string& target);
	void		takeDamage(unsigned int amount);
	void		beRepaired(unsigned int amount);
private:
	std::string	name_;
	int			hitPoints_;
	int			energyPoints_;
	int			attackDamage_;
};

#endif