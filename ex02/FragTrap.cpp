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
