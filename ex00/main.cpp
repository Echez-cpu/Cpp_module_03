#include "ClapTrap.hpp"

#include "ClapTrap.hpp"



#include "ClapTrap.hpp"

int main() {
    std::cout << "=== Creating ClapTrap instances ===" << std::endl;
    ClapTrap clap1("Clapster");
    ClapTrap clap2("Trapper");

    std::cout << "\n=== Testing attack ===" << std::endl;
    clap1.attack("a dummy target");
    clap2.attack("a test subject");

    std::cout << "\n=== Testing takeDamage ===" << std::endl;
    clap1.takeDamage(5);
    clap2.takeDamage(11);

    std::cout << "\n=== Testing beRepaired ===" << std::endl;
    clap1.beRepaired(3);
    clap2.beRepaired(8);

    std::cout << "\n=== Testing energy depletion ===" << std::endl;
    for (int i = 0; i < 12; ++i) {
        clap1.attack("energy dummy");
    }

    std::cout << "\n=== Attempting to act with no energy ===" << std::endl;
    clap1.attack("an exhausted target");
    clap1.beRepaired(5);

    std::cout << "\n=== Simulating zero hit points ===" << std::endl;
    clap2.takeDamage(50);  // Reducing hit points to 0
    clap2.attack("a final target");
    clap2.beRepaired(5);
    
    std::cout << "\n=== Boundary case: Positive hit points but zero energy ===" << std::endl;
    clap1.takeDamage(5);
    clap1.attack("boundary target");
    clap1.beRepaired(3);

    
    std::cout << "\n=== End of program ===" << std::endl;
    return 0;
}
