ScavTrap::ScavTrap(str name) : ClapTrap() {
	this->setName(name);
	this->setHitPoints(100);
	this->setEnergyPoints(50);
	this->setAttackDamage(20);
	std::cout << "A very deadly ScavTrap has appeared, be careful with " << this->name << " and his " << this->attackDamage << " attack damage !" << std::endl;
}
