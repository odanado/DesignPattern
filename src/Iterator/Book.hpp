#ifndef BOOK_HPP
#define BOOK_HPP

#include <string>

class Book {
    std::string name;
public:
    Book(const std::string &name = "") : name(name) {}

    std::string getName() const {
        return name;
    }

};

#endif

