//
// Created by Advisor Woods on 1/19/22.
//

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "Form.hpp"
# include <fstream>

//Форма создания кустарника
class ShrubberyCreationForm : public Form
{
private:
	std::string	name_form_shrubbery;
	ShrubberyCreationForm();

public:
	ShrubberyCreationForm(const std::string& name);
	ShrubberyCreationForm(ShrubberyCreationForm const &cp);
	ShrubberyCreationForm &operator=(ShrubberyCreationForm const &oper);
	~ShrubberyCreationForm();

	void	execute(Bureaucrat const & executor) const;
};


#endif

// Действие: Создайте файл с именем <target>_shrubbery
// и запишите в него деревья ASCII в текущем каталоге.