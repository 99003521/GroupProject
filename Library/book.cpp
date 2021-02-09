#include "book.h"
#include<iostream>
/**
 * @brief Empty Constructor
 * 
 */

Book::Book():id(0),price(0),name(NULL),auth(NULL),pages(0){}
/**
 * @brief Parameterized Constructor
 * 
 * @param i 
 * @param n 
 * @param a 
 * @param p 
 * @param pa 
 */

Book::Book(int i,string n,string a,int p, int pa):id(i),name(n),auth(a),price(0),pages(p){}
/**
 * @brief Parameterized Constructor
 * 
 * @param i 
 * @param n 
 */

Book::Book(int i,string n):id(i),name(n),price(0),pages(0){}
/**
 * @brief Function update
 * 
 */

void Book::update(){

}
/**
 * @brief Function getId
 * 
 * @return int 
 */
int Book::getId(){
    return this->id;
}
/**
 * @brief Function getName
 * 
 * @return string 
 */
string Book::getName(){
    return this->name;
}
/**
 * @brief Function getAuth
 * 
 * @return string 
 */
string Book::getAuth(){
    return this->auth;
}
/**
 * @brief Function getPages
 * 
 * @return int 
 */
int Book::getPages(){
    return this->pages;
}
/**
 * @brief Function getPrice
 * 
 * @return int 
 */
int Book::getPrice(){
    return this->pages;
}
/**
 * @brief Function displayE
 * 
 * @return string 
 */
string Book::displayE(){
    string dis="Book: "+to_string(this->id)+"\nName: "+this->name+"\nAuthor: "+this->auth+"\nPages: "+to_string(this->pages)+"\nPrice: "+to_string(this->price);
    cout<<dis;
    return dis;
}

