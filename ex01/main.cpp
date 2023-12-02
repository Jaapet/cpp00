/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndesprez <ndesprez@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 17:51:03 by ndesprez          #+#    #+#             */
/*   Updated: 2023/12/02 04:29:49 by ndesprez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>

int	main(void)
{
	PhoneBook phoneBook;
	std::string s = "";
	phoneBook.header();
	while (s.compare("EXIT"))
	{
		if (!s.compare("ADD"))
			phoneBook.addContact();
		else if (!s.compare("SEARCH") && phoneBook.getN())
			phoneBook.searchContact();
		std::cout << ">> ";
		std::cin >> s;
	}
	return (0);
}
