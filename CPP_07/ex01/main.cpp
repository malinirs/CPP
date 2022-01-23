#include "iter.hpp"

int	main(void)
{
	std::cout << "***************" << std::endl;
	int	arr1[] = {1, 2, 3};
	iter(arr1, 3, function);
	std::cout << "***************" << std::endl;

	float	arr2[] = {1.1, 2.22, 3.333};
	iter(arr2, 3, function);
	std::cout << "***************" << std::endl;

	char	*arr3 = strdup("Malinka");
	iter(arr3, 7, function);
	std::cout << "***************" << std::endl;

	return (0);
}