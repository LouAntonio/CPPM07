/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printer.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lantonio <lantonio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 13:01:06 by lantonio          #+#    #+#             */
/*   Updated: 2025/10/30 13:16:57 by lantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTER_HPP
#define PRINTER_HPP

#include <iostream>

template <typename A>
void print_arr(A const &value) {
	std::cout << "The value is " << value << std::endl;
}

template <typename A>
void concat_one(A &value) {
	std::cout << "The result is " << value << "1" << std::endl;
}

#endif
