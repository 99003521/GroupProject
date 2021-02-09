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
    // V.erase(ref);
}
string Library::display(){
    string str;
    for (int i=0;i<V.size(); ++i){
        cout<<(V.at(i)).getName()<<"\n";
        str+=(V.at(i)).getName()+"\n";
    }
    return str;
}
