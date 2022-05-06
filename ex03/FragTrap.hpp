#ifndef __FRAGTRAP_HPP__
# define __FRAGTRAP_HPP__

# include <iostream>
# include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
	public:
		// Default Class Constructor
		FragTrap(void);
		// String Class Constructor
		FragTrap(std::string name);
		// Copy Class Constructor
		FragTrap(const FragTrap &src);
		// Class Deconstructor
		virtual	~FragTrap(void);

		// Assign operator overload
		FragTrap	&operator=(const FragTrap &rhs);

		// Function member part
		void	attack(const std::string &target);
		void	highFivesGuys(void);

	private:
};

#endif // **************************************************** __FRAGTRAP_HPP__ //
