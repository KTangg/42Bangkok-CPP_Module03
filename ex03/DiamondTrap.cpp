#include "DiamondTrap.hpp"

// Default Class Constructor
DiamondTrap::DiamondTrap(void)
{
	setName("Default_clap_name");
	_name = "Default";
	_hp = FragTrap::_hp;
	_ep = ScavTrap::getScavEp();
	_ad = FragTrap::_ad;
	std::cout << "Default Constructor Called: DiamondTrap(" << _name << ") created" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), ScavTrap(name + "_clap_name"), FragTrap(name + "_clap_name")
{
	this->_name = name;
	_hp = FragTrap::_hp;
	_ep = ScavTrap::getScavEp();
	_ad = FragTrap::_ad;
	std::cout << "String Constructor Called: DiamondTrap(" << _name << ") created" << std::endl;
}

// Copy Class Constructor
DiamondTrap::DiamondTrap(const DiamondTrap &src) : ClapTrap(), ScavTrap(), FragTrap()
{
	*this = src;
	std::cout << "Copy Constructor Called: DiamondTrap(" << _name << ") created" << std::endl;
}

// Class Deconstructor
DiamondTrap::~DiamondTrap(void)
{
	std::cout << "Deconstructor Called: DiamondTrap(" << _name << ") destroyed" << std::endl;
}

// Assign Operator Overlaod
DiamondTrap	&DiamondTrap::operator=(const DiamondTrap &rhs)
{
	// Make your Assignment here
	ClapTrap::_name = rhs.getName();
	_name = rhs.getDiaName();
	_hp = rhs.getHp();
	_ep = rhs.getEp();
	_ad = rhs.getAd();
	return (*this);
}

void	DiamondTrap::attack(const std::string &target)
{
	ScavTrap::attack(target);
}

std::string	DiamondTrap::getDiaName(void) const
{
	return (this->_name);
}

void	DiamondTrap::setDiaName(std::string name)
{
	this->_name = name;
	this->ClapTrap::_name = name + "_clap_name";
}

void	DiamondTrap::whoAmI(void)
{
	std::cout << ClapTrap::_name << " realise his name is " << _name << std::endl;
}
