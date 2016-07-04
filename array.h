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


    private:
        size_t      _capacity;
        size_t      _size;
        iterator    _array;
};

#endif // ARRAY_H
