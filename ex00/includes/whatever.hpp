/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lantonio <lantonio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 13:39:12 by lantonio          #+#    #+#             */
/*   Updated: 2025/10/29 13:22:49 by lantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SWAP_HPP
#define SWAP_HPP

#include <iostream>

template <typename T>
void swap(T &a, T &b) {
	T c = a;
	a = b;
	b = c;
}

template <typename T>
T min(T a, T b)
{
	return a < b ? a : b;
}

template <typename T>
T max(T a, T b)
{
	return a > b ? a : b;
}

#endif
