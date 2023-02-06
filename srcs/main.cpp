/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mriant <mriant@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 13:32:34 by mriant            #+#    #+#             */
/*   Updated: 2023/02/06 11:33:29 by mriant           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector> // A ENLEVER !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

#include "containers.h"
#include "colors.h"

int main(void)
{

	std::cout << BYEL << "<<< Stack >>>" << RES << std::endl;
	std::cout << std::endl;

	std::vector<std::string> testStringVector(10, "hello");
	std::vector<int> testIntVector(10, 2);


	std::cout << BCYN << "<< Constructors and Capacity >>" << RES << std::endl;
	std::cout << std::endl;

	NSP::stack<int, std::vector<int> > intStack; // A MODIFIER !!!!!!!!!!!!!!!!!
	NSP::stack<int, std::vector<int> > intStack2(testIntVector); // A MODIFIER !
	NSP::stack<std::string, std::vector<std::string> > stringStack; // A MODIFIER !
	NSP::stack<std::string, std::vector<std::string> > stringStack2(testStringVector); // A MODIFIER !

	std::cout << "Empty int stack is empty: " << std::boolalpha 
			  << intStack.empty() << " and size is: " << intStack.size()
			  << std::endl;
	std::cout << "Empty string stack is empty: " << stringStack.empty()
			  << " and size is: " << stringStack.size() << std::endl;
	std::cout << "Not empty int stack is empty: " << intStack2.empty()
			  << " and size is: " << intStack2.size() << std::endl;
	std::cout << "Not empty string stack is empty: " << stringStack2.empty()
			  << " and size is: " << stringStack2.size() << std::endl;

	std::cout << std::endl;
	std::cout << BCYN << "<< Element access >>" << RES << std::endl;
	std::cout << std::endl;

	// std::cout << "Empty int stack: top: " << intStack.top() << std::endl;
	// std::cout << "Empty string stack: top: " << stringStack.top() << std::endl;
	std::cout << "Not empty int stack: top: " << intStack2.top() << std::endl;
	std::cout << "Not empty string stack: top: " << stringStack2.top()
			  << std::endl;
}