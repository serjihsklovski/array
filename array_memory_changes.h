#ifndef ARRAY_MEMORY_CHANGES_H
#define ARRAY_MEMORY_CHANGES_H

#include "array.h"


template<typename T>
void Array<T>::reserve() {
    iterator it = new T[FACTOR * _capacity];
    std::copy(begin(), end(), it);
    _capacity = n;

    delete[] _array;

    _array = it;
}


template<typename T>
void Array<T>::shrink() {
    if (_size == _capacity || _size <= MIN_CAPACITY) {
        return;
    } else {
        iterator it = new T[_size];
        std::copy(begin(), end(), it);
        _capacity = _size;

        delete[] _array;

        _array = it;
    }
}

#endif // ARRAY_MEMORY_CHANGES_H
