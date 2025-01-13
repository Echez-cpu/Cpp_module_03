#include "ScavTrap.hpp"

ScavTrap::ScavTrap(str name) : ClapTrap() {
	this->setName(name);
	this->setHitPoints(100);
	this->setEnergyPoints(50);
	this->setAttackDamage(20);
	std::cout << "A very deadly ScavTrap has appeared, be careful with " << this->name << " and his " << this->attackDamage << " attack damage !" << std::endl;
}


ScavTrap::ScavTrap(ScavTrap const &source) : ClapTrap(source.getName()) {
	*this = source;
}


ScavTrap::~ScavTrap() {
	std::cout << "Deadly ScavTrap " << this->name << " exploded." << std::endl;
}


ClapTrap::ClapTrap() {
	std::cout << "Without parameters ClapTrap was created : ";
}


ScavTrap &	ScavTrap::operator=(ScavTrap const &original_copy) {
	if (this != &original_copy) {
		this->name = original_copy.getName();
		this->hitPoints = original_copy.getHitPoints();
		this->energyPoints = original_copy.getEnergyPoints();
		this->attackDamage = original_copy.getAttackDamage();
	}
	return *this;
}



void	ScavTrap::attack(const str &target) {
	std::cout << "Deadly ScavTrap " << this->name << " go for broke " << target << " causing him " << this->attackDamage << " attack damage" << std::endl;
}

void	ScavTrap::guardGate() const {
	std::cout << "Violence ScavTrap " << this->name << " enter in protected mode !" << std::endl;
}
