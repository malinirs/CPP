//
// Created by Advisor Woods on 1/18/22.
//

#ifndef CPP_FORM_HPP
# define CPP_FORM_HPP

# include "Bureaucrat.hpp"

class Bureaucrat;



class Form
{
private:

	std::string const	name_form;
	bool				signature; 					// подписан ли документ
	int 				evaluation_for_signing;		// оценка для подписания
	int	const			evaluation_for_performance; // оценка для выполнения
	Form();

public:
	Form(std::string name, int value1, int value2);
	Form(Form const &cp);
	Form &operator=(Form const &oper);
	virtual ~Form();

	std::string	getName() const;
	bool 		get_signature() const;
	int			getGrade_signing() const;
	int			getGrade_performance() const;

	class GradeTooHighException : public std::exception
	{
	public:
		virtual const char* what() const throw();
	};

	class GradeTooLowException : public std::exception
	{
	public:
		virtual const char* what() const throw();
	};

	class FormNotSigned : public std::exception
	{
	public:
		virtual const char* what() const throw();
	};

	class __attribute__((unused)) FormSigned : public std::exception
	{
	public:
		virtual const char* what() const throw();
	};

	void	beSigned(Bureaucrat &bureaucrat); //принимает бюрократа и делает форму подписанной, если уровень бюрократа достаточно высок.
	//Всегда помните, что оценка 1 лучше, чем оценка 2. Если оценка слишком низкая, создайте исключение Form::GradeTooLowException.


	virtual void	execute(Bureaucrat const & executor) const = 0; // !!! по заданию нужно класс абстрактный !!!
};

std::ostream&	operator<<(std::ostream& out, Form const& form);

#endif