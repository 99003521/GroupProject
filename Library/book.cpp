#include "book.h"
#include<iostream>

Book::Book():id(0),price(0),name(NULL),auth(NULL),pages(0){}

Book::Book(int i,string n,string a,int p, int pa):id(i),name(n),auth(a),price(0),pages(p){}

Book::Book(int i,string n):id(i),name(n){}

void Book::update(){

}
int Book::getId(){
    return this->id;
}
string Book::getName(){
    return this->name;
}