/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mriant <mriant@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 15:53:19 by mriant            #+#    #+#             */
/*   Updated: 2023/02/08 16:36:17 by mriant           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STACK_HPP
#define STACK_HPP

#include <vector> // A ENLEVER !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

namespace ft
{
	template <class T, class Container = std::vector<T> >
	class stack
	{
	public:
		typedef typename Container::value_type value_type;
		typedef typename Container::size_type size_type;
		typedef Container container_type;

		template<typename Tx, typename Containerx>
		friend bool operator==(const stack<Tx, Containerx> &x, const stack<Tx, Containerx> &y);
		template <class Tx, class Containerx>
		friend bool operator<(const stack<Tx, Containerx> &x, const stack<Tx, Containerx> &y);

	protected:
		Container c;

	public:
		explicit stack(const Container &src = Container()) { c = src; }
		bool empty() const { return c.empty(); }
		size_type size() const { return c.size(); }
		value_type &top() { return c.back(); }
		const value_type &top() const { return c.back(); }
		void push(const value_type &x) { c.push_back(x); }
		void pop() { c.pop_back(); }


	};
	
	template <class T, class Container>
	bool operator==(const stack<T, Container> &x, const stack<T, Container> &y)
	{
		return x.c == y.c;
	}

	template <class T, class Container>
	bool operator<(const stack<T, Container> &x, const stack<T, Container> &y)
	{
		return x.c < y.c;
	}

	template <class T, class Container>
	bool operator!=(const stack<T, Container> &x, const stack<T, Container> &y)
	{
		return !(x == y);
	}

	// template <class T, class Container>
	// bool operator>(const stack<T, Container> &x,
	// 			   const stack<T, Container> &y);
	// template <class T, class Container>
	// bool operator>=(const stack<T, Container> &x,
	// 				const stack<T, Container> &y);
	// template <class T, class Container>
	// bool operator<=(const stack<T, Container> &x,
	// 				const stack<T, Container> &y);
}

#endif