/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafavard <vafavard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 14:50:57 by vafavard          #+#    #+#             */
/*   Updated: 2025/12/17 10:18:27 by vafavard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP
#include <string>


class   Contact{

public:

	Contact(void);
	~Contact(void);
	int	FillContact(void);
	void Print(int i);
	void PrintIndex(void);
	std::string MyStr(std::string str);
	
private:
	std::string _FirstName;
	std::string	_LastName;
	std::string _NickName;
	std::string _PhoneNbr;
	std::string	_DarkestSecret;
};

#endif