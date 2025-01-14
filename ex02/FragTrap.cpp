FragTrap::FragTrap(str name) : ClapTrap() {
	this->name = name;
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
  std::cout << "FragTrap " << this->name << " is ready for combat! (Constructor called)\n";
}


FragTrap::FragTrap(FragTrap const &source) {
	*this = source;
}


FragTrap::~FragTrap() {
  std::cout << "FragTrap " << this->name << " has been destroyed! (Destructor called)\n";
}


FragTrap&	FragTrap::operator=(FragTrap const &original_copy) {
	if (this != &original_copy) {
		this->name = original_copy.getName();
		this->hitPoints = original_copy.getHitPoints();
		this->energyPoints = original_copy.getEnergyPoints();
		this->attackDamage = original_copy.getAttackDamage();
	}
	return *this;
}


void	FragTrap::highFivesGuys() {
	 std::cout << "FragTrap " << name << " requests a high five! ✋\n";
}
