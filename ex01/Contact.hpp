/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndesprez <ndesprez@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 17:25:00 by ndesprez          #+#    #+#             */
/*   Updated: 2023/12/02 04:23:59 by ndesprez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H

#include <iostream>
#include <iomanip>

class Contact
{
private:
	std::string	firstName;
	std::string	lastName;
	std::string	nickName;
	std::string	phoneNumber;
	std::string	secret;
	int			index;
	std::string	slurp(std::string s) const;
	std::string	shrink(std::string s) const;
public:
	Contact();
	~Contact();
	void	initContact(int i);
	void	displayLine(void);
	void	displayCard(void);
};

#endif