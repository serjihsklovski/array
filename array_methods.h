#ifndef ARRAY_METHODS_H
#define ARRAY_METHODS_H

#include "array.h"


template<typename T>
void Array<T>::push_back(const_reference value) {
    if (_size == _capacity) {
        reserve(Array::FACTOR * _capacity);
    }

    _array[_size++] = value;
}

#endif // ARRAY_METHODS_H
