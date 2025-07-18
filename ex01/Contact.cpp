/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvizcaya <fvizcaya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 13:59:44 by fvizcaya          #+#    #+#             */
/*   Updated: 2025/07/16 19:39:45 by fvizcaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"


Contact::Contact(void)
{

}

Contact::~Contact()
{
    
}

void Contact::newContact(std::string firstName, std::string lastName, std::string nickName, std::string phoneNumber, std::string darkestSecret)
{

    this->firstName = firstName;
    this->lastName = lastName;
    this->nickName = nickName;
    this->phoneNumber = phoneNumber;
    this->darkestSecret = darkestSecret;

}

std::string Contact::getFirstName(void)
{

    return (firstName);

}

std::string Contact::getLastName(void)
{

	return (lastName);    

}

std::string Contact::getNickname(void)
{

	return (nickName);

}

std::string Contact::getPhoneNumber(void)
{

	return (phoneNumber);

}

std::string Contact::getDarkestSecret(void)
{

	return (darkestSecret);

}

