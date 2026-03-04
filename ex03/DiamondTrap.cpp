#include "DiamondTrap.hpp"

// -------------------Constructor------------------------------------

DiamondTrap::DiamondTrap()
:	ClapTrap(), ScavTrap(), FragTrap()
{
	name_ = "";
	hitPoints_ = 100;
	energyPoints_ = 50;
	attackDamage_ = 30;
	std::cout << "DiamondTrap constructor called for \'" << name_ << "\'\n";
}

DiamondTrap::DiamondTrap(std::string name)
:	ClapTrap(name + "_clap_name"), ScavTrap(name + "_clap_name"),
	FragTrap(name + "_clap_name")
{
	name_ = name;
	hitPoints_ = 100;
	energyPoints_ = 50;
	attackDamage_ = 30;
	std::cout << "DiamondTrap parameters constructor called for \'" << name_ << "\'\n";
}

DiamondTrap::DiamondTrap(const DiamondTrap& other)
:	ClapTrap(other), ScavTrap(other), FragTrap(other)
{
	name_ = other.name_;
	hitPoints_ = other.hitPoints_;
	energyPoints_ = other.energyPoints_;
	attackDamage_ = other.attackDamage_;
	std::cout << "DiamondTrap copy constructor called for \'" << name_ << "\'\n";
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& other)
{
	if (this != &other)
	{
		name_ = other.name_;
		hitPoints_ = other.hitPoints_;
		energyPoints_ = other.energyPoints_;
		attackDamage_ = other.attackDamage_;
	}
	std::cout << "DiamondTrap copy assignement operator called for \'" << name_ << "\'\n";
	return (*this);
}


// -------------------Destructor------------------------------------

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap destructor called for \'" << name_ << "\'\n";
}


// -------------------Member Functions------------------------------------

void	DiamondTrap::attack(const std::string& target)
{
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI()
{
	std::cout << "DiamondTrap called for \'" << name_ << "\', his ClapTrap name \'" << ClapTrap::name_ << "\'\n";
}