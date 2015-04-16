/*
Author: Asmita Subedi
Roll No: 0346"A"
Title:  An implementation of Novel Class Derived from base class 'Book'
Date: 3/27/2015
*/

#include<iostream>
#include <string>
#include<sstream>
#include "Novel.h"
using namespace std;


Novel :: Novel(string name, Author author, double price, int quantity, string genre, bool isfictional, int ratings)
{
    this->name = name;
    this->author = author;
    setPrice(price);
    setQuantity(quantity);
    this->genre = genre;
    this->isfictional = isfictional;
    setRatings(ratings);

}

void Novel :: setRatings( int ratings)
{
        this->ratings = ratings;
}

int Novel :: getRatings()
{
        return ratings;
}

string Novel :: getWhichGenre()
{
    return genre;
}

bool Novel :: getFic_NonFic()
{
    return isfictional;
}

double Novel :: getValue()
{
    return price*quantity;
}

string Novel :: toString()
{
    stringstream totalValue, rating;
    totalValue << getValue();
    rating << getRatings();
    return "Novel: " + getBookName() + " of Genre: " + getWhichGenre() + " with ratings(out 0f 10): " + rating.str() + " and total price: " + totalValue.str();
}

