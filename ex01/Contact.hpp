/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndesprez <ndesprez@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 17:25:00 by ndesprez          #+#    #+#             */
/*   Updated: 2023/12/01 20:19:26 by ndesprez         ###   ########.fr       */
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
	std::string	shrink(std::string s, int i) const;
public:
	Contact();
	~Contact();
	void	initContact(void);
	void	setIndex(int index);
	void	displayLine(void);
	void	displayCard(void);
};

#endif