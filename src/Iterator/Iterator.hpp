#ifndef ITERATOR_HPP
#define ITERATOR_HPP

template <class T>
class Iterator {
public:
    virtual bool hasNext() = 0;
    virtual T next() = 0;
    virtual ~Iterator() = default;
};

#endif
