#include <iostream>
#include <string>
#include <ctime>
//#include "DynArray.hh"

class DynArray
{
public:

private:
	// static constants
	static const size_t DYN_ARRAY_DEFAULT_SIZE{ 8 };					// initial constant size of the array memory
	static const size_t DYN_ARRAY_MAX_SIZE{ 1073741823 };			// maximum constant size that the array memory can hold

	// attributes
	size_t	m_capacity;													// actual size of the allocated memory
	size_t  m_size;														// current number of elements in the array
	int	   *m_data;														// pointer to the memory allocated in the Heap
};
