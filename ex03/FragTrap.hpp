#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap {
	public:
		FragTrap(str name);
		FragTrap(FragTrap const &source);
		FragTrap();
		~FragTrap();

		FragTrap& operator=(FragTrap const &original_copy);
		
	void	highFivesGuys(void);

  private:
};

#endif
