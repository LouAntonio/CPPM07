/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lantonio <lantonio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 13:35:12 by lantonio          #+#    #+#             */
/*   Updated: 2025/10/30 15:21:03 by lantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Array.hpp"

template <typename T>
Array<T>::Array() {
	_size = 0;
	arr = new T[_size];
}

template <typename T>
Array<T>::Array(unsigned int n) {
	_size = n;
	arr = new T[_size];
}

template <typename T>
Array<T>::Array(const Array &src) {
	this = src;
}

template <typename T>
Array<T> &Array<T>::operator=(const Array &src) {
	if (this != &src) {
		delete [] arr;
		_size = src._size;
		arr = new T[_size];
		for (unsigned int i = 0; i < _size; i++)
			arr[i] = src.arr[i];
	}
}

template <typename T>
Array<T>::~Array() { }

template <typename T>
int Array<T>::size() const {
	return _size;
}

template <typename T>
const char* Array<T>::OutOfRange::what() const throw() {
	return "index out of range!";
}
