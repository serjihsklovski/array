#ifndef ARRAY_EXCEPTIONS_H
#define ARRAY_EXCEPTIONS_H

#include <stdexcept>


class BadIndexException : public std::runtime_error {
    public:
        BadIndexException(const std::string& msg):
            std::runtime_error(msg)
        {}
};


class EmptyArrayException : public std::runtime_error {
    public:
        EmptyArrayException(const std::string& msg="Array is empty"):
            std::runtime_error(msg)
        {}
};


#endif // ARRAY_EXCEPTIONS_H
