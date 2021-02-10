#include "book.h"
#include "library.h"
#include <gtest/gtest.h>
#include <iostream>
#include <fstream>
#include <string.h>

namespace {
    TEST(Test, Addition) {
        
        fstream fin;
        string myText;
        ifstream MyReadFile("info.csv");
        while (getline (MyReadFile, myText)){
        // Output the text from the file
        cout << myText;
        }
        MyReadFile.close();

        Book b1(1,"Book1");
        Book b2(2,"Book2");
        // Library.add(b1);
        // Library.add(b2);
        EXPECT_EQ(1,b1.getId());
        EXPECT_EQ("Book1",b1.getName());
        
    }
    TEST(Test, Display) {

        Book b1(1,"Book1");
        Book b2(2,"Book2");
        Library lib;
        lib.add(b1);
        lib.add(b2);
        b1.displayBook();     
        EXPECT_EQ("Book1\nBook2\n",lib.display());
        
    }

    TEST(Test, remove) {

        Book b1(1,"Book1");
        Book b2(2,"Book2");
        Library lib2;
        lib2.add(b1);
        lib2.add(b2);

        lib2.remove(b1);
        lib2.remove(b2);
        b1.displayE();
        // EXPECT_EQ("",b1.getId());
        EXPECT_EQ("",lib2.display());
}
}