#include "book.h"
#include<iostream>

Book::Book():id(0),price(0),name(NULL),auth(NULL),pages(0){}

Book::Book(int i,string n,string a,int p, int pa):id(i),name(n),auth(a),price(0),pages(p){}

Book::Book(int i,string n):id(i),name(n),price(0),pages(0){}

void Book::update(){

}
int Book::getId(){
    return this->id;
}
string Book::getName(){
    return this->name;
}
string Book::getAuth(){
    return this->auth;
}
int Book::getPages(){
    return this->pages;
}
int Book::getPrice(){
    return this->pages;
}
string Book::displayE(){
    string dis="Book: "+to_string(this->id)+"\nName: "+this->name+"\nAuthor: "+this->auth+"\nPages: "+to_string(this->pages)+"\nPrice: "+to_string(this->price);
    cout<<dis;
    return dis;
}

