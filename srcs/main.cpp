/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mriant <mriant@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 13:32:34 by mriant            #+#    #+#             */
/*   Updated: 2023/02/09 16:25:47 by mriant           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <time.h>

#include "containers.h"
#include "colors.h"

int main(void)
{
	clock_t t0 = clock();
	
	test_stack();

	std::cout << std::endl;
	std::cout << BYEL << "<<< Time >>>" << RES << std::endl;
	std::cout << std::endl;

	clock_t t1 = clock();
	std::cout << 10000 * (t1 - t0) / CLOCKS_PER_SEC << " microsecondes" << std::endl;
}