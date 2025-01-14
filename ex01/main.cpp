
#include "ScavTrap.hpp"

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main() {
    std::cout << "\n=== Creating ScavTrap instances ===" << std::endl;
    ScavTrap scav1("GateKeeper");
    ScavTrap scav2("Guardian");

    std::cout << "\n=== Testing attack ===" << std::endl;
    scav1.attack("Intruder");
    scav2.attack("Enemy");

    std::cout << "\n=== Testing takeDamage ===" << std::endl;
    scav1.takeDamage(30);
    scav2.takeDamage(70);

    std::cout << "\n=== Testing beRepaired ===" << std::endl;
    scav1.beRepaired(20);
    scav2.beRepaired(50);

    std::cout << "\n=== Testing energy depletion ===" << std::endl;
    for (int i = 0; i < 55; ++i) {  // Loop to deplete energy
        scav1.attack("Dummy Target");
    }
    scav1.attack("Exhausted Target");

    std::cout << "\n=== Testing guardGate ===" << std::endl;
    scav1.guardGate();
    scav2.guardGate();

    std::cout << "\n=== Testing destruction order ===" << std::endl;
    // Objects will be destroyed in reverse order of creation automatically.
    return 0;
}



/*int	main() {
	ClapTrap	Angel("Angel");
	ClapTrap	*Human = new ClapTrap("Human");
	ScavTrap	Demon("Demon");

	Angel.attack("Demon");
	Demon.takeDamage(Angel.getAttackDamage());
	Demon.beRepaired(18);
    Demon.guardGate();
	Demon.attack("Human");
	Human->takeDamage(Demon.getAttackDamage());
	delete Human;
	return 0;
}*/
