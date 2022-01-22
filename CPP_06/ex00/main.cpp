#include "ScalarConversion.hpp"

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Invalid number of arguments!" << std::endl;
		return (0);
	}
	try
	{
		ScalarConversion	temp(argv[1]);
		temp.convert();
	}
	catch (std::exception & e)
	{ std::cout << e.what() << std::endl; }
	return (0);
}