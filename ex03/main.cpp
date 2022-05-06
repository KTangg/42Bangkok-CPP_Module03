/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoolpra <spoolpra@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 14:34:04 by spoolpra          #+#    #+#             */
/*   Updated: 2022/05/06 21:10:16 by spoolpra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctime>
#include <cstdlib>
#include <iostream>
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

void	takeAction(ScavTrap &scav, FragTrap &frag, int action) {

	// Take action
	switch (action)
	{
		// Idle mode
		case 0:
			scav.guardGate();
			break;
		// Attack action
		case 1:
			scav.attack(frag.getName());
			frag.takeDamage(scav.getAd());
			break ;
		// Repair action
		case 2:
			scav.beRepaired(rand() % 100);
			break ;
	}
	std::cout << std::endl;
}

void	takeAction(FragTrap &frag, ScavTrap &scav, int action) {

	// Take action
	switch (action)
	{
		// Idle mode
		case 0:
			frag.highFivesGuys();
			break;
		// Attack action
		case 1:
			frag.attack(scav.getName());
			scav.takeDamage(frag.getAd());
			break ;
		// Repair action
		case 2:
			frag.beRepaired(rand() % 100);
			break ;
	}
	std::cout << std::endl;
}

void	takeAction(DiamondTrap &atk, DiamondTrap &def) {

	// Take action
	switch (rand() % 3)
	{
		// Idle mode
		case 0:
			switch (rand() % 3)
			{
				case 0:
					atk.guardGate();
					break ;
				case 1:
					atk.highFivesGuys();
					break ;
				case 2:
					atk.whoAmI();
					break ;
			}
			break;
		// Attack action
		case 1:
			atk.attack(def.getName());
			def.takeDamage(atk.getAd());
			break ;
		// Repair action
		case 2:
			atk.beRepaired(rand() % 50);
			break ;
	}
	std::cout << std::endl;
}

int	main(void) {

	DiamondTrap	spoolpra("spoolpra");
	DiamondTrap armel(spoolpra);

	armel.setDiaName("Armel");
	srand(time(NULL));
	for (int i = 1; i < 21; i++) {
		std::cout << std::endl;
		std::cout << "Turn " << i << std::endl;
		std::cout << "______________________________________________" << std::endl;
		std::cout << std::endl;
		// Armel Taking Action
		takeAction(armel, spoolpra);
		// Vlad Taking Action
		takeAction(spoolpra, armel);
		std::cout << std::endl;
	}
}
