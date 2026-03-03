#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <iostream>
#include <string>
#include "ClapTrap.hpp"


class FragTrap : public ClapTrap
{
public:
	// Constructor
	FragTrap(void);
	FragTrap(std::string name);
	FragTrap(const FragTrap& other);
	FragTrap& operator=(const FragTrap& other);

	// Destructor
	~FragTrap();

	// Member Functions
	void	highFivesGuys(void);

private:
};

#endif