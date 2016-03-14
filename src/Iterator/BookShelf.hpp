#ifndef BOOKSHELF_HPP
#define BOOKSHELF_HPP

#include <vector>

#include "Aggregate.hpp"
#include "Book.hpp"

class BookShelf : public Aggregate<Book> {
    std::vector<Book> books;
    int last;
public:
    BookShelf(int maxsize) : last(0) {
        books.resize(maxsize);
    }
    ~BookShelf() = default;

    Book getBookAt(int index) const {
        return books[index];
    }

    void appendBook(const Book &book) {
        books[last++] = book;
    }

    int getLength() {
        return last;
    }

    std::unique_ptr<Iterator<Book>> iterator();
};

#endif

