/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoolpra <spoolpra@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 14:34:04 by spoolpra          #+#    #+#             */
/*   Updated: 2022/05/06 18:48:15 by spoolpra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctime>
#include <cstdlib>
#include <iostream>
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

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

int	main(void) {
	ScavTrap	armel("Armel");
	FragTrap	vlad(FragTrap("vlad"));

	srand(time(NULL));
	for (int i = 1; i < 21; i++) {
		std::cout << std::endl;
		std::cout << "Turn " << i << std::endl;
		std::cout << "______________________________________________" << std::endl;
		std::cout << std::endl;
		// Armel Taking Action
		takeAction(armel, vlad, rand() % 3);
		// Vlad Taking Action
		takeAction(vlad, armel, rand() % 3);
		std::cout << std::endl;
	}
}
