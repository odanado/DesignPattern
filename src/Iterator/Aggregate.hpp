#ifndef AGGREGATE_HPP
#define AGGREGATE_HPP

#include <memory>
#include "iterator.hpp"

template<class T>
class Aggregate {
public:
    virtual std::unique_ptr<Iterator<T>> iterator() = 0;
    virtual ~Aggregate() = default;
};

#endif

