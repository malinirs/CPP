//
// Created by Advisor Woods on 1/18/22.
//

#include "Form.hpp"

Form::Form() : name_form("Empty form"), signature(false), evaluation_for_signing(150), evaluation_for_performance(150) {}

Form::Form(std::string name, int value1, int value2) :
name_form(name), signature(false), evaluation_for_signing(value1), evaluation_for_performance(value2)
{
//	std::cout << "Constructor Form called" << std::endl;
	if (evaluation_for_signing > 150 || evaluation_for_performance > 150)
		throw Form::GradeTooLowException();
	if (evaluation_for_signing < 1 || evaluation_for_performance < 1)
		throw Form::GradeTooHighException();
}

Form::~Form() {}
//{ std::cout << "Destructor Form called" << std::endl; }

Form::Form(Form const &cp) : name_form(cp.name_form), signature(cp.signature),
evaluation_for_signing(cp.evaluation_for_signing), evaluation_for_performance(cp.evaluation_for_performance)
{
	Form::operator=(cp);
}

Form&	Form::operator=(Form const &oper)
{
//	std::cout << "Form assignation operator overload called" << std::endl;
	if (this == &oper)
		return (*this);
	evaluation_for_signing = oper.evaluation_for_signing;
	return (*this);
}

std::string	Form::getName() const
{ return (name_form); }

bool	Form::get_signature() const
{ return (signature); }

int	Form::getGrade_signing() const
{ return (evaluation_for_signing); }

int	Form::getGrade_performance() const
{ return (evaluation_for_performance); }

const char*	Form::GradeTooLowException::what() const throw()
{ return ("Bureaucrat Rating Below Required"); }

const char*	Form::GradeTooHighException::what() const throw()
{ return ("The rating is higher the maximum possible"); }

std::ostream&	operator<<(std::ostream& out, Form const& form)
{
	out << "******************Form******************\nName: " <<
	form.getName() << "\nSign: " << form.get_signature() <<
	"\nEvaluation for signing: " << form.getGrade_signing() <<
	"\nEvaluation for performance: " <<	form.getGrade_performance();
	return (out);
}

const char*	Form::FormNotSigned::what() const throw()
{ return ("!!! Form not signed !!!"); }

const char*	Form::FormSigned::what() const throw()
{ return ("!!! Form signed !!!"); }

void	Form::beSigned(Bureaucrat &bureaucrat)
{
	if (this->getGrade_signing() >= bureaucrat.getGrade())
	{
		if (this->signature == true)
			throw Form::FormSigned();
		else
		{
			this->signature = true;
			std::cout << "The form <" << this->getName() << "> has just been signed bureaucrat <" <<
			bureaucrat.getName() << ">" << std::endl;
		}
	}
	else
		throw Form::GradeTooLowException();
}
