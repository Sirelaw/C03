#include "../inc/ScavTrap.hpp"

int main()
{
	ClapTrap	one("Clap_one");
	ScavTrap	two("Scav_two");

	one.attack(two.getName());
	two.attack(one.getName());
	two.guardGate();
	return (0);
}