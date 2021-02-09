#include "book.h"
#include "library.h"
#include <gtest/gtest.h>

namespace {
    TEST(Test, Addition) {

        Book b1(1,"Book1");
        Book b2(2,"Book2");
        Library l;
        l.add(b1);
        l.add(b2);
        EXPECT_EQ(1,b1.getId());
        EXPECT_EQ("Book1",b1.getName());
        
    }
    TEST(Test, Display) {

        Book b1(1,"Book1");
        Book b2(2,"Book2");
        Library l;
        l.add(b1);
        l.add(b2);
        b1.displayE();
        // EXPECT_EQ("",b1.getId());
        EXPECT_EQ("Book1\nBook2\n",l.display());
        
    }
}