#include "ScavTrap.hpp"


// -------------------Constructor------------------------------------

ScavTrap::ScavTrap()
: ClapTrap()
{
	this->name_ = "";
	this->hitPoints_ = 100;
	this->energyPoints_ = 50;
	this->attackDamage_ = 20;
	std::cout << "ScavTrap constructor called for \'" << name_ << "\'\n";

}

ScavTrap::ScavTrap(std::string name)
:	ClapTrap(name)
{
	this->name_ = name;
	this->hitPoints_ = 100;
	this->energyPoints_ = 50;
	this->attackDamage_ = 20;
	std::cout << "ScavTrap parameters constructor called for \'" << name_ << "\'\n";
}

ScavTrap::ScavTrap(const ScavTrap& other)
:	ClapTrap(other)
{
	std::cout << "ScavTrap copy constructor called for \'" << name_ << "\'\n";
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other)
{
	if (this != &other)
		ClapTrap::operator=(other);
	std::cout << "ScavTrap copy assignement operator called for \'" << name_ << "\'\n";
	return (*this);
}

// -------------------Destructor------------------------------------

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called for \'" << name_ << "\'\n";
}


// -------------------Member Functions------------------------------------

void	ScavTrap::attack(const std::string& target)
{
	if (hitPoints_ <= 0 || energyPoints_ <= 0)
		return ;
	energyPoints_--;
	std::cout << "ScavTrap " << name_ << " attacks " << target << ", causing " << attackDamage_ <<  " points of damage!\n";
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap named \'" << name_ << "\' goes into guard mode\n";
}