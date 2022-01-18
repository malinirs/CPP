//
// Created by Advisor Woods on 1/17/22.
//

#include "Bureaucrat.hpp"

//оператор throw используется для сигнализирования о возникновении исключения или ошибки (аналогия тому, когда
//свистит арбитр). Сигнализирование о том, что произошло исключение, называется генерацией исключения
//(или «выбрасыванием исключения»).

Bureaucrat::Bureaucrat(const std::string name_bureaucrat, int value) :
name_bureaucrat(name_bureaucrat), value(value)
{
//	std::cout << "Constructor Bureaucrat called" << std::endl;
	if (value > 150)
		throw Bureaucrat::GradeTooLowException();
	if (value < 1)
		throw Bureaucrat::GradeTooHighException();

}

Bureaucrat::~Bureaucrat() {}
//{ std::cout << "Destructor Bureaucrat called" << std::endl; }

Bureaucrat::Bureaucrat(const Bureaucrat &cp)
{ Bureaucrat::operator=(cp); }

Bureaucrat	&Bureaucrat::operator=(const Bureaucrat &oper)
{
//	std::cout << "Bureaucrat assignation operator overload called" << std::endl;
	if (this == &oper)
		return (*this);
	value = oper.value;
	return (*this);
}

std::string	Bureaucrat::getName() const
{ return (name_bureaucrat); }

int	Bureaucrat::getGrade() const
{ return (value); }

const char*	Bureaucrat::GradeTooLowException::what() const throw()
{ return ("The rating is below the minimum possible"); }

const char*	Bureaucrat::GradeTooHighException::what() const throw()
{ return ("The rating is higher the maximum possible"); }

void	Bureaucrat::increase_value()
{
	if (--this->value < 1)
		throw Bureaucrat::GradeTooHighException();
}

void	Bureaucrat::decrease_value()
{
	if (++this->value > 150)
		throw Bureaucrat::GradeTooLowException();
}

std::ostream&	operator<<(std::ostream& out, Bureaucrat const& bureaucrat)
{
	out << "<" << bureaucrat.getName() << "> , bureaucrat grade <" << bureaucrat.getGrade() << ">";
	return (out);
}

void	Bureaucrat::signForm(Form &form)
{
	if (form.getGrade_signing())
		std::cout << "Bureaucrat <" << this->getName() << "> cannot sign <" << form.getName() << ">. The Form has been pre-signed." << std::endl;
	else if (this->getGrade() < form.getGrade_signing())
		std::cout << "Bureaucrat <" << this->getName() << "> cannot sign <" << form.getName() << ">. The rating is below the minimum possible." << std::endl;
	else
		std::cout << "Bureaucrat <" << this->getName() << "> signs Form <" << form.getName() << ">" << std::endl;
}
