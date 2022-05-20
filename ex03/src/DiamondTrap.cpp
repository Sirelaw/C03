#include "../inc/DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name)
	: ClapTrap(name)
{
	std::cout << "Diam Constructor(" << (ClapTrap::getName()) << ") called." << std::endl;
	setName((ClapTrap::getName()) + "_clap_name");
}

DiamondTrap::DiamondTrap(const DiamondTrap& to_copy)
	: ClapTrap("copy_of_" + to_copy.ClapTrap::getName())
{
	setName((ClapTrap::getName()) + "_clap_name");
	std::cout << "Diam Copy Constructor called for (" << getName() << ")." << std::endl;
	*this = to_copy;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "Diam Destructor called for (" << getName() << ")." << std::endl;
	_hitPoints = 0;
	_energyPoints = 0;
	_attackDamage = 0;
}

const std::string&	DiamondTrap::getName() const
{
	return (_name);
}

void	DiamondTrap::setName(std::string name)
{
	_name = name;
}

void	DiamondTrap::attack(const	std::string& target)
{
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI()
{
	std::cout << "My DiamondTrap name:	" << _name << std::endl;
	std::cout << "My ClapTrap name:	" << ClapTrap::getName() << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& to_copy)
{
	if (this != &to_copy)
	{
		_hitPoints = to_copy.getHitPoints();
		_energyPoints = to_copy.getEnergyPoints();
		_attackDamage = to_copy.getAttackDamage();
	}
	return (*this);
}