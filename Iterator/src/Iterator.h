#ifndef ITERATOR_SRC_ITERATOR_H_
#define ITERATOR_SRC_ITERATOR_H_

template <class T>
class Iterator {
 public:
    virtual bool hasNext() = 0;
    virtual T next() = 0;
    virtual ~Iterator() = default;
};

#endif  // ITERATOR_SRC_ITERATOR_H_
