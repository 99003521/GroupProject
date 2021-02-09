#ifndef __BOOK_H
#define __BOOK_H
#include<string>
using namespace std;
class Book{
    int id;
    int price;
    string name;
    string auth;
    int pages;
    public:
    Book();
    Book(int,string,string,int,int);
    Book(int,string);
    void update();
    void display();
    string displayE();
    int getId();
    string getName();
    string getAuth();
    int getPages();
    int getPrice();
};
#endif