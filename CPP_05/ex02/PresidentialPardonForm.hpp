//
// Created by Advisor Woods on 1/19/22.
//

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "Form.hpp"

//Президентская форма помилования
class PresidentialPardonForm : public Form
{
private:
	std::string	name_form_president;
	PresidentialPardonForm();

public:
	PresidentialPardonForm(const std::string& name);
	PresidentialPardonForm(PresidentialPardonForm const &cp);
	PresidentialPardonForm &operator=(PresidentialPardonForm const &oper);
	~PresidentialPardonForm();

	void	execute(Bureaucrat const & executor) const;
};

#endif