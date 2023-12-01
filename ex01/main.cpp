/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndesprez <ndesprez@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 17:51:03 by ndesprez          #+#    #+#             */
/*   Updated: 2023/12/01 20:28:46 by ndesprez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iostream>

int	main(void)
{
	Contact	contact;
	
	contact.initContact();
	contact.displayLine();
	contact.displayCard();
	return (0);
}