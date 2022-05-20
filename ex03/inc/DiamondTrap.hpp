#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
private:
	std::string		_name;
public:
	DiamondTrap(std::string name);
	DiamondTrap(const DiamondTrap& to_copy);
	~DiamondTrap();
	DiamondTrap& operator=(const DiamondTrap& to_copy);
	const 	std::string&		getName() const;
	void	attack(const	std::string& target);
	void	setName(std::string name);
	void	whoAmI();
};

#endif