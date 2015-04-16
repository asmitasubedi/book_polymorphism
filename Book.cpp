/*
Author: Asmita Subedi
Roll No: 0346"A"
Title: An implementation of Book Class
Date: 3/23/2015
*/

#include<iostream>
#include <string>
#include "Book.h"


using namespace std;

void Book :: setPrice (double price)
{
    this->price=price;
}

void Book :: setQuantity (int quantity)
{
    this->quantity = quantity;
}

string Book :: getBookName()
{
    return name;
}

Author Book::getAuthorName()
{
    return author;
}

double Book :: getPrice()
{
    return price;
}

int Book :: getQuantity()
{
    return quantity;
}

string Book:: toString()
{
    return getBookName() + " by " + author.toString() ;
}




