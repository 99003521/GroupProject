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

        library b1(1,"Book1");
        library b2(2,"Book2");
        library.add(b1);
        library.add(b2);
        EXPECT_EQ(1,b1.getId());
        EXPECT_EQ("Book1",b1.getName());
        
    }
    TEST(Test, Display) {

        library b1(1,"Book1");
        library b2(2,"Book2");
        library.add(b1);
        library.add(b2);
        b1.displayE();
        
        
        

        EXPECT_EQ("Book1\nBook2\n",l.display());
        
    }

    TEST(Test, remove) {

        library b1(1,"Book1");
        library b2(2,"Book2");
        library.remove(b1);
        library.remove(b2);
        b1.displayE();
        // EXPECT_EQ("",b1.getId());
        EXPECT_EQ("Book1\nBook2\n",l.display());
}

    
    
