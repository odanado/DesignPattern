#include "gtest/gtest.h"

#include "../src/BookShelf.h"

class BookShelfTest : public ::testing::Test {
 protected:
    virtual void SetUp() {}
    BookShelf bookShelf{4};
};

TEST_F(BookShelfTest, append) {
    bookShelf.appendBook(Book("Around the World in 80 Days"));
    bookShelf.appendBook(Book("Bible"));
    bookShelf.appendBook(Book("Cinderella"));
    bookShelf.appendBook(Book("Daddy-Long-Legs"));

    EXPECT_EQ(4, bookShelf.getLength());
}

