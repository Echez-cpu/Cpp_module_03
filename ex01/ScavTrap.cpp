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
	 if (this->hitPoints <= 0) 
	{
		 std::cout << "ferocious ScavTrap " << this->name << " can't attack because it has no hit points left!" << std::endl;
        return;
    }
    if (this->energyPoints > 0) 
	{
		std::cout << "ferocious ScavTrap " << this->getName() << " lauches for harmless " << target << " causing it " << this->getAttackDamage() << " attack damage" << std::endl;
        this->energyPoints -= 1;
       } 
	else {
        std::cout << "Deadly ScavTrap " << this->name << " can't attack " << target << " because it has no energy points left!" << std::endl;
    }
}



void	ScavTrap::guardGate() const {
	std::cout << "Violence ScavTrap " << this->getName() << " is now in Gate keeper mode.!" << std::endl;
}
