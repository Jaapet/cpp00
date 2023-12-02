/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndesprez <ndesprez@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 17:24:49 by ndesprez          #+#    #+#             */
/*   Updated: 2023/12/02 04:25:47 by ndesprez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(){}
Contact::~Contact(){}

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

void	Contact::initContact(int i)
{
	std::cout << std::endl;
	this->index = i;
	std::cin.ignore();
	this->firstName = this->slurp("First name     >> ");
	this->lastName = this->slurp("Last name      >> ");
	this->nickName = this->slurp("Nick name      >> ");
	this->phoneNumber = this->slurp("Phone number   >> ");
	this->secret = this->slurp("Darkest secret >> ");
	std::cout << std::endl;
}

std::string	Contact::shrink(std::string s) const
{
	if (s.length() > 10)
		return (s.substr(0, 9) + ".");
	return (s);
}

void	Contact::displayLine()
{
	std::cout << "|" << std::setw(10) << this->index << std::flush;
	std::cout << "|" << std::setw(10) << this->shrink(this->firstName) << std::flush;
	std::cout << "|" << std::setw(10) << this->shrink(this->lastName) << std::flush;
	std::cout << "|" << std::setw(10) << this->shrink(this->nickName) << std::flush;
	std::cout << "|" << std::endl;
}

void	Contact::displayCard()
{
	std::cout << std::endl;
	std::cout << "--- CONTACT " << this->index << " ---" << std::endl;
	std::cout << "First name     : " << this->firstName << std::endl;
	std::cout << "Last name      : " << this->lastName << std::endl;
	std::cout << "Nick name      : " << this->nickName << std::endl;
	std::cout << "Phone number   : " << this->phoneNumber << std::endl;
	std::cout << "Darkest secret : " << this->secret << std::endl;
	std::cout << std::endl;
}
