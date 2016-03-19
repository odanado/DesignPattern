#ifndef SRC_ITERATOR_ITERATOR_H_
#define SRC_ITERATOR_ITERATOR_H_

template <class T>
class Iterator {
 public:
    virtual bool hasNext() = 0;
    virtual T next() = 0;
    virtual ~Iterator() = default;
};

#endif  // SRC_ITERATOR_ITERATOR_H_
