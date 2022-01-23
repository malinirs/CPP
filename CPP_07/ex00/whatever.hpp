#ifndef WHATEVER_HPP
# define WHATEVER_HPP

# include <iostream>
# include <string>

// Главная идея шаблонов функций — создание функций без указания точного типа(ов) некоторых или всех переменных.
// template < параметры_шаблона > описание_функции
// template < typename T >
// typename в угловых скобках означает, что параметром шаблона будет тип данных. T — имя параметра шаблона.
// Вместо typename здесь можно использовать слово class: template <class T>. В данном контексте typename и class эквивалентны

template<typename NameType>
void	swap(NameType &first, NameType &second)
{
	NameType	temp;

	temp = first;
	first = second;
	second = temp;
}

template<typename NameType>
NameType	min(NameType &first, NameType &second)
{ return (first < second ? first : second); }

template<typename NameType>
NameType	max(NameType &first, NameType &second)
{ return (first > second ? first : second); }

#endif