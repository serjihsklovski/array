#ifndef ARRAY_H
#define ARRAY_H

#include <cstdlib>


template<typename T>
class Array {
    public:
        enum {
            MIN_CAPACITY = 4
        };

        typedef T* iterator;

        Array();
        Array(size_t size);
        Array(const Array<T>& orig);

        iterator begin();
        iterator begin() const;
        iterator end();
        iterator end() const;


    private:
        size_t      _capacity;
        size_t      _size;
        iterator    _array;
};

#include "array_constructors.h"

#endif // ARRAY_H
