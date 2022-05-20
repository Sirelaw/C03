#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap
{
private:
	std::string				_name;

protected:
	unsigned int			_hitPoints;
	unsigned int			_energyPoints;
	unsigned int			_attackDamage;

public:
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap&);
	~ClapTrap();
	ClapTrap&	operator=(const ClapTrap& rhs);
	const std::string&		getName() const;
	unsigned int			getHitPoints() const;
	unsigned int			getEnergyPoints() const;
	unsigned int			getAttackDamage() const;
	void	attack(const std::string& target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int	amount);
};




#endif