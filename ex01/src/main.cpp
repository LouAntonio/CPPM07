/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lantonio <lantonio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 11:31:30 by lantonio          #+#    #+#             */
/*   Updated: 2025/10/30 13:06:44 by lantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../includes/iter.hpp"
#include "../includes/printer.hpp"

int main(void)
{
	int			int_vet[5] = {12, 1, 42, 24, 88};
	std::string	strings[] = {"Lou", "Antonio", "LouAntonio", "Dala"};
	int			string_len = sizeof(strings) / sizeof(strings[0]);

	iter(int_vet, 5, print_arr);
	std::cout << "---" << std::endl;
	iter(strings, string_len, print_arr);
}
