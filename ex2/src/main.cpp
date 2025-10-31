/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lantonio <lantonio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 15:13:25 by lantonio          #+#    #+#             */
/*   Updated: 2025/10/31 12:21:26 by lantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Array.hpp"

int main()
{
	{
		try {
			Array<int> a;
			std::cout << "Size: " << a.size() << std::endl;
			std::cout << "---" << std::endl;
		} catch (std::exception &e) {
			std::cerr << "Error: " << e.what() << std::endl;
			std::cout << "---" << std::endl;
		}
	}
	{
		try {
			unsigned int i = 0;
			Array<std::string> words(5);

			words[0] = "Hello,";
			words[1] = "my";
			words[2] = "name";
			words[3] = "is";
			words[4] = "lantonio!";

			while (i < words.size())
				std::cout << words[i++] << " ";
			std::cout << std::endl;

			std::cout << words[12] << std::endl;
			std::cout << "---" << std::endl;
		} catch (std::exception &e) {
			std::cerr << "Error: " << e.what() << std::endl;
			std::cout << "---" << std::endl;
		}
	}
	{
		try {
			unsigned int i = 0, j = 0;
			Array<std::string> words(5);

			words[0] = "Hello,";
			words[1] = "my";
			words[2] = "name";
			words[3] = "is";
			words[4] = "lantonio!";

			Array<std::string> words_cpy = words;

			words[4] = "LouAntonio";

			while (i < words.size())
				std::cout << words[i++] << " ";
			std::cout << std::endl;

			while (j < words_cpy.size())
				std::cout << words_cpy[j++] << " ";
			std::cout << std::endl;

			std::cout << "---" << std::endl;
		} catch (std::exception &e) {
			std::cerr << "Error: " << e.what() << std::endl;
			std::cout << "---" << std::endl;
		}
	}
	return 0;
}
