#include "ScavTrap.hpp"

ScavTrap::ScavTrap(str name) : ClapTrap() {
	this->setName(name);
	this->setHitPoints(100);
	this->setEnergyPoints(50);
	this->setAttackDamage(20);
	std::cout << "A very deadly ScavTrap has appeared, be careful with " << this->getName() << " and his " << this->getAttackDamage() << " attack damage !" << std::endl;
}


ScavTrap::ScavTrap(ScavTrap const &source) : ClapTrap(source.getName()) {
	*this = source;
}


ScavTrap::~ScavTrap() {
	std::cout << "Deadly ScavTrap " << this->getName() << " exploded." << std::endl;
}


ClapTrap::ClapTrap() {
	std::cout << "Without parameters ClapTrap was created : ";
}


ScavTrap &ScavTrap::operator=(ScavTrap const &original_copy) {
    if (this != &original_copy) {
        this->setName(original_copy.getName());      
        this->setHitPoints(original_copy.getHitPoints());
        this->setEnergyPoints(original_copy.getEnergyPoints());
        this->setAttackDamage(original_copy.getAttackDamage());
    }
    return *this;
}


void	ScavTrap::attack(const str &target) {
	std::cout << "Deadly ScavTrap " << this->getName() << " go for broke " << target << " causing him " << this->getAttackDamage() << " attack damage" << std::endl;
}

void	ScavTrap::guardGate() const {
	std::cout << "Violence ScavTrap " << this->getName() << " enter in protected mode !" << std::endl;
}
