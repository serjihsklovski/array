#ifndef ARRAY_CONSTRUCTORS_H
#define ARRAY_CONSTRUCTORS_H

#include "array.h"
#include <algorithm>


template<typename T>
Array<T>::Array():
    _capacity(MIN_CAPACITY),
    _size(0),
    _array(new T[_capacity])
{}


template<typename T>
Array<T>::Array(size_t size):
    _capacity(size >= (size_t) MIN_CAPACITY ? size : (size_t) MIN_CAPACITY),
    _size(size),
    _array(new T[_capacity])
{}


template<typename T>
Array<T>::Array(const Array<T>& orig):
    _capacity(orig._capacity),
    _size(orig._size),
    _array(new T[_capacity])
{
    std::copy(begin(), end(), orig._array);
}

#endif // ARRAY_CONSTRUCTORS_H
