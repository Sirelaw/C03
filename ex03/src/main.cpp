#include "../inc/ScavTrap.hpp"
#include "../inc/FragTrap.hpp"
#include "../inc/DiamondTrap.hpp"

int main()
{
	ClapTrap	one("Clap_one");
	ScavTrap	two("Scav_two");
	FragTrap	three("Frag_three");
	DiamondTrap	four("Diamond_four");
	ClapTrap	six(one);
	ScavTrap	seven(two);
	FragTrap	eight(three);
	DiamondTrap	nine(four);

	one.attack(two.getName());
	one.beRepaired(20);
	one.takeDamage(30);

	two.attack(one.getName());
	three.attack(two.getName());
	four.attack(three.getName());
	two.guardGate();
	three.highFivesGuys();
	std::cout << ">>>>>>>>>>>---------------------<<<<<<<<<<<<" << std::endl;
	four.whoAmI();
	std::cout << "Diam Hit Points (" << four.getHitPoints() << ")." << std::endl;
	std::cout << "Diam Energy Points (" << four.getEnergyPoints() << ")." << std::endl;
	std::cout << "Diam Attack Damage (" << four.getAttackDamage() << ")." << std::endl;
	std::cout << ">>>>>>>>>>>---------------------<<<<<<<<<<<<" << std::endl;
	return (0);
}