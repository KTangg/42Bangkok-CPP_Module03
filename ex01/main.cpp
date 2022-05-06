/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoolpra <spoolpra@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 14:34:04 by spoolpra          #+#    #+#             */
/*   Updated: 2022/05/06 15:45:57 by spoolpra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctime>
#include <cstdlib>
#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void) {
	int			action;
	ClapTrap	armel("Armel");
	ScavTrap	vlad("Vlad");

	srand(time(NULL));

	for (int i = 1; i < 21; i++) {
		std::cout << std::endl;
		std::cout << "Turn " << i << std::endl;
		std::cout << "______________________________________________" << std::endl;
		std::cout << std::endl;
		action = rand() % 3;
		switch (action)
		{
			case 0:
				std::cout << armel.getName() << " do nothing this turn.";
				break ;
			case 1:
				armel.attack(vlad.getName());
				vlad.takeDamage(armel.getAd());
				break ;
			case 2:
				armel.beRepaired(rand() % 5);
				break ;
		}
		std::cout << std::endl;
		action = rand() % 3;
		switch (action)
		{
			case 0:
				vlad.guardGate();
				break ;
			case 1:
				vlad.attack(armel.getName());
				armel.takeDamage(vlad.getAd());
				break ;
			case 2:
				vlad.beRepaired(rand() % 5);
				break ;
		}
		std::cout << std::endl;
	}
	std::cout << std::endl;
	ScavTrap vladClone(vlad);
	vladClone.setName("Vlad Clone");
	vladClone.attack(vlad.getName());
	vlad.takeDamage(vladClone.getAd());
	vladClone.beRepaired(42);
	vladClone.guardGate();
	std::cout << std::endl;
}
