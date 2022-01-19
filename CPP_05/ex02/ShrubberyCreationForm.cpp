//
// Created by Advisor Woods on 1/19/22.
//

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& name)
: Form("Shrubbery Creation Form", 145, 137),  //(Требуемые оценки: знак 145, исполнение 137).
name_form_shrubbery(name) {}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &cp)
		: Form(cp), name_form_shrubbery(cp.name_form_shrubbery)
{ ShrubberyCreationForm::operator=(cp); }

ShrubberyCreationForm& ShrubberyCreationForm::operator=(ShrubberyCreationForm const &oper)
{
	if (this == &oper)
		return (*this);
	Form::operator=(oper);
	return (*this);
}

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	std::string		name_file = this->name_form_shrubbery + "_shrubbery";
	if (this->get_signature() && this->getGrade_performance() >= executor.getGrade())
	{
		std::string		temp = 	"              #\n"
								"             ***\n"
								"            *****\n"
								"           *****~~\n"
								"            **~~~\n"
								"           *~~~***\n"
								"          ~~~******\n"
								"         ~~*********\n"
								"        *************\n"
								"         ***********\n"
								"        *************\n"
								"       ***************\n"
								"      *@***************\n"
								"     ***@************@**\n"
								"    *@****************@**\n"
								"      @****************\n"
								"     *******************\n"
								"    *****@***************\n"
								"   ***********************\n"
								"  ********@****************\n"
								" *****************@*********\n"
								"*****************************\n"
								"            |||||\n"
								"            |||||   _8_8_\n"
								"            |||||  |  |  |_8_\n"
								"            |||||  |__|__|___|\n";

		std::ofstream 	write;
		write.open(name_file);
		write << temp;
		write.close();
	}
	else if (this->get_signature() == false)
		throw Form::FormNotSigned();
	else
		throw Bureaucrat::GradeTooLowException();
//	std::cout << "++++   Drill sounds   ++++" << std::endl;


}
