#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
public:
	FragTrap();
	FragTrap(std::string name);
	FragTrap(const FragTrap& to_copy);
	~FragTrap();
	void	attack(const	std::string& target);
	FragTrap& operator=(const FragTrap& to_copy);
    void highFivesGuys(void);
};

#endif