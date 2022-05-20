#include "../inc/ClapTrap.hpp"

int main()
{
	ClapTrap	one("first");
	ClapTrap	two("second");

	one.attack(two.getName());
	return (0);
}