#include "ClapTrap.hpp"

// constructors and copy operator

ClapTrap::ClapTrap(str name) : name(name), hitPoints(10), energyPoints(10), attackDamage(0) {
	std::cout << std::setw(15) << "ClapTrap \"" << name << "\" was created with :" << std::endl;
	std::cout << std::setw(30) << "*******************" << std::endl;
	std::cout << std::setw(27) << "Hit Points : " << this->hitPoints << std::endl;
	std::cout << std::setw(27) << "Energy Points : " << this->energyPoints << std::endl;
	std::cout << std::setw(27) << "Attack Damage : " << this->attackDamage << std::endl;
	std::cout << std::setw(30) << "++++++++++++++++++++" << std::endl << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &source) {
	*this = source;
}

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap " << this->name << " was destroy." << std::endl;
}

ClapTrap &	ClapTrap::operator=(ClapTrap const &rhSide) {
	if (this != &rhSide) {
		this->hitPoints = rhSide.getHitPoints();
		this->energyPoints = rhSide.getEnergyPoints();
		this->attackDamage = rhSide.getAttackDamage();
	}
	return *this;
}


int	ClapTrap::getHitPoints() const {
	return this->hitPoints;
}
int	ClapTrap::getEnergyPoints() const {
	return this->energyPoints;
}
int	ClapTrap::getAttackDamage() const {
	return this->attackDamage;
}

void	ClapTrap::setHitPoints(int hitPoints) {
	this->hitPoints = hitPoints;
}
void	ClapTrap::setEnergyPoints(int energyPoints) {
	this->energyPoints = energyPoints;
}
void	ClapTrap::setAttackDamage(int attackDamage) {
	this->attackDamage = attackDamage;
}

// member functions


void ClapTrap::attack(const std::string &target) {
    if (this->hitPoints <= 0) {
        std::cout << "ClapTrap " << this->name << " can't attack because it has no hit points left!" << std::endl;
        return;
    }
    if (this->energyPoints > 0) {
        std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing " << this->attackDamage << " points of damage!" << std::endl;
        this->energyPoints -= 1;
    } else {
        std::cout << "ClapTrap " << this->name << " can't attack " << target << " because it has no energy points left!" << std::endl;
    }
}

void	ClapTrap::takeDamage(unsigned int amount) {
	std::cout << "Ouch ! " << this->name << " just lost " << amount << " hit points !" << std::endl;
	this->hitPoints -= amount;
}


void ClapTrap::beRepaired(unsigned int amount) {
    if (this->hitPoints <= 0) {
        std::cout << "ClapTrap " << this->name << " can't repair itself because it has no hit points left!" << std::endl;
        return;
    }
    if (this->energyPoints > 0) {
        std::cout << "ClapTrap " << this->name << " repaired itself and gained " << amount << " hit points! Energy points remaining: " << this->energyPoints - 1 << "." << std::endl;
        this->hitPoints += amount;
        this->energyPoints -= 1;
    } else {
        std::cout << "ClapTrap " << this->name << " can't repair itself because it has no energy points left!" << std::endl;
    }
}
