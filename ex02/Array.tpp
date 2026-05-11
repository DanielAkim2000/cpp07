#include "Array.hpp"

template <typename T>
Array<T>::Array() : data(NULL), len(0)
{
}

template <typename T>
Array<T>::Array(unsigned int n) : data(new T[n]), len(n)
{
}

template <typename T>
Array<T>::Array(const Array &other) : data(NULL), len(0)
{
	*this = other;
}

template <typename T>
Array<T> &Array<T>::operator=(const Array &other)
{
	if (this != &other)
	{
		delete[] data;
		len = other.len;
		if (len > 0)
			data = new T[len];
		else
			data = NULL;
		for (unsigned int i = 0; i < len; i++)
			data[i] = other.data[i];
	}
	return (*this);
}

template <typename T>
T &Array<T>::operator[](int i)
{
	if (i < 0 || static_cast<unsigned int>(i) >= len)
		throw std::out_of_range("Array index out of range");
	return (data[i]);
}

template <typename T>
const T &Array<T>::operator[](int i) const
{
	if (i < 0 || static_cast<unsigned int>(i) >= len)
		throw std::out_of_range("Array index out of range");
	return (data[i]);
}

template <typename T>
unsigned int Array<T>::size(void) const
{
	return (len);
}

template <typename T>
Array<T>::~Array()
{
	delete[] data;
}
