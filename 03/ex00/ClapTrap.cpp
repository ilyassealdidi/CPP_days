/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialdidi <ialdidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/29 12:52:27 by ialdidi           #+#    #+#             */
/*   Updated: 2025/01/01 17:45:46 by ialdidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) {
	std::cout << "ClapTrap constructor called" << std::endl;
	this->name = name;
	hitPoints = 10;
	energyPoints = 10;
	attackDamage = 0;
}

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap destructor called" << std::endl;
}

void ClapTrap::print_attrs()
{
	std::cout << hitPoints << std::endl;	
	std::cout << energyPoints << std::endl;	
	std::cout << attackDamage << std::endl;	

}

void ClapTrap::attack(const std::string& target) {
	if (hitPoints == 0) {
		std::cout << "ClapTrap " << name << " is already dead" << std::endl;
	}
	else if (energyPoints == 0) {
		std::cout << "ClapTrap " << name << " has no energy points" << std::endl;
	}
	else {
		energyPoints--;
		std::cout << "ClapTrap " << name << " attacks " << target << ", causing " << attackDamage << " points of damage!" << std::endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount) {
	if (hitPoints == 0) {
		std::cout << "ClapTrap " << name << " is already dead" << std::endl;
		return ;
	}
	if (amount >= hitPoints)
		hitPoints = 0;
	else
		hitPoints -= amount;
	std::cout << "ClapTrap " << name << " takes " << amount << " damage" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (hitPoints == 0) {
		std::cout << "ClapTrap " << name << " is already dead" << std::endl;
	}
	else if (energyPoints == 0) {
		std::cout << "ClapTrap " << name << " has no energy points" << std::endl;
	}
	else if (hitPoints == 10) {
		std::cout << "ClapTrap " << name << " is already full life" << std::endl;
	}
	else {
		if (hitPoints + amount > 10)
			hitPoints = 10;
		else
			hitPoints += amount;
		std::cout << "ClapTrap " << name << " is repaired by " << amount << std::endl;
		energyPoints--;
	}
}