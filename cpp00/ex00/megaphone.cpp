/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgoffaux <sgoffaux@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 13:29:35 by sgoffaux          #+#    #+#             */
/*   Updated: 2021/10/28 14:08:15 by sgoffaux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(int argc, char **argv)
{
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		++argv;
		while (*argv)
		{
			std::string str(*argv);
			std::transform(str.begin(), str.end(), str.begin(), ::toupper);
			std::cout << str;
			argv++;
		}
		std::cout << std::endl;
	}
}
