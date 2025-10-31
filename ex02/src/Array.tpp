/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lantonio <lantonio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 13:35:12 by lantonio          #+#    #+#             */
/*   Updated: 2025/10/31 12:58:59 by lantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Array.hpp"

template <typename T>
Array<T>::Array() : arr(NULL), _size(0) { }

template <typename T>
Array<T>::Array(unsigned int n) {
	_size = n;
	arr = new T[_size];
}

template <typename T>
Array<T>::Array(const Array &src) : arr(NULL), _size(0) {
	*this = src;
}

template <typename T>
Array<T> &Array<T>::operator=(const Array<T> &src) {
    if (this != &src) {
        delete this->arr;
		this->_size = src._size;
		if (this->_size > 0)
		{
			this->arr = new T[this->_size];
			for (unsigned int i = 0; i < this->_size; i++)
				this->arr[i] = src.arr[i];
		} else { this->arr = NULL; }
    }
    return *this;
}

template <typename T>
Array<T>::~Array() { delete[] arr; }

template <typename T>
unsigned int Array<T>::size() const {
	return _size;
}

template <typename T>
const char* Array<T>::OutOfRange::what() const throw() {
	return "index out of range!";
}

template <typename T>
T &Array<T>::operator[](unsigned int index) {
	if (index >= _size)
		throw Array<T>::OutOfRange();
	return arr[index];
}

template <typename T>
const T &Array<T>::operator[](unsigned int index) const {
	if (index >= _size)
		throw Array<T>::OutOfRange();
	return arr[index];
}
