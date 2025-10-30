/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lantonio <lantonio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 13:35:12 by lantonio          #+#    #+#             */
/*   Updated: 2025/10/30 15:00:12 by lantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Array.hpp"

template <typename T>
Array<T>::Array() {
	size = 0;
	arr = new *arr;
}

template <typename T>
Array<T>::Array(unsigned int n) {
	size = n;
	arr = new *arr[size];
}

template <typename T>
Array<T>::Array(const Array &src) {
	this = src;
}

template <typename T>
Array<T> &Array<T>::operator=(const Array &src) {
	if (this != &src) {
		delete [] arr;
		size = src.size;
		arr = new T[size];
		for (unsigned int i = 0; i < size; i++)
			arr[i] = src.arr[i];
	}
}

template <typename T>
Array<T>::~Array() { }

template <typename T>
int Array<T>::size() const {
	return size;
}
