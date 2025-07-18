/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvizcaya <fvizcaya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 11:37:15 by fvizcaya          #+#    #+#             */
/*   Updated: 2025/05/01 11:43:44 by fvizcaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int argc, char **argv)
{
	int		i = 0;
	int		j;

	if (argc < 2)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	argv++;
	while (argv[i])
	{
        j = 0;
        while (argv[i][j])
        {
			std::cout << (char)std::toupper(argv[i][j]);
            j++;
        }
		i++;
	}
	std::cout << std::endl;
	return (0);
}