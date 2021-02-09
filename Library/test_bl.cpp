#include "book.h"
#include "library.h"
#include <gtest/gtest.h>

namespace {
    TEST(Test, Addition) {

        Book b1(1,"Book1");
        Library l;
        l.add(b1);
        EXPECT_EQ(1,b1.getId());
        EXPECT_EQ("Book1",b1.getName());
        
    }   
}