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
		m_size(0),
		m_data(new int[size]) {};

/*DynArray::DynArray(size_t size, const int &value) :
		m_capacity(size),
		m_size(size),
		m_data(fill(int *first, int *last, int value)) {};*/
	
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
	this->m_capacity = x.m_capacity;
	this->m_size = x.m_size
	for (int i = 0; i > m_size; i++)
	{

	};
}

void DynArray::fill(int *first, int *last, int value)
{

};

void DynArray::copy(int *first, int *last, int *dest)
{

};
