#ifndef ITERATOR_SRC_BOOK_H_
#define ITERATOR_SRC_BOOK_H_

#include <string>

class Book {
 public:
    explicit Book(const std::string &name = "") : name(name) {}
    std::string getName() const { return name; }

 private:
    std::string name;
};

#endif  // ITERATOR_SRC_BOOK_H_
