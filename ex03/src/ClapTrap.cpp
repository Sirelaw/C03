#include "../inc/ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
	: _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "Clap Constructor(" << _name << ") called." << std::endl; 
}

ClapTrap::ClapTrap(const ClapTrap& origin)
	: _name("copy_of_" + origin.getName()), _hitPoints(origin.getHitPoints()),
		_energyPoints(origin.getEnergyPoints()), _attackDamage(origin.getAttackDamage())
{
	std::cout << "Clap Copy Constructor called for (" << _name << ")." << std::endl; 
}

ClapTrap::~ClapTrap()
{
	std::cout << "Clap Destructor called for (" << _name << ")." << std::endl;
	_name = "dead";
	_hitPoints = 0;
	_energyPoints = 0;
	_attackDamage = 0;
}

ClapTrap&	ClapTrap::operator=(const ClapTrap& rhs)
{
	if (this != &rhs)
	{
		_name = rhs.getName();
		_hitPoints = rhs.getHitPoints();
		_energyPoints = rhs.getEnergyPoints();
		_attackDamage = rhs.getAttackDamage();
	}
	return (*this);
}

const std::string&		ClapTrap::getName() const
{
	return (_name);
}

unsigned int	ClapTrap::getHitPoints() const
{
	return(_hitPoints);
}

unsigned int	ClapTrap::getEnergyPoints() const
{
	return(_energyPoints);
}

unsigned int	ClapTrap::getAttackDamage() const
{
	return(_attackDamage);
}

void	ClapTrap::attack(const	std::string& target)
{
	if (_energyPoints && _hitPoints){
		_energyPoints--;	
		std::cout << "Clap (" << _name << ") attacks " << target << ", causing "
				<< _attackDamage << " points of damage!" << std::endl;
	}
	else
		std::cout << "ClapTrap (" << _name << ") can not attack. " 
				<< _energyPoints << " points left." << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	_hitPoints = _hitPoints - amount;
	std::cout << "ClapTrap (" << _name << ") took damage of " << amount << " points."
				<< " Now on " << _hitPoints << " hit points" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int	amount)
{
	if (_energyPoints){
	_hitPoints = _hitPoints + amount;
	_energyPoints--;
	std::cout << "ClapTrap (" << _name << ") got repaired with " << amount << " points."
				<< " Now on " << _hitPoints << " hit points" << std::endl;
	}
	else
		std::cout << "ClapTrap (" << _name << ") can not be repaied. " 
				<< _energyPoints << " points left." << std::endl;

}