/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndesprez <ndesprez@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 17:24:49 by ndesprez          #+#    #+#             */
/*   Updated: 2023/12/01 20:38:00 by ndesprez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(){}
Contact::~Contact(){}

void	Contact::setIndex(int index)
{
	this->index = index;
}

std::string	Contact::slurp(std::string s) const
{
	std::string	input = "";
	bool		b = false;
	while (!b)
	{
		std::cout << s << std::flush;
		std::getline(std::cin, input);
		if (std::cin.good() && !input.empty())
			b = true;
		else {
			std::cin.clear();
			std::cout << "Invalid." << std::endl;
		}
	}
	return (input);	
}

void	Contact::initContact(void)
{
	std::cin.ignore();
	this->firstName = this->slurp("First name >> ");
	this->lastName = this->slurp("Last name >> ");
	this->nickName = this->slurp("Nick name >> ");
	this->phoneNumber = this->slurp("Phone number >> ");
	this->secret = this->slurp("Darkest secret >> ");
	std::cout << std::endl;
}

std::string	Contact::shrink(std::string s, int i) const
{
	if (s.empty())
		return ("Unknown");
	if (s.length() > 10 && i)
		return (s.substr(0, 9) + ".");
	return (s);
}

void	Contact::displayLine()
{
	std::cout << "|" << std::setw(10) << this->index << std::flush;
	std::cout << "|" << std::setw(10) << this->shrink(this->firstName, 1) << std::flush;
	std::cout << "|" << std::setw(10) << this->shrink(this->lastName, 1) << std::flush;
	std::cout << "|" << std::setw(10) << this->shrink(this->nickName, 1) << std::flush;
	std::cout << "|" << std::endl;
}

void	Contact::displayCard()
{
	std::cout << "--- CONTACT " << this->index << " ---" << std::endl;
	std::cout << "First name     : " << this->shrink(this->firstName, 0) << std::endl;
	std::cout << "Last name      : " << this->shrink(this->lastName, 0) << std::endl;
	std::cout << "Nick name      : " << this->shrink(this->nickName, 0) << std::endl;
	std::cout << "Phone number   : " << this->shrink(this->phoneNumber, 0) << std::endl;
	std::cout << "Darkest secret : " << this->shrink(this->secret, 0) << std::endl;
	std::cout << std::endl;
}
