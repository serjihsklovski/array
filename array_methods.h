#ifndef ARRAY_METHODS_H
#define ARRAY_METHODS_H

#include "array.h"


template<typename T>
size_t Array<T>::get_size() const {
    return _size;
}


template<typename T>
size_t Array<T>::get_capacity() const {
    return _capacity;
}


template<typename T>
void Array<T>::push_back(const_reference value) {
    if (_size == _capacity) {
        reserve(FACTOR * _capacity);
    }

    _array[_size++] = value;
}


template<typename T>
typename Array<T>::reference Array<T>::pop_back() throw (EmptyArrayException) {
    if (is_empty()) {
        throw EmptyArrayException();
    }

    return _array[_size-- - 1];
}


template<typename T>
bool Array<T>::is_empty() const {
    return _size == 0;
}


template<typename T>
typename Array<T>::reference Array<T>::operator [](int index) {
    return _array[index];
}


template<typename T>
T Array<T>::at(int index) const
throw (BadIndexException)
{
    if (index < 0) {
        index = _size + index;
    }

    if (index >= (int) _size || index < 0) {
        throw BadIndexException("index is out of range");
    }

    return T(_array[index]);
}

#endif // ARRAY_METHODS_H
