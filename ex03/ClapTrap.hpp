#ifndef __CLAPTRAP_HPP__
# define __CLAPTRAP_HPP__

#include <iostream>

class ClapTrap
{
	public:
		// Default Class Constructor
		ClapTrap(void);
		// String parameter Class Constructor
		ClapTrap(std::string str);
		// Copy Class Constructor
		ClapTrap(const ClapTrap &src);
		// Class Deconstructor
		virtual	~ClapTrap(void);

		// Assign operator overload
		ClapTrap	&operator=(const ClapTrap &rhs);

		// Function member part
		void		attack(const std::string &target);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int anount);

		// Get && Set Attributes Function
		std::string	getName(void) const;
		int			getHp(void) const;
		int			getEp(void) const;
		int			getAd(void) const;
		void		setName(std::string str);
		void		setHp(int hp);
		void		setEp(int ep);
		void		setAd(int ad);

	protected:
		std::string	_name;
		int			_hp;
		int			_ep;
		int			_ad;

	private:
};

#endif // **************************************************** __CLAPTRAP_HPP__ //
