//
// Created by Advisor Woods on 1/17/22.
//

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
# include "Form.hpp"

class Form;

class Bureaucrat
{
private:
	std::string const	name_bureaucrat;
	int					value;
	Bureaucrat() {}; //не можем создать бюрократа без имени, потому этот конструктор в поле private

public:
	Bureaucrat(const std::string name_bureaucrat, int grade);
	Bureaucrat(Bureaucrat const &cp);
	Bureaucrat &operator=(Bureaucrat const &oper);
	~Bureaucrat();

	std::string	getName() const;
	int			getGrade() const;

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

	void	decrease_value(); //увеличение
	void	increase_value(); //уменьшение

	void	signForm(Form &form);

	void	executeForm(Form const & form);
};

std::ostream&	operator<<(std::ostream& out, Bureaucrat const& bureaucrat);

#endif