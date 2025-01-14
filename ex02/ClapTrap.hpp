#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>
#include <iomanip>

typedef std::string str;

class ClapTrap {
	public:
		ClapTrap(str name);
		ClapTrap(ClapTrap const &source);
		ClapTrap();		
		~ClapTrap();

		ClapTrap &	operator=(ClapTrap const &rhSide);

		int		getHitPoints() const;
		int		getEnergyPoints() const;
		int		getAttackDamage() const;
		str		getName() const;
		void	setHitPoints(int hitPoints);
		void	setEnergyPoints(int energyPoints);
		void	setAttackDamage(int attackDamage);
		void	setName(str name);

		void	attack(const str &target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
	
	protected:                       // using private here still works because i implemented setters and getters functions and used them in the code...
		str	name;
		int	hitPoints;
		int	energyPoints;
		int	attackDamage;
};

#endif
