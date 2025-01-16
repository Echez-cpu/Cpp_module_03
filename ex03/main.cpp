#include "DiamondTrap.hpp"

int main() {
    std::cout << "=== Creating DiamondTrap instances ===\n";
    DiamondTrap angel("Angel");
    DiamondTrap demon("Demon");

    std::cout << "\n=== Testing attack functionality ===\n";
    angel.attack("Demon");
    demon.takeDamage(angel.getAttackDamage());

    std::cout << "\n=== Testing repair functionality ===\n";
    demon.beRepaired(30);

    std::cout << "\n=== Testing special capacities ===\n";
    angel.whoAmI();
    demon.whoAmI();

    std::cout << "\n=== Testing energy depletion ===\n";
    for (int i = 0; i < 50; ++i) {
        angel.attack("Demon");
    }
    angel.attack("Demon"); // Should fail due to energy depletion

    std::cout << "\n=== Testing destruction order ===\n";
    return 0;
}
