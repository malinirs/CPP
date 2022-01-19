#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "RobotomyRequestForm.hpp" // знак 72, исполнение 45
#include "ShrubberyCreationForm.hpp" // знак 145, исполнение 137
#include "PresidentialPardonForm.hpp" // знак 25, исполнитель 5

int	main(void)
{
	std::cout << "-----------------------------------------" << std::endl;

	try
	{
		Bureaucrat	Malinka("Malinka", 30);
		std::cout << Malinka << std::endl;

		RobotomyRequestForm	a("A");
		a.beSigned(Malinka);
		std::cout << a << std::endl;
		a.execute(Malinka);
		std::cout << a << std::endl;
	}
	catch (std::exception & e)
	{ std::cout << e.what() << std::endl; }

	std::cout << "-----------------------------------------" << std::endl;

	try
	{
		Bureaucrat	Berry("Berry", 5);
		std::cout << Berry << std::endl;

		ShrubberyCreationForm	b("Street");
		b.beSigned(Berry);
		std::cout << b << std::endl;
		b.execute(Berry);
	}
	catch (std::exception & e)
	{ std::cout << e.what() << std::endl; }

	std::cout << "-----------------------------------------" << std::endl;

	try
	{
		Bureaucrat	Candy("Candy", 5);
		std::cout << Candy << std::endl;

		PresidentialPardonForm	c("HOODWINK");
		c.beSigned(Candy);
		std::cout << c << std::endl;
		c.execute(Candy);
	}
	catch (std::exception & e)
	{ std::cout << e.what() << std::endl; }

	std::cout << "*****************************************" << std::endl;

	return (0);
}
