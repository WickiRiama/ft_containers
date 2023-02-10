/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_iterator.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mriant <mriant@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 13:37:15 by mriant            #+#    #+#             */
/*   Updated: 2023/02/10 16:09:47 by mriant           ###   ########.fr       */
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

//==============================================================================
// Friend functions
//==============================================================================

	public:
		template <class IteratorX>
		friend bool operator==(const reverse_iterator<IteratorX> &x,
							   const reverse_iterator<IteratorX> &y);

		template <class IteratorX>
		friend bool operator<(const reverse_iterator<IteratorX> &x, 
							  const reverse_iterator<IteratorX> &y);

		template <class IteratorX>
		friend typename reverse_iterator<IteratorX>::difference_type
		operator-(const reverse_iterator<IteratorX> &x,
				  const reverse_iterator<IteratorX> &y);

		template <class IteratorX>
		friend reverse_iterator<IteratorX>
		operator+(typename reverse_iterator<IteratorX>::difference_type n,
				  const reverse_iterator<IteratorX> &x);

//==============================================================================
// Member object
//==============================================================================

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

	public:
		Iterator base() const { return current; } // explicit
		
		reference operator*() const { Iterator tmp = current; return *--tmp; }
		pointer operator->() const { return &(operator*()); }
		reverse_iterator &operator++() { --current; return *this; }
		reverse_iterator operator++(int)
		{
			reverse_iterator tmp = *this;
			--current;
			return tmp;
		}
		reverse_iterator &operator--() { ++current; return *this; }
		reverse_iterator operator--(int)
		{
			reverse_iterator tmp = *this;
			++current;
			return tmp;
		}
		reverse_iterator operator+(difference_type n) const
		{
			return reverse_iterator(current - n);
		}
		reverse_iterator &operator+=(difference_type n)
		{
			current -= n;
			return *this;
		}
		reverse_iterator operator-(difference_type n) const
		{
			return reverse_iterator(current + n);
		}
		reverse_iterator &operator-=(difference_type n)
		{
			current += n;
			return *this;
		}
		reference operator[](difference_type n) const { return current[-n -1]; }
	};

	//==========================================================================
	// Non member functions
	//==========================================================================
	
	template <class Iterator>
	bool operator==(const reverse_iterator<Iterator> &x,
					const reverse_iterator<Iterator> &y)
	{
		return x.current == y.current;
	}
	
	template <class Iterator>
	bool operator<(const reverse_iterator<Iterator> &x,
				   const reverse_iterator<Iterator> &y)
	{
		return x.current > y.current;
	}
	
	template <class Iterator>
	bool operator!=(const reverse_iterator<Iterator> &x,
					const reverse_iterator<Iterator> &y) { return !(x == y); }
	
	template <class Iterator>
	bool operator>(const reverse_iterator<Iterator> &x,
				   const reverse_iterator<Iterator> &y) { return y < x; }
				   
	template <class Iterator>
	bool operator>=(const reverse_iterator<Iterator> &x,
					const reverse_iterator<Iterator> &y) { return !(x < y); }

	template <class Iterator>
	bool operator<=(const reverse_iterator<Iterator> &x,
					const reverse_iterator<Iterator> &y) { return !(y < x); }

	template <class Iterator>
	typename reverse_iterator<Iterator>::difference_type
	operator-(const reverse_iterator<Iterator> &x,
			  const reverse_iterator<Iterator> &y)
	{
		return y.current - x.current;
	}

	template <class Iterator>
	reverse_iterator<Iterator>
	operator+(typename reverse_iterator<Iterator>::difference_type n,
			  const reverse_iterator<Iterator> &x)
	{
		return reverse_iterator<Iterator>(x.current - n);
	}
}

#endif