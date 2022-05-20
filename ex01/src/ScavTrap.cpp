#include "../inc/ScavTrap.hpp"

ScavTrap::ScavTrap()
	: ClapTrap("Default call")
{
	std::cout << "Default Scav Constructor(" << getName() << ") called." << std::endl;
	_energyPoints = 50;
}

ScavTrap::ScavTrap(std::string name)
	: ClapTrap(name)
{
	std::cout << "Scav Constructor(" << getName() << ") called." << std::endl;
	_hitPoints = 100;
	_energyPoints = 50; 
	_attackDamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap& to_copy)
	: ClapTrap("copy_of_" + to_copy.getName())
{
	std::cout << "Scav Copy Constructor called for (" << getName() << ")." << std::endl; 
	*this = to_copy;
}

ScavTrap::~ScavTrap()
{
	std::cout << "Scav Destructor called for (" << getName() << ")." << std::endl;
	_hitPoints = 0;
	_energyPoints = 0;
	_attackDamage = 0;
}

void	ScavTrap::attack(const	std::string& target)
{
	if (_energyPoints && _hitPoints){
		_energyPoints--;	
		std::cout << "Scav (" << getName() << ") attacks " << target << ", causing "
				<< _attackDamage << " points of damage!" << std::endl;
	}
	else
		std::cout << "ScavTrap (" << getName() << ") can not attack. " 
				<< _energyPoints << " points left." << std::endl;
}

void	ScavTrap::guardGate()
{
	std::cout << "Scav (" << getName() << ") is now in Gate keeper mode." << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& to_copy)
{
	if (this != &to_copy)
	{
		_hitPoints = to_copy.getHitPoints();
		_energyPoints = to_copy.getEnergyPoints();
		_attackDamage = to_copy.getAttackDamage();
	}
	return (*this);
}