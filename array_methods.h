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
        reserve();
    }

    _array[_size++] = value;
}


template<typename T>
typename Array<T>::reference Array<T>::pop_back()
throw (EmptyArrayException)
{
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


template<typename T>
void Array<T>::set(int index, const_reference value)
throw (BadIndexException)
{
    if (index < 0) {
        index = _size + index;
    }

    if (index >= (int) _size || index < 0) {
        throw BadIndexException("index is out of range");
    }

    _array[index] = value;
}


template<typename T>
Array<T> Array<T>::operator +(const Array<T>& rvalue) const {
    size_t      new_size = _size + rvalue._size;
    Array<T>    array(new_size);
    iterator    it = new T[new_size];

    std::copy(begin(), end(), it);
    std::copy(rvalue.begin(), rvalue.end(), it + _size);

    array._size = new_size;
    array._array = it;

    return array;
}


template<typename T>
Array<T>& Array<T>::operator <<(Array<T>::const_reference rvalue) {
    push_back(rvalue);

    return *this;
}

#endif // ARRAY_METHODS_H
