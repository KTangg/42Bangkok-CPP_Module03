#ifndef __DIAMONDTRAP_HPP__
# define __DIAMONDTRAP_HPP__

# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class DiamondTrap: public ScavTrap, public FragTrap
{
	public:
		// String Class Constructor
		DiamondTrap(std::string name);
		// Copy Class Constructor
		DiamondTrap(const DiamondTrap &src);
		// Class Deconstructor
		virtual	~DiamondTrap(void);

		// Assign operator overload
		DiamondTrap	&operator=(const DiamondTrap &rhs);

		// Function member part
		void	setDiaName(std::string name);
		std::string	getDiaName(void) const;
		void	attack(const std::string &target);
		void	whoAmI(void);

	private:
		// Default Class Constructor
		DiamondTrap(void);
		std::string	_name;
};

#endif // **************************************************** __DIAMONDTRAP_HPP__ //
