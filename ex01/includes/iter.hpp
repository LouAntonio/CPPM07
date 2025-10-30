/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lantonio <lantonio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 09:43:02 by lantonio          #+#    #+#             */
/*   Updated: 2025/10/30 11:30:34 by lantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename A, typename B>
void iter(A *arr, const int len, B *func) {
	int	i = -1;
	while (++i < len)
		fun(arr[i]);
}

#endif
