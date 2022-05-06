#include "FragTrap.hpp"

// Default Class Constructor
FragTrap::FragTrap(void) : ClapTrap("Default")
{
	_hp = 100;
	_ep = 100;
	_ad = 30;
	std::cout << "Default Constructor Called: FragTrap(" << getName() << ") created" << std::endl;
}

// String Class Constructor
FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	_hp = 100;
	_ep = 100;
	_ad = 30;
	std::cout << "String Constructor Called: FragTrap(" << getName() << ") created" << std::endl;
}

// Copy Class Constructor
FragTrap::FragTrap(const FragTrap &src) : ClapTrap(src)
{
	*this = src;
	std::cout << "Copy Constructor Called: FragTrap(" << getName() << ") created" << std::endl;
}

// Class Deconstructor
FragTrap::~FragTrap(void)
{
	std::cout << "Deconstructor Called: FragTrap(" << getName() << ") destroyed" << std::endl;
}

// Assign Operator Overlaod
FragTrap	&FragTrap::operator=(const FragTrap &rhs)
{
	// Make your Assignment here
	_name = rhs.getName();
	_hp = rhs.getHp();
	_ep = rhs.getEp();
	_ad = rhs.getAd();
	return (*this);
}

void	FragTrap::attack(const std::string &target)
{
	if (_ep < 1)
	{
		std::cout << "FragTrap " << getName() << " doesn't has enough energy!" << std::endl;
		return ;
	}
	_ep--;
	std::cout << "FragTrap " << getName() << " attacks " << target << ", causing " << _ad << " points of damage!" << std::endl;
	std::cout << "FragTrap " << getName() << " has " << _ep << " EP remain." << std::endl;
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "Somebody please give " << getName() << " a hand" << std::endl;
}
