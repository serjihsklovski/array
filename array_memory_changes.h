#ifndef ARRAY_MEMORY_CHANGES_H
#define ARRAY_MEMORY_CHANGES_H

#include "array.h"


template<typename T>
void Array<T>::reserve(size_t n) {
    if (n <= _capacity || n <= MIN_CAPACITY) {
        return;
    } else {
        iterator it = new T[n];
        std::copy(begin(), end(), it);
        _capacity = n;

        delete[] _array;

        _array = it;
    }
}

#endif // ARRAY_MEMORY_CHANGES_H
