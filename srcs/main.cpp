/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mriant <mriant@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 13:32:34 by mriant            #+#    #+#             */
/*   Updated: 2023/02/08 16:15:56 by mriant           ###   ########.fr       */
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

	std::vector<std::string> testStringVector(10, "hello");// A MODIFIER !!!!!!!!!!!!!!!!!
	std::vector<std::string> bigStringVector(1, "efg");// A MODIFIER !!!!!!!!!!!!!!!!!
	std::vector<std::string> littleStringVector(1, "abc");// A MODIFIER !!!!!!!!!!!!!!!!!

	std::vector<int> testIntVector(10, 2);// A MODIFIER !!!!!!!!!!!!!!!!!
	std::vector<int> bigIntVector(1, 42);// A MODIFIER !!!!!!!!!!!!!!!!!
	std::vector<int> littleIntVector(1, 3);// A MODIFIER !!!!!!!!!!!!!!!!!

	std::cout << BCYN << "<< Constructors and Capacity >>" << RES << std::endl;
	std::cout << std::endl;

	NSP::stack<int, std::vector<int> > intStack; // A MODIFIER !!!!!!!!!!!!!!!!!
	NSP::stack<int, std::vector<int> > intStack2(testIntVector); // A MODIFIER !
	NSP::stack<int, std::vector<int> > const constIntStack(testIntVector); // A MODIFIER !

	NSP::stack<std::string, std::vector<std::string> > stringStack; // A MODIFIER !
	NSP::stack<std::string, std::vector<std::string> > stringStack2(testStringVector); // A MODIFIER !
	NSP::stack<std::string, std::vector<std::string> > const constStringStack(testStringVector); // A MODIFIER !

	std::cout << "Empty int stack is empty: " << std::boolalpha 
			  << intStack.empty() << " and size is: " << intStack.size()
			  << std::endl;
	std::cout << "Empty string stack is empty: " << stringStack.empty()
			  << " and size is: " << stringStack.size() << std::endl;
	std::cout << "Not empty int stack is empty: " << intStack2.empty()
			  << " and size is: " << intStack2.size() << std::endl;
	std::cout << "Not empty const int stack is empty: " << constIntStack.empty()
			  << " and size is: " << constIntStack.size() << std::endl;
	std::cout << "Not empty const string stack is empty: "
			  << constStringStack.empty() << " and size is: "
			  << constStringStack.size() << std::endl;

	std::cout << std::endl;
	std::cout << BCYN << "<< Element access >>" << RES << std::endl;
	std::cout << std::endl;

	// std::cout << "Empty int stack: top: " << intStack.top() << std::endl;
	// std::cout << "Empty string stack: top: " << stringStack.top() << std::endl;
	std::cout << "Not empty int stack: top: " << intStack2.top() << std::endl;
	std::cout << "Not empty const int stack: top: " << constIntStack.top()
			  << std::endl;
	std::cout << "Not empty string stack: top: " << stringStack2.top()
			  << std::endl;
	std::cout << "Not empty const string stack: top: " << constStringStack.top()
			  << std::endl;

	std::cout << std::endl;
	std::cout << BCYN << "<< Modifiers >>" << RES << std::endl;
	std::cout << std::endl;

	std::cout << CYN << "< Push >" << RES << std::endl;
	std::cout << std::endl;

	intStack.push(42);
	intStack2.push(42);
	// constIntStack.push(42);
	stringStack.push("pouet");
	stringStack2.push("pouet");
	// constStringStack.push("pouet");
	std::cout << "Size 1 int stack is empty: " << intStack.empty()
			  << ", size is: " << intStack.size() << " and top is: "
			  << intStack.top() << std::endl;
	std::cout << "Size 11 int stack is empty: " << intStack2.empty()
			  << ", size is: " << intStack2.size() << " and top is: "
			  << intStack2.top() << std::endl;
	std::cout << "Size 1 string stack is empty: " << stringStack.empty()
			  << ", size is: " << stringStack.size() << " and top is: "
			  << stringStack.top() << std::endl;
	std::cout << "Size 11 string stack is empty: " << stringStack2.empty()
			  << ", size is: " << stringStack2.size() << " and top is: "
			  << stringStack2.top() << std::endl;

	std::cout << std::endl;
	std::cout << CYN << "< Pop >" << RES << std::endl;
	std::cout << std::endl;

	intStack.pop();
	intStack2.pop();
	// constIntStack.pop();
	stringStack.pop();
	stringStack2.pop();
	// constStringStack.pop();
	std::cout << "Empty int stack is empty: " << intStack.empty()
			  << ", size is: " << intStack.size() << std::endl;
	std::cout << "Size 10 int stack is empty: " << intStack2.empty()
			  << ", size is: " << intStack2.size() << " and top is: "
			  << intStack2.top() << std::endl;
	std::cout << "Empty string stack is empty: " << stringStack.empty()
			  << ", size is: " << stringStack.size() << std::endl;
	std::cout << "Size 10 string stack is empty: " << stringStack2.empty()
			  << ", size is: " << stringStack2.size() << " and top is: "
			  << stringStack2.top() << std::endl;

	std::cout << std::endl;
	std::cout << BCYN << "<< Non member operators >>" << RES << std::endl;
	std::cout << std::endl;


	NSP::stack<int, std::vector<int> > littleIntStack(littleIntVector);// A MODIFIER !!!!!!!!!!!!!!!!!
	NSP::stack<int, std::vector<int> > bigIntStack(bigIntVector);// A MODIFIER !!!!!!!!!!!!!!!!!
	NSP::stack<int, std::vector<int> > copyIntStack(intStack2);// A MODIFIER !!!!!!!!!!!!!!!!!
	NSP::stack<std::string, std::vector<std::string> > littleStringStack(littleStringVector);// A MODIFIER !!!!!!!!!!!!!!!!!
	NSP::stack<std::string, std::vector<std::string> > bigStringStack(bigStringVector);// A MODIFIER !!!!!!!!!!!!!!!!!
	NSP::stack<std::string, std::vector<std::string> > copyStringStack(stringStack2);// A MODIFIER !!!!!!!!!!!!!!!!!

	std::cout << "Little int stack and big int stack: ==: "
			  << (littleIntStack == bigIntStack) << " !=: "
			  << (littleIntStack != bigIntStack) << std::endl;
	std::cout << "Int stack and copy: ==: "
			  << (intStack2 == copyIntStack) << " !=: "
			  << (intStack2 != copyIntStack) << std::endl;
	std::cout << "Little string stack and big string stack: ==: "
			  << (littleStringStack == bigStringStack) << " !=: "
			  << (littleStringStack != bigStringStack) << std::endl;
	std::cout << "String stack and copy: ==: "
			  << (stringStack2 == copyStringStack) << " !=: "
			  << (stringStack2 != copyStringStack) << std::endl;
}