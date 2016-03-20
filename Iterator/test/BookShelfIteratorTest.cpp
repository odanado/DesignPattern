#include "gtest/gtest.h"

#include "../src/BookShelfIterator.h"

class BookShelfIteratorTest : public ::testing::Test {
 protected:
    virtual void SetUp() {
        bookShelf.appendBook(Book("Around the World in 80 Days"));
        bookShelf.appendBook(Book("Bible"));
        bookShelf.appendBook(Book("Cinderella"));
        bookShelf.appendBook(Book("Daddy-Long-Legs"));
    }
    BookShelf bookShelf{4};
};

TEST_F(BookShelfIteratorTest, iterator) {
    Book book;
    auto it = bookShelf.iterator();

    EXPECT_TRUE(it->hasNext());
    book = it->next();
    EXPECT_EQ(book.getName(), "Around the World in 80 Days");

    EXPECT_TRUE(it->hasNext());
    book = it->next();
    EXPECT_EQ(book.getName(), "Bible");

    EXPECT_TRUE(it->hasNext());
    book = it->next();
    EXPECT_EQ(book.getName(), "Cinderella");

    EXPECT_TRUE(it->hasNext());
    book = it->next();
    EXPECT_EQ(book.getName(), "Daddy-Long-Legs");

    EXPECT_FALSE(it->hasNext());
}
