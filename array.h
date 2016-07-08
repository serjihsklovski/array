#ifndef ARRAY_H
#define ARRAY_H

#include <cstdlib>
#include "array_exceptions.h"


template<typename T>
class Array {
    public:
        enum {
            MIN_CAPACITY = 4,
            FACTOR = 2
        };

        typedef T*          iterator;
        typedef const T*    const_iterator;
        typedef T&          reference;
        typedef const T&    const_reference;

        Array();
        Array(size_t size);
        Array(const Array<T>& orig);

        iterator begin();
        iterator begin() const;
        iterator end();
        iterator end() const;

        size_t get_size() const;
        size_t get_capacity() const;

        void reserve(size_t n);
        void shrink();

        void push_back(const_reference value);
        reference pop_back() throw (EmptyArrayException);

        bool is_empty() const;

        reference operator [](int index);
        T at(int index) const throw (BadIndexException);


    private:
        size_t      _capacity;
        size_t      _size;
        iterator    _array;
};

#include "array_constructors.h"
#include "array_iterators.h"
#include "array_memory_changes.h"
#include "array_methods.h"

#endif // ARRAY_H
