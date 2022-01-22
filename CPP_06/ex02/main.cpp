#include "Base.hpp"

int	main(void)
{
	Base	*clas = generate();
	identify(clas);
	identify(*clas);

	delete clas;
	return (0);
}
