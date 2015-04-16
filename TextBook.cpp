/*
Author: Asmita Subedi
Roll No: 0346"A"
Title: An implementation of TextBook Class Derived from base class 'Book'
Date: 3/27/2015
*/
#include<iostream>
#include <string>
#include<sstream>
#include "TextBook.h"
using namespace std;

TextBook :: TextBook(string name, Author author, double price, int quantity, string subject, string level, string edition)
{
    this->name = name;
    this->author = author;
    setPrice(price);
    setQuantity(quantity);
    this->subject = subject;
    this->level = level;
    setEdition(edition);
}

string TextBook :: getSubjectName()
{
        return subject;
}

string  TextBook :: getLevel()
{
        return level;
}

void TextBook :: setEdition(string edition)
{
    this->edition = edition;
}

string TextBook :: getEdition()
{
    return edition;
}

double TextBook :: getValue()
{
    return price*quantity;
}

string TextBook :: toString()
{
    stringstream totalValue, edition;
    totalValue << getValue();
    edition << getEdition();
    return "Textbook: " + getBookName() + " of Subject: " + getSubjectName() + " of Level: " + getLevel()+ " and Edition: " + edition.str() + " with Total Price: " + totalValue.str();

}


