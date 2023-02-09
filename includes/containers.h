/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   containers.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mriant <mriant@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 13:25:42 by mriant            #+#    #+#             */
/*   Updated: 2023/02/09 16:15:02 by mriant           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTAINERS_H
#define CONTAINERS_H

#ifndef FT

#include <stack>
#include <iterator>
namespace NSP = std;

#else

#include "stack.hpp"
#include "reverse_iterator.hpp"
namespace NSP = ft;

#endif

void test_stack(void);

#endif
