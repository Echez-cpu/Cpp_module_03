#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main() {
    std::cout << "=== Creating ClapTrap, ScavTrap, and FragTrap instances ===\n";

    ClapTrap Gabriel("Gabriel");
    ClapTrap *Lilith = new ClapTrap("Lilith");
    ScavTrap Azazel("Azazel");
    FragTrap Michael("Michael");

    std::cout << "\n=== Testing attack, damage, and repair ===\n";

    Gabriel.attack("Azazel");
    Azazel.takeDamage(Gabriel.getAttackDamage());

    Azazel.beRepaired(18);

    Azazel.guardGate();

    Azazel.attack("Lilith");
    Lilith->takeDamage(Azazel.getAttackDamage());

    delete Lilith;

    std::cout << "\n=== Testing FragTrap functionality ===\n";

    Michael.attack("Azazel");
    Azazel.takeDamage(Michael.getAttackDamage());

    Michael.highFivesGuys();

    std::cout << "\n=== End of program ===\n";

    return 0;
}
