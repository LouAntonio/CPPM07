/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printer.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lantonio <lantonio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 13:01:06 by lantonio          #+#    #+#             */
/*   Updated: 2025/10/30 13:02:22 by lantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTER_HPP
#define PRINTER_HPP

#include <iostream>

template <typename A>
void print_arr(A const &value) {
	std::cout << "The value is " << value << std::endl;
}

#endif
