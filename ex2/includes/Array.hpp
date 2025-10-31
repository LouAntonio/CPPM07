/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lantonio <lantonio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 13:19:16 by lantonio          #+#    #+#             */
/*   Updated: 2025/10/31 12:24:14 by lantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <exception>

template <typename T> class Array {
	private:
		T				*arr;
		unsigned int	_size;
	public:
		Array();
		Array(unsigned int n);
		Array(const Array &src);
		Array &operator=(const Array &src);
		~Array();

		unsigned int	size() const;
		T &operator[](unsigned int index);
		const T &operator[](unsigned int index) const;
	
	class OutOfRange : public std::exception {
		virtual const char* what() const throw();
	};
};

#include "../src/Array.tpp"

#endif
