#include "library.h"
#include<iostream>
#include<vector>
#include<string>

// fstream fin;

Library::Library(){}

Library::Library(double i, string n):l_number(i),l_name(n){}

void Library::add(Book ref){
    V.push_back(ref);
}
void Library::remove(Book ref){
    // List.erase(ref);
}
string Library::display(){
    string str;
    for (auto i = V.begin(); i != V.end(); ++i) 
        cout << *i << " "; 
    cout<<"\n\n";
    return str;
}
