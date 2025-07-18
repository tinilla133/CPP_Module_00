/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvizcaya <fvizcaya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 11:58:38 by fvizcaya          #+#    #+#             */
/*   Updated: 2025/07/16 19:15:40 by fvizcaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main(void)
{
	
	PhoneBook 	myPhoneBook;
	std::string	userInput;

	while (42) {
		std::cout << PROMPT;
		getline(std::cin, userInput);
		if (userInput == "ADD") {
			if (myPhoneBook.addContact() == -1) {
				return (0);
			}
		}
		else if (userInput == "SEARCH") {
			if (myPhoneBook.listContact() == -1) {
				return (0);
			}
		}
		else if (std::cin.eof() || std::cin.fail()) {
			return (0);
		}
		else if (userInput.at(0) == '\0') {
			return (0);
		}
		else if (userInput == "EXIT") {
			return (0);
		}
		else if (userInput != "ADD" && userInput != "SEARCH")
		{
			std::cout << "Invalid command." << std::endl;
		}
	}
	return (0);
	
}
