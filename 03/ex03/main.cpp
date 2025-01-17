/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialdidi <ialdidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/28 22:30:35 by ialdidi           #+#    #+#             */
/*   Updated: 2025/01/19 10:58:36 by ialdidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main()
{
	DiamondTrap	Blitz("Blitz");
	ScavTrap	Omega("Omega");
	ScavTrap	Kronos("Kronos");
	FragTrap	Piper("Piper");

	
	Omega.attack("Kronos");
	Kronos.takeDamage(20);
	Kronos.beRepaired(15);
	Kronos.attack("Omega");
	Omega.takeDamage(20);
	Omega.beRepaired(26);
	Omega.guardGate();
	Piper.attack("Kronos");
	Kronos.takeDamage(30);
	Piper.highFivesGuys();
	Blitz.attack("Omega");
	Blitz.whoAmI();
	return 0;
}