/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafavard <vafavard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 10:46:29 by vafavard          #+#    #+#             */
/*   Updated: 2025/11/25 13:47:05 by vafavard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShruberryCreationForm::ShruberryCreationForm() : AForm("Default", 25, 5), _target("Default"){}

ShruberryCreationForm::ShruberryCreationForm(std::string target) : AForm(target, 25, 5), _target(target){}

ShruberryCreationForm::ShruberryCreationForm(ShruberryCreationForm const &source)
{
    *this = source;
}

ShruberryCreationForm::~ShruberryCreationForm(void){};

ShruberryCreationForm &ShruberryCreationForm::operator=(ShruberryCreationForm const &copy)
{
    if (this != &copy)
        this->_IfSigned = copy._IfSigned;
    return (*this);
}

std::string ShruberryCreationForm::GetTarget(void)const
{
    return (this->_target);
}

void    ShruberryCreationForm::execute(Bureaucrat const &executor)const
{
    if (this->getIfSigned() == 0)
        throw AForm::NotSignedException();
    else if (executor.GetGrade() > this->getGradeExec())
        throw AForm::TooLowToExec();
    else
    {
        std::ofstream outfile;

        outfile.open("test", std::ios::out);
        if (outfile.is_open())
        {
            outfile <<"                                              .         ;  \n"
                    <<"                 .              .              ;%     ;;   \n"
                    <<"                   ,           ,                :;%  %;   \n"
                    <<"                    :         ;                   :;%;'     .,   \n"
                    <<"           ,.        %;     %;            ;        %;'    ,;\n"
                    <<"             ;       ;%;  %%;        ,     %;    ;%;    ,%'\n"
                    <<"              %;       %;%;      ,  ;       %;  ;%;   ,%;' \n"
                    <<"               ;%;      %;        ;%;        % ;%;  ,%;'\n"
                    <<"                `%;.     ;%;     %;'         `;%%;.%;'\n"
                    <<"                 `:;%.    ;%%. %@;        %; ;@%;%'\n"
                    <<"                    `:%;.  :;bd%;          %;@%;'\n"
                    <<"                      `@%:.  :;%.         ;@@%;'   \n"
                    <<"                        `@%.  `;@%.      ;@@%;         \n"
                    <<"                          `@%%. `@%%    ;@@%;        \n"
                    <<"                            ;@%. :@%%  %@@%;       \n"
                    <<"                              %@bd%%%bd%%:;     \n"
                    <<"                                #@%%%%%:;;\n"
                    <<"                                %@@%%%::;\n"
                    <<"                                %@@@%(o);  . '         \n"
                    <<"                                %@@@o%;:(.,'         \n"
                    <<"                            `.. %@@@o%::;         \n"
                    <<"                               `)@@@o%::;         \n"
                    <<"                                %@@(o)::;        \n"
                    <<"                               .%@@@@%::;         \n"
                    <<"                               ;%@@@@%::;.          \n"
                    <<"                              ;%@@@@%%:;;;. \n"
                    <<"                          ...;%@@@@@%%:;;;;,.. \n>";
        }
        else
        {
            std::perror("Error Cant open file\n");
        }
        outfile.close();
    }
}

std::ostream &operator<<(std::ostream& os, const ShruberryCreationForm &form)
{
	std::cout << form.getName() << " signed : " << (form.getIfSigned() ? "Yes" : "No")
	<< "Grade to Sign : " << form.getGradeSign() << " Grade to Exec : " << form.getGradeExec() << std::endl; 
    return os;
}