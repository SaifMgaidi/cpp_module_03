#include "ClapTrap.hpp"

// -------------------Constructor------------------------------------
ClapTrap::ClapTrap()
:	name_(""), hitPoints_(10),
	energyPoints_(10), attackDamage_(0)
{
	std::cout << "Claprap constructor called for \'" << name_ << "\'\n";
}

ClapTrap::ClapTrap(std::string name)
:	name_(name), hitPoints_(10),
	energyPoints_(10), attackDamage_(0)
{
	std::cout << "ClapTrap parameters constructor called for \'" << name_ << "\'\n";
}

ClapTrap::ClapTrap(const ClapTrap& other)
:	name_(other.name_), hitPoints_(other.hitPoints_),
	energyPoints_(other.energyPoints_), attackDamage_(other.attackDamage_)
{
	std::cout << "ClapTrap copy constructor called for \'" << name_ << "\'\n";
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
	std::cout << "ClapTrap copy assignement operator called for \'" << name_ << "\'\n";
	if (this != &other)
	{
		name_ = other.name_;
		hitPoints_ = other.hitPoints_;
		energyPoints_ = other.energyPoints_;
		attackDamage_ = other.attackDamage_;
	}
	return (*this);
}


// -------------------Constructor------------------------------------
ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap destructor called for \'" << name_ << "\'\n";
}


// -------------------Member Functions------------------------------------

void	ClapTrap::attack(const std::string& target)
{
	if (hitPoints_ <= 0 || energyPoints_ <= 0)
		return ;
	energyPoints_--;
	std::cout << "ClapTrap " << name_ << " attacks " << target << ", causing " << attackDamage_ <<  " points of damage!\n";
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (hitPoints_ <= 0)
		return ;
	hitPoints_ -= amount;
	std::cout << "ClapTrap " << name_ << " take " << amount << " points of damage!\n";
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (hitPoints_ <= 0 || energyPoints_ <= 0)
		return ;
	hitPoints_ += amount;
	energyPoints_--;
	std::cout << "ClapTrap " << name_ << " regain " << amount << " hit points!\n";
}
