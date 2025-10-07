/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafavard <vafavard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 14:42:59 by vafavard          #+#    #+#             */
/*   Updated: 2025/10/07 11:25:53 by vafavard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H

#include "Contact.class.hpp"

class PhoneBook {

public:

	PhoneBook(void);
	~PhoneBook(void);
	int	Index(void);
	void AddContact(void);
	void SetNbContact(void);
	int	GetNbContact(void);
	void PrintAllContacts(void);
	
private:
	Contact list[8];
	int	NbContacts;
	int	flag;
};

#endif