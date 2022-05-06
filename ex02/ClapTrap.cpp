#include "ClapTrap.hpp"

// Default Class Constructor
ClapTrap::ClapTrap(void) : _hp(10), _ep(10), _ad(0), _name("Default")
{
	std::cout << "Default Constructor Called: ClapTrap(" << _name << ") created" << std::endl;
}

// String Class Constructor
ClapTrap::ClapTrap(std::string str) : _hp(10), _ep(10), _ad(0), _name(str)
{
	std::cout << "String Constructor Called: ClapTrap(" << _name << ") created" << std::endl;
}

// Copy Class Constructor
ClapTrap::ClapTrap(const ClapTrap &src)
{
	*this = src;
	std::cout << "Copy Constructor Called: ClapTrap(" << _name << ") created" << std::endl;
}

// Class Deconstructor
ClapTrap::~ClapTrap(void)
{
	std::cout << "Deconstructor Called: ClapTrap(" << _name << ") destroyed" << std::endl;
}

// Assign Operator Overlaod
ClapTrap	&ClapTrap::operator=(const ClapTrap &rhs)
{
	// Make your Assignment here
	_name = rhs.getName();
	_hp = rhs.getHp();
	_ep = rhs.getEp();
	_ad = rhs.getAd();
	return (*this);
}

// Get Function Part

std::string	ClapTrap::getName(void) const
{
	return (_name);
}

int	ClapTrap::getHp(void) const
{
	return (_hp);
}

int	ClapTrap::getEp(void) const
{
	return (_ep);
}

int	ClapTrap::getAd(void) const
{
	return (_ad);
}

// Set Function Part

void	ClapTrap::setName(std::string name)
{
	_name = name;
}

void	ClapTrap::setHp(int hp)
{
	_hp = hp;
}

void	ClapTrap::setEp(int ep)
{
	_ep = ep;
}

void	ClapTrap::setAd(int ad)
{
	_ad = ad;
}

// Member Function Part

void	ClapTrap::attack(const std::string &target)
{
	if (_ep < 1)
	{
		std::cout << "ClapTrap " << _name << " doesn't has enough energy!" << std::endl;
		return ;
	}
	_ep--;
	std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _ad << " points of damage!" << std::endl;
	std::cout << "ClapTrap " << _name << " has " << _ep << " EP remain." << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	int	dmg = amount;

	if (_hp < (int) amount)
		dmg = _hp;
	_hp = _hp - dmg;
	std::cout << "ClapTrap " << _name << " take " << dmg << " damages!" << std::endl;
	std::cout << "ClapTrap " << _name << " has " << _hp << " HP remain." << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (_ep < 1)
	{
		std::cout << "ClapTrap " << _name << " doesn't has enough energy!" << std::endl;
		return ;
	}
	_ep--;
	_hp += amount;
	std::cout << "ClapTrap " << _name << " recover " << amount << " HP!" << std::endl;
	std::cout << "ClapTrap " << _name << " has " << _hp << " HP remain." << std::endl;
	std::cout << "ClapTrap " << _name << " has " << _ep << " EP remain." << std::endl;
}
