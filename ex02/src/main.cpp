#include "../inc/ScavTrap.hpp"
#include "../inc/FragTrap.hpp"

int main()
{
	ClapTrap	one("Clap_one");
	ScavTrap	two("Scav_two");
	FragTrap	three("Frag_three");
	FragTrap	four(three);

	one.attack(two.getName());
	two.attack(one.getName());
	three.attack(two.getName());
	two.guardGate();
	three.highFivesGuys();
	return (0);
}