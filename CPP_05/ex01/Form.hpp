//
// Created by Advisor Woods on 1/18/22.
//

#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
private:

	std::string const	name_form;
	bool				signature; 					// подписан ли документ
	int 				evaluation_for_signing;		// оценка для подписания
	int	const			evaluation_for_performance; // оценка для выполнения

public:
	Form();
	Form(std::string name, int value1, int value2);
	Form(Form const &cp);
	Form &operator=(Form const &oper);
	~Form();

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

	static void	form_signed();
	void	beSigned(Bureaucrat &bureaucrat); //принимает бюрократа и делает форму подписанной, если уровень бюрократа достаточно высок.
	//Всегда помните, что оценка 1 лучше, чем оценка 2. Если оценка слишком низкая, создайте исключение Form::GradeTooLowException.
};

std::ostream&	operator<<(std::ostream& out, Form const& form);

#endif