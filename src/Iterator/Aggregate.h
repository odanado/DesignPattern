#ifndef SRC_ITERATOR_AGGREGATE_H_
#define SRC_ITERATOR_AGGREGATE_H_

#include <memory>
#include "Iterator.h"

template <class T>
class Aggregate {
 public:
    virtual ~Aggregate() = default;
    virtual std::unique_ptr<Iterator<T>> iterator() = 0;
};

#endif  // SRC_ITERATOR_AGGREGATE_H_
