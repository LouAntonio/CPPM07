/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lantonio <lantonio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 13:35:12 by lantonio          #+#    #+#             */
/*   Updated: 2025/10/31 10:59:29 by lantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Array.hpp"

template <typename T>
Array<T>::Array() {
	_size = 0;
	arr = new T[_size];
	//std::cout << "Array default constructor called!" << std::endl;
}

template <typename T>
Array<T>::Array(unsigned int n) {
	_size = n;
	arr = new T[_size];
	//std::cout << "Array parameterized constructor called!" << std::endl;
}

template <typename T>
Array<T>::Array(const Array &src) {
	this = src;
	//std::cout << "Array cpy constructor called!" << std::endl;
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
	//std::cout << "Array assignment operator called!" << std::endl;
	return *this;
}

template <typename T>
Array<T>::~Array() {  }

template <typename T>
int Array<T>::size() const {
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
