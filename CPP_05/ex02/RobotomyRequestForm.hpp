//
// Created by Advisor Woods on 1/19/22.
//

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "Form.hpp"

// издает звуки сверления и выводит сообщение
class RobotomyRequestForm : public Form
{
private:
	std::string	name_form_robot;
	RobotomyRequestForm();

public:
	RobotomyRequestForm(std::string name);
	RobotomyRequestForm(RobotomyRequestForm const &cp);
	RobotomyRequestForm &operator=(RobotomyRequestForm const &oper);
	~RobotomyRequestForm();

	void	execute(Bureaucrat const & executor) const;
};


#endif

