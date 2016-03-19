#ifndef SRC_ITERATOR_BOOKSHELF_H_
#define SRC_ITERATOR_BOOKSHELF_H_

#include <vector>

#include "Aggregate.h"
#include "Book.h"

class BookShelf : public Aggregate<Book> {
 public:
    explicit BookShelf(int maxsize) : last(0) { books.resize(maxsize); }
    ~BookShelf() = default;

    Book getBookAt(int index) const { return books[index]; }

    void appendBook(const Book &book) { books[last++] = book; }

    int getLength() { return last; }

    std::unique_ptr<Iterator<Book>> iterator();

 private:
    std::vector<Book> books;
    int last;
};

#endif  // SRC_ITERATOR_BOOKSHELF_H_
