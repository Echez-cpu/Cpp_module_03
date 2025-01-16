#include "DiamondTrap.hpp"


DiamondTrap::DiamondTrap(str name) : ClapTrap(name + "_clap_name") {
	this->name = ClapTrap::name;
	this->hitPoints = FragTrap::hitPoints;
	this->energyPoints = ScavTrap::energyPoints;
	this->attackDamage = FragTrap::attackDamage;
	std::cout << "The Odogwu " << this->name << " has appear in the Obi, Igwe!!!!" << std::endl;
	std::cout << std::setw(30) << "--------------------" << std::endl;
	std::cout << std::setw(27) << "hit points : " << this->hitPoints << std::endl;
	std::cout << std::setw(27) << "Energy Points : " << this->energyPoints << std::endl;
	std::cout << std::setw(27) << "Attack Damage : " << this->attackDamage << std::endl;  // try a getter function to see which value it would be...
	std::cout << std::setw(30) << "--------------------" << std::endl << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const &source) : ClapTrap(source), FragTrap(source), ScavTrap(source) {
	*this = source;
}

DiamondTrap::DiamondTrap() {
	std::cout << "DiamondTrap default constructor called.";
}

DiamondTrap::~DiamondTrap() {
	std::cout << "[DESTRUCTOR] The Odogwu " << this->name << " has joined his Ancestors !" << std::endl; // don't forget the make file flags
}

DiamondTrap &	DiamondTrap::operator=(DiamondTrap const &original_copy) {
	if (this != &original_copy) {
		this->name = original_copy.name;
		this->hitPoints = original_copy.hitPoints;
		this->energyPoints = original_copy.energyPoints;
		this->attackDamage = original_copy.attackDamage;
	}
	return *this;
}



void DiamondTrap::attack(const str &target) {
    ScavTrap::attack(target); // Call ScavTrap's attack
}


void	DiamondTrap::whoAmI() const {
	std::cout << "I am Odogwu " << this->name << ", and my ClapTrap's name is " << ClapTrap::name << "." << std::endl;
}
