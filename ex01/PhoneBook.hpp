/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndesprez <ndesprez@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 17:24:40 by ndesprez          #+#    #+#             */
/*   Updated: 2023/12/02 04:28:40 by ndesprez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include "Contact.hpp"
#include <limits>

class PhoneBook
{
private:
	Contact contacts[8];
	int		n;
	void	display(void);
public:
	PhoneBook();
	~PhoneBook();
	void	addContact(void);
	void	searchContact(void);
	void	header(void);
	int		getN(void);
};

#endif
