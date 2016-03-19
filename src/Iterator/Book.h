#ifndef SRC_ITERATOR_BOOK_H_
#define SRC_ITERATOR_BOOK_H_

#include <string>

class Book {
 public:
    explicit Book(const std::string &name = "") : name(name) {}
    std::string getName() const { return name; }

 private:
    std::string name;
};

#endif  // SRC_ITERATOR_BOOK_H_
