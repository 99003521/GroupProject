#ifndef __LIBRARY_H
#define __LIBRARY_H
#include<string>
#include<ostream>
#include<vector>
#include "book.h"
using namespace std;
class Library{
    string l_name;
    double l_number;
    int books;
    vector <Book> V;

    public:
    Library();
    Library(double,string);
    Library update();
    // friend ostream &operator<<();
    string display();
    void remove(Book);
    void add(Book);
    void clr();
    // void readLib(string);
};
#endif