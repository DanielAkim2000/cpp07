#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <stdexcept>

template <typename T>
class Array
{
private:
	T *data;
	unsigned int len;

public:
	Array();
	Array(unsigned int n);
	Array(const Array &other);
	Array &operator=(const Array &other);
	T &operator[](int i);
	const T &operator[](int i) const;
	~Array();

	unsigned int size(void) const;
};

#include "Array.tpp"

#endif
