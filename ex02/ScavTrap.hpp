#ifndef __SCAVTRAP_HPP__
# define __SCAVTRAP_HPP__

# include <iostream>
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
	 	// Default Class Constructor
		ScavTrap(void);
		// String Class Constructor
		ScavTrap(std::string name);
		// Copy Class Constructor
		ScavTrap(const ScavTrap &src);
		// Class Deconstructor
		virtual	~ScavTrap(void);

		// Assign operator overload
		ScavTrap	&operator=(const ScavTrap &rhs);

		// Function member part
		void	attack(const std::string &target);
		void	guardGate();
	private:
};

#endif // **************************************************** __SCAVTRAP_HPP__ //
