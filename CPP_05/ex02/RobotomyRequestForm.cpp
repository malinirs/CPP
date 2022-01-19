//
// Created by Advisor Woods on 1/19/22.
//

#include "RobotomyRequestForm.hpp"
#include <cstdlib>

// Действие: Издает звуки сверления и сообщает нам, что <цель> успешно роботизирована в 50% случаев.
// В противном случае скажите нам, что это провал

RobotomyRequestForm::RobotomyRequestForm(std::string name) :
Form("Robotomy Request Form", 72, 45),  //(Требуемые оценки: знак 72, исполнение 45).
name_form_robot(name) {}

RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &cp)
 : Form(cp), name_form_robot(cp.name_form_robot)
{ RobotomyRequestForm::operator=(cp); }


RobotomyRequestForm& RobotomyRequestForm::operator=(RobotomyRequestForm const &oper)
{
	if (this == &oper)
		return (*this);
	Form::operator=(oper);
	return (*this);
}

void	RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	std::cout << "++++   Drill sounds   ++++" << std::endl;
	int	number = rand();
//	Form::execute(executor);
	if (this->get_signature() && this->getGrade_performance() >= executor.getGrade())
	{
		if (number % 2)
			std::cout << this->name_form_robot << " has been robotomized successfully :)" << std::endl;
		else
			std::cout << this->name_form_robot << " has not been robotomized successfully :(" << std::endl;
	}
	else if (this->get_signature() == false)
		throw Form::FormNotSigned();
	else
		throw Bureaucrat::GradeTooLowException();

}
