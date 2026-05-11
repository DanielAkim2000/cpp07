#ifndef MAIN_HPP
#define MAIN_HPP

#include <iostream>

template <typename T>
void iter(T tab[], const int len, void (*func)(T &))
{
	if (!tab || len <= 0 || !func)
		return;
	for (int i = 0; i < len; i++)
	{
		func(tab[i]);
	}
}

template <typename T>
void iter(const T tab[], const int len, void (*func)(const T &))
{
	if (!tab || len <= 0 || !func)
		return;
	for (int i = 0; i < len; i++)
	{
		func(tab[i]);
	}
}

#endif
