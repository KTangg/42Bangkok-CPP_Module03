/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoolpra <spoolpra@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 14:34:04 by spoolpra          #+#    #+#             */
/*   Updated: 2022/05/06 14:47:55 by spoolpra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctime>
#include <cstdlib>
#include <iostream>
#include "ClapTrap.hpp"

int	main(void) {
	int			action;
	ClapTrap	armel("Armel");
	ClapTrap	vlad(armel);

	srand(time(NULL));
	vlad.setName("Vlad");

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
				std::cout << vlad.getName() << " do nothing this turn.";
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
}
