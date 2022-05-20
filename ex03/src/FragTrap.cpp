#include "../inc/FragTrap.hpp"

FragTrap::FragTrap()
	: ClapTrap("Default call")
{
	std::cout << "Default Frag Constructor(" << getName() << ") called." << std::endl;
	_hitPoints = 100;
	_attackDamage = 30;
}

FragTrap::FragTrap(std::string name)
	: ClapTrap(name)
{
	std::cout << "Frag Constructor(" << getName() << ") called." << std::endl;
	_hitPoints = 100;
	_energyPoints = 100; 
	_attackDamage = 30;
}

FragTrap::FragTrap(const FragTrap& to_copy)
	: ClapTrap("copy_of_" + to_copy.getName())
{
	std::cout << "Frag Copy Constructor called for (" << getName() << ")." << std::endl; 
	*this = to_copy;
}

FragTrap::~FragTrap()
{
	std::cout << "Frag Destructor called for (" << getName() << ")." << std::endl;
	_hitPoints = 0;
	_energyPoints = 0;
	_attackDamage = 0;
}

void	FragTrap::attack(const	std::string& target)
{
	if (_energyPoints && _hitPoints){
		_energyPoints--;	
		std::cout << "Frag (" << getName() << ") attacks " << target << ", causing "
				<< _attackDamage << " points of damage!" << std::endl;
	}
	else
		std::cout << "FragTrap (" << getName() << ") can not attack. " 
				<< _energyPoints << " points left." << std::endl;
}

void	FragTrap::highFivesGuys()
{
	std::cout << "Frag (" << getName() << ") request positive high five." << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& to_copy)
{
	if (this != &to_copy)
	{
		_hitPoints = to_copy.getHitPoints();
		_energyPoints = to_copy.getEnergyPoints();
		_attackDamage = to_copy.getAttackDamage();
	}
	return (*this);
}
