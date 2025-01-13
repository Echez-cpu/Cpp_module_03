
#include "ScavTrap.hpp"

int main() {
    // Create a ScavTrap object
    std::cout << "=== Creating ScavTrap objects ===" << std::endl;
    ScavTrap scav1("Scavvy");
    ScavTrap scav2("Trapster");

    // Test attack functionality
    std::cout << "\n=== Testing attack ===" << std::endl;
    scav1.attack("an intruder");
    scav2.attack("a target");

    // Test taking damage
    std::cout << "\n=== Testing takeDamage ===" << std::endl;
    scav1.takeDamage(30);
    scav2.takeDamage(20);

    // Test repairing
    std::cout << "\n=== Testing beRepaired ===" << std::endl;
    scav1.beRepaired(20);
    scav2.beRepaired(15);

    // Test energy depletion
    std::cout << "\n=== Testing energy depletion ===" << std::endl;
    for (int i = 0; i < 60; ++i) { // Loop to drain energy
        scav1.attack("dummy target");
    }

    // Test guardGate functionality
    std::cout << "\n=== Testing guardGate ===" << std::endl;
    scav2.guardGate();

    // Test copy constructor
    std::cout << "\n=== Testing copy constructor ===" << std::endl;
    ScavTrap scav3(scav1);
    scav3.attack("a clone target");

    // Test copy assignment operator
    std::cout << "\n=== Testing copy assignment operator ===" << std::endl;
    scav3 = scav2;
    scav3.attack("another target");

    // Destructor messages will display automatically at the end of the program
    std::cout << "\n=== End of program ===" << std::endl;
    return 0;
}
