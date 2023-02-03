/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mriant <mriant@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 13:32:34 by mriant            #+#    #+#             */
/*   Updated: 2023/02/03 16:15:20 by mriant           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector> // A ENLEVER !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

#include "containers.h"

int main(void)
{
	std::vector<std::string> testStringVector(10, "hello");
	std::vector<int> testIntVector(10, 2);

	NSP::stack<int, std::vector<int> > intStack; // A MODIFIER !!!!!!!!!!!!!!!!!
	NSP::stack<int, std::vector<int> > intStack2(testIntVector); // A MODIFIER !
	NSP::stack<std::string, std::vector<std::string> > stringStack; // A MODIFIER !
	NSP::stack<std::string, std::vector<std::string> > stringStack2(testStringVector); // A MODIFIER !
}