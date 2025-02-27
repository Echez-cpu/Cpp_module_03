#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap {
	public:
		ScavTrap(str name);
		ScavTrap(ScavTrap const &source);
		ScavTrap();
		~ScavTrap();

		ScavTrap& operator=(ScavTrap const &original_copy);
		
		void	attack(const str &target);
		void	guardGate() const;
	private:
};

#endif
