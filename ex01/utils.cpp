/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvizcaya <fvizcaya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 19:48:19 by fvizcaya          #+#    #+#             */
/*   Updated: 2025/05/16 23:24:16 by fvizcaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.hpp"

std::string  getUserEntry(std::string userPrompt)
{
    
    std::string userEntry;
    while (userEntry.empty()) {
        std::cout << userPrompt;
        std::getline(std::cin, userEntry);
		if (std::cin.eof() || std::cin.fail()) {
    		break;
		}
	}
    return (userEntry);
    
}

int firstNoSpcPosition(std::string str)
{

    size_t i = 0;
    while (i < str.length() && str.at(i) == ' ') {
        i++;
    }
    return (i);
    
}

int lastNoSpcPosition(std::string str)
{
    
    int i = str.length();
    while (i > 0 && str.at(i - 1) == ' ') {
        i--;
    }
    return (i);
    
}

std::string trimString(std::string str, int length)
{

    std::string auxStr;
    int first = firstNoSpcPosition(str);
    int last = lastNoSpcPosition(str);
    auxStr = str.substr(first, last);
    if (auxStr.length() < (size_t) length)
        auxStr.insert(0, length - auxStr.length(), ' ');
    return (auxStr.substr(0, length));
    
}
