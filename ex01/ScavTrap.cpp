#include "ScavTrap.hpp"

// Default Class Constructor
ScavTrap::ScavTrap(void)
{
	setName("Default ScavTrap");
	setHp(100);
	setEp(50);
	setAd(20);
	std::cout << "Default Constructor Called: ScavTrap(" << getName() << ") created" << std::endl;
}

// String Class Constructor
ScavTrap::ScavTrap(std::string name)
{
	setName(name);
	setHp(100);
	setEp(50);
	setAd(20);
	std::cout << "String Constructor Called: ScavTrap(" << getName() << ") created" << std::endl;
}

// Copy Class Constructor
ScavTrap::ScavTrap(const ScavTrap &src) : ClapTrap(src)
{
	*this = src;
	std::cout << "Copy Constructor Called: ScavTrap(" << getName() << ") created" << std::endl;
}

// Class Deconstructor
ScavTrap::~ScavTrap(void)
{
	std::cout << "Deconstructor Called: ScavTrap(" << getName() << ") destroyed" << std::endl;
}

// Assign Operator Overlaod
ScavTrap	&ScavTrap::operator=(const ScavTrap &rhs)
{
	// Make your Assignment here
	setName(rhs.getName());
	setHp(rhs.getHp());
	setEp(rhs.getEp());
	setAd(rhs.getAd());
	return (*this);
}

void	ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap " << getName() << " is now in Gate keeper mode." << std::endl;
}
