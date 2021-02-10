#include "book.h"
#include "library.h"
#include <gtest/gtest.h>
#include <iostream>
#include <fstream>
#include <string.h>

namespace {
    TEST(Test, Addition) {
        
        // fstream fin;
        string myText;
        ifstream MyReadFile("info.csv");
        Library l;
        while (getline (MyReadFile, myText)){
            // Output the text from the file
            // cout << myText+"\n";
            vector<string> readL;    
            stringstream ss(myText);

            while (ss.good()) {
                string substr;
                getline(ss, substr, ',');
                readL.push_back(substr);
            }
            cout<<"\n************\n";
            for (int i=0;i<readL.size();i++){
                cout<<(readL.at(i))<<"\n";
            }
            cout<<"\n************\n";
            string s = readL.at(0);
            stringstream geek(s);
            int x = 0; 
            geek >> x; 
            Book temp(x,readL.at(1));
            l.add(temp);
        }
        l.display();
        // MyReadFile.close();
        
        MyReadFile.close();

        Book b1(1,"Book1","Aman",200,1500);
        Book b2(2,"Book2","RK",300,1450);
        Book b3(3,"Book3","Aishwarya",350,1750);
        Book b4(4,"Book4","Adarshana",400,1800);
        Book b5(5,"Book5","Abishek",450,1850);
        
        l.add(b1);
        l.add(b2);
        l.add(b3);
        l.add(b4);
        l.add(b5);
        // cout<<l.at(0);
        b1.displayE();
        b2.displayE();
        b3.displayE();
        b4.displayE();
        b5.displayE();
        EXPECT_EQ(1,b1.getId());
        EXPECT_EQ("Book1",b1.getName());
        EXPECT_EQ("Aman",b1.getAuth());
        EXPECT_EQ(200,b1.getPages());
        EXPECT_EQ(1500,b1.getPrice());
        EXPECT_EQ(2,b2.getId());
        EXPECT_EQ("Book2",b2.getName());
        EXPECT_EQ("RK",b2.getAuth());
        EXPECT_EQ(300,b2.getPages());
        EXPECT_EQ(1450,b2.getPrice());
        EXPECT_EQ(3,b3.getId());
        EXPECT_EQ("Book3",b3.getName());
        EXPECT_EQ("Aishwarya",b3.getAuth());
        EXPECT_EQ(350,b3.getPages());
        EXPECT_EQ(1750,b3.getPrice());
        EXPECT_EQ(4,b4.getId());
        EXPECT_EQ("Book4",b4.getName());
        EXPECT_EQ("Adarshana",b4.getAuth());
        EXPECT_EQ(400,b4.getPages());
        EXPECT_EQ(1800,b4.getPrice());
        EXPECT_EQ(5,b5.getId());
        EXPECT_EQ("Book5",b5.getName());
        EXPECT_EQ("Abishek",b5.getAuth());
        EXPECT_EQ(450,b5.getPages());
        EXPECT_EQ(1850,b5.getPrice());
        
        
    }
    // TEST(Test, Display) {

    //     Book b1(1,"Book1");
    //     // Book b2(2,"Book2");
    //     // Book b3(3,"Book3");
    //     // Book b4(4,"Book4");
    //     // Book b5(5,"Book5");
    //     Library l;
    //     l.add(b1);
    //     // l.add(b2);
    //     // l.add(b3);
    //     // l.add(b4);
    //     // l.add(b5);
    //     cout<<"\n***\n";
    //     l.display();
    //     cout<<"\n***\n";
    //     // EXPECT_EQ("",b1.getId());
    //     EXPECT_EQ("\nBook id: 1\n\nName: Book1\n",l.display());
        
    // }
}

