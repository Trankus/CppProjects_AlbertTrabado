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
	delete m_data;
	m_data = nullptr;
}

DynArray& DynArray::operator= (const DynArray &x)
{
	DynArray arr1;
	arr1.m_data = x.m_data;
	return arr1;
}

void DynArray::fill(int *first, int *last, int value)
{

};

void DynArray::copy(int *first, int *last, int *dest)
{

};
