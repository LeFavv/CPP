/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafavard <vafavard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 14:42:59 by vafavard          #+#    #+#             */
/*   Updated: 2025/12/18 15:59:47 by vafavard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook {

public:

	PhoneBook(void);
	~PhoneBook(void);
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