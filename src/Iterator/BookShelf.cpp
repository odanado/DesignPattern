#include "BookShelfIterator.hpp"

std::unique_ptr<Iterator<Book>> BookShelf::iterator() {
    return std::unique_ptr<BookShelfIterator>(new BookShelfIterator(*this));
}
