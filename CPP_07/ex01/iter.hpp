#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>
# include <string>

template<typename NameType, typename NameType2>
void	iter(NameType *arr, NameType2 len_arr, void (*function)(NameType &temp))
{
	for (NameType2 index = 0; len_arr > index; index++)
	{
		std::cout << "arr[" << index << "] = ";
		function(arr[index]);
	}
}

template<typename NameType>
void	function(NameType &temp) // выводим на экран элементы массива
{ std::cout << temp << std::endl; }

#endif