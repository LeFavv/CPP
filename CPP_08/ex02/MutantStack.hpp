/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafavard <vafavard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 10:50:01 by vafavard          #+#    #+#             */
/*   Updated: 2025/12/17 14:35:10 by vafavard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <stack>
#include <string>
#include <iostream>
#include <algorithm>

template< typename T>
class MutantStack : public std::stack<T>
{
public:
        MutantStack(void) : std::stack<T>() {};
        MutantStack(MutantStack const &copy) : std::stack<T>(copy){};
        ~MutantStack(void){};
        MutantStack &operator=(MutantStack const &other)
        {
            std::stack<T>::operator=(other);
            return (*this);
        }

        typedef typename std::stack<T>::container_type::iterator iterator;
        typedef typename std::stack<T>::container_type::const_iterator const_iterator;
        typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
        typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;
        
        iterator begin()
        {
            return (this->c.begin());
        }
        const_iterator cbegin() const
        {
            return (this->c.cbegin());
        }
        reverse_iterator rbegin()
        {
            return (this->c.rbegin());
        }
        
        const_reverse_iterator crbegin() const
        {
            return (this->c.crbegin());
        }
        
        iterator end()
        {
            return (this->c.end());
        }
        const_iterator cend() const
        {
            return (this->c.cend());
        }
        reverse_iterator rend()
        {
            return (this->c.rend());
        }
        
        const_reverse_iterator crend() const
        {
            return (this->c.crend());
        }

        
private:

};

#endif