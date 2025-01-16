#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap {
	public:
		DiamondTrap(str name);
		DiamondTrap(DiamondTrap const &source);
		DiamondTrap();
		~DiamondTrap();

		DiamondTrap &	operator=(DiamondTrap const &original_copy);

		void	whoAmI() const;
		void attack(const str &target);

	private:
		str	name;
};

#endif
