/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialdidi <ialdidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/28 22:30:35 by ialdidi           #+#    #+#             */
/*   Updated: 2025/01/05 21:08:45 by ialdidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap clapTrap("ilyasse");
	
	clapTrap.attack("ezahiri");
	clapTrap.takeDamage(5);
	clapTrap.beRepaired(5);

	return 0;
}