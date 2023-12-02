/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndesprez <ndesprez@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 17:24:29 by ndesprez          #+#    #+#             */
/*   Updated: 2023/12/02 04:37:40 by ndesprez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	this->n = 0;
}
PhoneBook::~PhoneBook(){}

int	PhoneBook::getN(void)
{
	return (this->n);
}

void	PhoneBook::addContact(void)
{
	static int	i;
	this->contacts[i % 8].initContact(i % 8);
	if (this->n < 8)
		this->n++;
	i++;
}

void	PhoneBook::display(void)
{
	std::cout << "_____________________________________________" << std::endl;
	std::cout << "|     Index|First name| Last name|  Nickname|" << std::endl;
	std::cout << "|__________|__________|__________|__________|" << std::endl;
	for (int i = 0; i < this->n; i++)
		this->contacts[i].displayLine();
	std::cout << "---------------------------------------------" << std::endl;
	std::cout << std::endl;
}
void	PhoneBook::searchContact(void)
{
	int		i;
	bool	b = false;
	this->display();
	while (!b)
	{
		std::cout << "Index >> " << std::flush;
		std::cin >> i;
		if (std::cin.good() && i >= 0 && i < this->n)
			b = true;
		else {
			std::cout << "Invalid." << std::endl;
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		}
	}
	this->contacts[i].displayCard();
}

void	PhoneBook::header(void)
{
	std::cout << "--- PHONEBOOK ---" << std::endl;
	std::cout << "'ADD'    : add a contact to the phonebook." << std::endl;
	std::cout << "'SEARCH' : search a contact in the phonebook." << std::endl;
	std::cout << "'EXIT'   : exit the phonebook." << std::endl;
	std::cout << "(obvious)" << std::endl;
	std::cout << std::endl;
}
