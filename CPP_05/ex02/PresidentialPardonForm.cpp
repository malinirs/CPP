//
// Created by Advisor Woods on 1/19/22.
//

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(const std::string& name)
: Form("Presidential Pardon Form", 25, 5),  //(Требуемые оценки: знак 25, исполнитель 5).
name_form_president(name) {}

PresidentialPardonForm::~PresidentialPardonForm() {}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &cp)
		: Form(cp), name_form_president(cp.name_form_president)
{ PresidentialPardonForm::operator=(cp); }

PresidentialPardonForm& PresidentialPardonForm::operator=(PresidentialPardonForm const &oper)
{
	if (this == &oper)
		return (*this);
	Form::operator=(oper);
	return (*this);
}

// Действие: Сообщает нам, что Зафод Библброкс помиловал <цель>.
void	PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if (this->get_signature() && this->getGrade_performance() >= executor.getGrade())
	{ std::cout << this->name_form_president << " has been pardoned by Zafod Beeblebrox :)" << std::endl; }
	else if (this->get_signature() == false)
		throw Form::FormNotSigned();
	else
		throw Bureaucrat::GradeTooLowException();
}
