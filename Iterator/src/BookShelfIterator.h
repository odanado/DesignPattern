#ifndef ITERATOR_SRC_BOOKSHELFITERATOR_H_
#define ITERATOR_SRC_BOOKSHELFITERATOR_H_

#include "Iterator.h"
#include "Book.h"
#include "Aggregate.h"
#include "BookShelf.h"

class BookShelfIterator : public Iterator<Book> {
 public:
    explicit BookShelfIterator(BookShelf bookShelf)
        : bookShelf(bookShelf), index(0) {}
    ~BookShelfIterator() = default;

    bool hasNext() { return index < bookShelf.getLength(); }

    Book next() { return bookShelf.getBookAt(index++); }

 private:
    BookShelf bookShelf;
    int index;
};

#endif  // ITERATOR_SRC_BOOKSHELFITERATOR_H_
