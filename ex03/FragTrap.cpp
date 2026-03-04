#include "FragTrap.hpp"

// -------------------Constructor------------------------------------

FragTrap::FragTrap()
:	ClapTrap()
{
	this->name_ = "";
	this->hitPoints_ = 100;
	this->energyPoints_ = 100;
	this->attackDamage_ = 30;
	std::cout << "FragTrap default constructor called for \'" << name_ << "\'\n";
}

FragTrap::FragTrap(std::string name)
:	ClapTrap(name)
{
	this->name_ = name;
	this->hitPoints_ = 100;
	this->energyPoints_ = 100;
	this->attackDamage_ = 30;
	std::cout << "FragTrap parameters constructor called for \'" << name_ << "\'\n";
}

FragTrap::FragTrap(const FragTrap& other)
:	ClapTrap(other)
{
	std::cout << "FragTrap copy constructor called for \'" << name_ << "\'\n";
}

FragTrap& FragTrap::operator=(const FragTrap& other)
{
	if (this != &other)
		ClapTrap::operator=(other);
	std::cout << "FragTrap copy assignement operator called for \'" << name_ << "\'\n";
	return (*this);
}


// -------------------Destructor------------------------------------

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called for \'" << name_ << "\'\n";
}


// -------------------Member Functions------------------------------------

void	FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap named \'" << name_ << "\' request a positive high-fives !\n";
}