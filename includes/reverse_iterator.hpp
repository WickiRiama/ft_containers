/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_iterator.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mriant <mriant@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 13:37:15 by mriant            #+#    #+#             */
/*   Updated: 2023/02/10 11:06:19 by mriant           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REVERSE_ITERATOR_HPP
#define REVERSE_ITERATOR_HPP

#include "iterator_traits.hpp"

namespace ft
{
	template <class Iterator>
	class reverse_iterator : public std::iterator<typename iterator_traits<Iterator>::iterator_category,
												  typename iterator_traits<Iterator>::value_type,
												  typename iterator_traits<Iterator>::difference_type,
												  typename iterator_traits<Iterator>::pointer,
												  typename iterator_traits<Iterator>::reference>
	{
	protected:
		Iterator current;

//==============================================================================
// Member types
//==============================================================================

	public:
		typedef Iterator
			iterator_type;
		typedef typename iterator_traits<Iterator>::difference_type
			difference_type;
		typedef typename iterator_traits<Iterator>::reference
			reference;
		typedef typename iterator_traits<Iterator>::pointer
			pointer;

//==============================================================================
// Constructors
//==============================================================================

	public:
		reverse_iterator() : current(Iterator()) {}
		explicit reverse_iterator(Iterator x) : current(x) {}
		template <class U>
		reverse_iterator(const reverse_iterator<U> &u) : current(u.current) {}

//==============================================================================
// Member functions
//==============================================================================

		Iterator base() const { return current; } // explicit
		reference operator*() const { Iterator tmp = current; return *--tmp; }
		pointer operator->() const { return &(operator*()); }
		reverse_iterator &operator++() { --current; return *this; }
		reverse_iterator operator++(int)
		{
			reverse_iterator tmp = *this;
			--cuurent;
			return tmp;
		}
		// reverse_iterator &operator--();
		// reverse_iterator operator--(int);
		// reverse_iterator operator+(difference_type n) const;
		// reverse_iterator &operator+=(difference_type n);
		// reverse_iterator operator-(difference_type n) const;
		// reverse_iterator &operator-=(difference_type n);
		// reference operator[](difference_type n) const;
	};
	// template <class Iterator>
	// bool operator==(
	// 	const reverse_iterator<Iterator> &x,
	// 	const reverse_iterator<Iterator> &y);
	// template <class Iterator>
	// bool operator<(
	// 	const reverse_iterator<Iterator> &x,
	// 	const reverse_iterator<Iterator> &y);
	// template <class Iterator>
	// bool operator!=(
	// 	const reverse_iterator<Iterator> &x,
	// 	const reverse_iterator<Iterator> &y);
	// template <class Iterator>
	// bool operator>(
	// 	const reverse_iterator<Iterator> &x,
	// 	const reverse_iterator<Iterator> &y);
	// template <class Iterator>
	// bool operator>=(const reverse_iterator<Iterator> &x, const reverse_iterator<Iterator> &y);
	// template <class Iterator>
	// bool operator<=(
	// 	const reverse_iterator<Iterator> &x,
	// 	const reverse_iterator<Iterator> &y);
	// template <class Iterator>
	// typename reverse_iterator<Iterator>::difference_type operator-(
	// 	const reverse_iterator<Iterator> &x,
	// 	const reverse_iterator<Iterator> &y);
	// template <class Iterator>
	// reverse_iterator<Iterator> operator+(
	// 	typename reverse_iterator<Iterator>::difference_type n,
	// 	const reverse_iterator<Iterator> &x);
}

#endif