#ifndef BOOKSHELFITERATOR_HPP
#define BOOKSHELFITERATOR_HPP

#include "Iterator.hpp"
#include "Book.hpp"
#include "Aggregate.hpp"
#include "BookShelf.hpp"

class BookShelfIterator : public Iterator<Book> {
    BookShelf bookShelf;
    int index;

public:
    BookShelfIterator(BookShelf bookShelf) : bookShelf(bookShelf), index(0) {}
    ~BookShelfIterator() = default;

    bool hasNext() { return index < bookShelf.getLength(); }

    Book next() { return bookShelf.getBookAt(index++); }
};

#endif
