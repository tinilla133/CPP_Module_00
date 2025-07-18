/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvizcaya <fvizcaya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 11:59:20 by fvizcaya          #+#    #+#             */
/*   Updated: 2025/07/16 19:16:09 by fvizcaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include <sstream>
#include "Contact.hpp"
#include "utils.hpp"

#define NUM_CONTACTS 2
#define LINE_WIDTH 58
#define PROMPT "Enter a command [ ADD | SEARCH | EXIT ] > "
#define SUB_PROMPT "Enter the index register to display > "

class	PhoneBook {
	private:
		Contact  contacts[NUM_CONTACTS];
		int		 size;
		int		 index;
	public:
		PhoneBook(void);
		~PhoneBook();
		int		addContact(void);
        int		listContact(void);
		int		displayContact(void);
};

#endif