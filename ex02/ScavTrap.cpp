#include "ScavTrap.hpp"

// Default Class Constructor
ScavTrap::ScavTrap(void) : ClapTrap()
{
	_hp = 100;
	_ep = 50;
	_ad = 20;
	std::cout << "Default Constructor Called: ScavTrap(" << getName() << ") created" << std::endl;
}

// String Class Constructor
ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	_hp = 100;
	_ep = 50;
	_ad = 20;
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
	_hp = rhs.getHp();
	_ep = rhs.getEp();
	_ad = rhs.getAd();
	return (*this);
}

void	ScavTrap::attack(const std::string &target)
{
	if (_ep < 1)
	{
		std::cout << "ScavTrap " << getName() << " doesn't has enough energy!" << std::endl;
		return ;
	}
	_ep--;
	std::cout << "ScavTrap " << getName() << " attacks " << target << ", causing " << _ad << " points of damage!" << std::endl;
	std::cout << "ScavTrap " << getName() << " has " << _ep << " EP remain." << std::endl;
}

void	ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap " << getName() << " is now in Gate keeper mode." << std::endl;
}
