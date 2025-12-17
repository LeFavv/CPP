/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafavard <vafavard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 14:42:59 by vafavard          #+#    #+#             */
/*   Updated: 2025/12/17 10:18:44 by vafavard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook {

public:

	PhoneBook(void);
	~PhoneBook(void);
	int	Index(void);
	void AddContact(void);
	void SetNbContact(void);
	int	GetNbContact(void);
	int PrintAllContacts(void);
	void SetFlag(void);
	
private:
	Contact list[8];
	int	NbContacts;
	int	flag;
};

#endif