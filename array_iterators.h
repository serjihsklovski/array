#ifndef ARRAY_ITERATORS_H
#define ARRAY_ITERATORS_H

#include "array.h"


template<typename T>
inline typename Array<T>::iterator Array<T>::begin() {
    return _array;  // null element of the array
}


template<typename T>
inline typename Array<T>::iterator Array<T>::begin() const {
    return _array;
}


template<typename T>
inline typename Array<T>::iterator Array<T>::end() {
    return _array + _size;  // next element, after last
}


template<typename T>
inline typename Array<T>::iterator Array<T>::end() const {
    return _array + _size;
}

#endif // ARRAY_ITERATORS_H
