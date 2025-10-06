/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafavard <vafavard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 14:50:57 by vafavard          #+#    #+#             */
/*   Updated: 2025/10/06 18:08:11 by vafavard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H
#include <string>

class   Contact{

public:

	Contact(void);
	~Contact(void);
	void	FillContact(void);
	
private:
	std::string FirstName;
	std::string	LastName;
	std::string NickName;
	std::string PhoneNbr;
	std::string	DarkestSecret;
};

#endif