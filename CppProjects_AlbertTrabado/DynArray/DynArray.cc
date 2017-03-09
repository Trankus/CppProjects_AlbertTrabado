#include <iostream>
#include <string>
#include <ctime>
#include "DynArray.hh"


DynArray::DynArray() :
		m_capacity(DYN_ARRAY_DEFAULT_SIZE),
		m_size(0),
		m_data(new int[DYN_ARRAY_DEFAULT_SIZE]) {};

DynArray::DynArray(size_t size) :
		m_capacity(size),
		m_size(size),
		m_data(new int[size]) {};

DynArray::DynArray(size_t size, const int &value) :
	m_capacity(size),
	m_size(size),
	m_data(new int[size])
{
	fill(begin(),end(),value);
}
			
	
DynArray::DynArray(int *arr, size_t size):
		m_capacity(size),
		m_size(size),
		m_data(arr) {};

DynArray::~DynArray()
{
	delete[] m_data;
	m_data = nullptr;
}

DynArray& DynArray::operator= (const DynArray &x)
{
	m_capacity = x.m_capacity;
	m_size = x.m_size;
	for (int i = 0; i > m_size; i++)
	{
		m_data[i] = x.m_data[i];
	}
}

void DynArray::copy(int *first, int *last, int *dest)
{
	while (&first != &last)
	{
		dest[first] = m_data[first];
		first++;
	}
};

void DynArray::push(const int &value)
{
	if (this->m_capacity > this->m_size)
	{
		m_data[m_size] = value;
		m_size++;
	}
	else
	{
		//crear un espai de capacity + 1
		int *auxData = new int[m_capacity + m_size/2];
		copy(m_data[0], m_data[m_size-1], auxData);
		//copy
		//Assignar nuevo valor
		//delete[] m_data
		//Actualizar m_data
		//Actualizar capacity
		//Actualizar size
	}
}

void DynArray::fill(int *first, int *last, int value)
{

};


