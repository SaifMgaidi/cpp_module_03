#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>
#include <string>

class ScavTrap : public ClapTrap
{
private:
	/* data */
public:
	// Constructor
	ScavTrap();
	ScavTrap(std::string name);
	ScavTrap(const ScavTrap& other);
	ScavTrap& operator=(const ScavTrap& other);

	// Destructor
	~ScavTrap();

	// Member Functions
	void	attack(const std::string& target);
	void	guardGate();
};

#endif