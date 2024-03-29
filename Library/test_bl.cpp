#include "book.h"
#include "library.h"
#include <gtest/gtest.h>
#include <iostream>
#include <fstream>
#include <string.h>

namespace {
    TEST(Test, Addition) {
        
        string myText;
        ifstream MyReadFile("info.csv");
        while (getline (MyReadFile, myText)){
        // Output the text from the file
        cout << myText;
        }
        vector<string> readL;
 
        stringstream ss(myText);
 
        while (ss.good()) {
            string substr;
            getline(ss, substr, ',');
            readL.push_back(substr);
        }
        cout<<"\n************\n";
        for (int i=0;i<readL.size(); ++i){
            cout<<(readL.at(i))<<"\n";
        }
        cout<<"\n************\n";
        MyReadFile.close();

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

