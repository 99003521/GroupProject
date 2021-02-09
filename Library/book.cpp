/**
 * @file book.cpp
 * @author Aman Ajay Kalaskar
 *         Aiswarya P S
 *         Ragul Krishna
 *         Adharsa Mohan R
 * @brief 
 * @version 0.1
 * @date 2021-02-10
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include<iostream>
/**
 * @brief Construct a new Book:: Book object
 * Empty Constr
 * 
 */

Book::Book():id(0),price(0),name(NULL),auth(NULL),pages(0){}
/**
 * @brief Construct a new Book:: Book object
 * Param constr with all details of a book
 * 
 * @param i 
 * @param n 
 * @param a 
 * @param p 
 * @param pa 
 */
Book::Book(int i,string n,string a,int p, int pa):id(i),name(n),auth(a),price(0),pages(p){}
/**
 * @brief Construct a new Book:: Book object
 * Constr
 * 
 * @param i 
 * @param n 
 */
Book::Book(int i,string n):id(i),name(n),price(0),pages(0){}
/**
 * @brief Updation
 * 
 */
void Book::update()
{
}
/**
 * @brief Member function for getting ID
 * 
 * @return int 
 */
int Book::getId(){
    return this->id;
}
/**
 * @brief Member function for name
 * 
 * @return string 
 */
string Book::getName(){
    return this->name;
}
/**
 * @brief Member function for  Author
 * 
 * @return string 
 */
string Book::getAuth(){
    return this->auth;
}
/**
 * @brief Member function for number of pages of a book
 * 
 * @return int 
 */
int Book::getPages(){
    return this->pages;
}
/**
 * @brief Member function for Price of the book
 * 
 * @return int 
 */
int Book::getPrice(){
    return this->price;
}
/**
 * @brief Member function for displaying all the data
 * 
 * @return string 
 */
string Book::displayE(){
    string dis="Book: "+to_string(this->id)+"\nName: "+this->name+"\nAuthor: "+this->auth+"\nPages: "+to_string(this->pages)+"\nPrice: \n"+to_string(this->price);
    cout<<dis;
    return dis;
}
