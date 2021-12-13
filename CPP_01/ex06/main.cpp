#include "Karen.hpp"

int	main(int argc, char **argv)
{
	if (argc != 2)
		std::cout << "Invalid number of arguments" << std::endl;
	else
	{
		std::string	lvl = argv[1];
		Karen SweetKaren;
		SweetKaren.complain(lvl);
	}
	return (0);
}