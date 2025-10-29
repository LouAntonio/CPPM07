/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lantonio <lantonio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 13:45:39 by lantonio          #+#    #+#             */
/*   Updated: 2025/10/29 13:33:45 by lantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/whatever.hpp"

int main(void)
{
	int a = 2;
	int b = 3;
	::swap(a, b);
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min(a, b) << std::endl;
	std::cout << "max( a, b ) = " << ::max(a, b) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min(c, d) << std::endl;
	std::cout << "max( c, d ) = " << ::max(c, d) << std::endl;

	std::cout << "\n\n--- *** ---" << std::endl;
	std::cout << "More Tests" << std::endl;
	std::cout << "--- *** ---" << std::endl;
	int	e = 12;
	int	f = 12;
	::swap(a, b);
	std::cout << "e = " << e << ", f = " << f << std::endl;
	std::cout << "min( e, f ) = " << ::min(e, f) << std::endl;
	std::cout << "max( e, f ) = " << ::max(e, f) << std::endl;

	std::cout << "\n\n--- *** ---" << std::endl;
	std::cout << "More Tests" << std::endl;
	std::cout << "--- *** ---" << std::endl;
	std::string	g = "Lou";
	std::string	h = "Antonio";
	::swap(g, h);
	std::cout << "g = " << g << ", h = " << h << std::endl;
	std::cout << "min(g, h ) = " << ::min(g, h) << std::endl;
	std::cout << "max(g, h ) = " << ::max(g, h) << std::endl;
	return 0;
}
