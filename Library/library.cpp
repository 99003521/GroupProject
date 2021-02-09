
/**
 * @file library.cpp
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
#include <fstream> 
#include<vector>
#include<string>

// fstream fin;

Library::Library(){}

Library::Library(double i, string n):l_number(i),l_name(n){}
/**
 * @brief Add Function
 * 
 * @param ref 
 */
void Library::add(Book ref){
    V.push_back(ref);
}
/**
 * @brief Remove Function
 * 
 * @param ref 
 */
void Library::remove(Book ref){
    // V.erase(ref);
}
/**
 * @brief display function
 * 
 * @return string 
 */
string Library::display(){
    string str;
    for (int i=0;i<V.size(); ++i){
        cout<<(V.at(i)).getName()<<"\n";
        str+=(V.at(i)).getName()+"\n";
    }
    return str;
}

