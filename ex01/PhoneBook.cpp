/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvizcaya <fvizcaya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 12:06:19 by fvizcaya          #+#    #+#             */
/*   Updated: 2025/07/16 19:39:05 by fvizcaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
    size = 0;
    index = 0;
}

PhoneBook::~PhoneBook()
{
    
}

int    PhoneBook::addContact(void)
{
    
	std::string	userEntry;

	if (size == NUM_CONTACTS)
		std::cout << "Warning: overwriting info about " << contacts[index].getFirstName() << std::endl;
    Contact myNewContact;
    std::string firstName = getUserEntry("Enter first name: ");
	if (firstName.empty()) {
		return (-1);
	}
    std::string lastName = getUserEntry("Enter last name: ");
	if (lastName.empty()) {
		return (-1);
	}
    std::string nickName = getUserEntry("Enter nickname: ");
	if (nickName.empty()) {
		return (-1);
	}
    std::string phoneNumber = getUserEntry("Enter phone number: ");
	if (phoneNumber.empty()) {
		return (-1);
	}
    std::string darkestSecret = getUserEntry("Enter darkest secret: ");
	if (darkestSecret.empty()) {
		return (-1);
	}
    contacts[index].newContact(firstName, lastName, nickName, phoneNumber, darkestSecret);
    index = (index + 1) % NUM_CONTACTS;
    if (size < NUM_CONTACTS) {
        size++;
    }
    else {
        index = 0;
    }
    return (0);
}

int    PhoneBook::listContact(void)
{
    
    if (!this->size) 
    {
        std::cout << "There are no registers to show." << std::endl;
        return (0);
    }
    std::cout << "ID" << " | ";
    std::cout << trimString("First name", 10) << " | ";
    std::cout << trimString("Last name", 10) << " | ";
    std::cout << trimString("Nickname", 10) << " | ";
    std::cout << trimString("Phone number", 12) << " |" << std::endl;
    int i = 0;
    while (i < 58) {
        std::cout << "-";
        i++;
    }
    std::cout << std::endl; 
    i = 0;
    while (i < this->size)
    {
        std::cout << " " << i + 1 << " | "; 
        std::cout << trimString(contacts[i].getFirstName(), 10) << " | ";
        std::cout << trimString(contacts[i].getLastName(), 10) << " | ";
        std::cout << trimString(contacts[i].getNickname(), 10) << " | ";
        std::cout << "  " << trimString(contacts[i].getPhoneNumber(), 10) << " |" << std::endl;
        i++;
    }
    return (this->displayContact());
    
}

int    PhoneBook::displayContact(void)
{
    
    std::string userInput;

    while (42)
	{
		std::cout << SUB_PROMPT;
		getline(std::cin, userInput);
        if (std::cin.eof() || std::cin.fail() || userInput.at(0) == '\0') {
			return (-1);
        }
        int inputAux;
        std::stringstream strStream(userInput);
        strStream >> inputAux;
		if (inputAux < 1 || inputAux > size) {
			std::cout << "Please, introduce a number between 1 and " << size << std::endl;
        }
		else {
            std::cout << "First name: " << contacts[inputAux - 1].getFirstName() << std::endl;
            std::cout << "Last name: " << contacts[inputAux - 1].getLastName() << std::endl;
            std::cout << "Nickname: " << contacts[inputAux - 1].getNickname() << std::endl;
            std::cout << "Phone number: " << contacts[inputAux - 1].getFirstName() << std::endl;
            std::cout << "Darkest secret: " << contacts[inputAux - 1].getDarkestSecret() << std::endl;
            return (0);
        }
	}
    return (0);
    
}