/*
Author: Asmita Subedi
Roll No: 0346"A"
Title: An interface of Book Class
Date: 3/23/2015
*/

#include<string>
#include "Author.h"
using namespace std;

#ifndef BOOK_H
#define BOOK_H


class Book
{
    protected:
        string name;
        Author author;
        double price;
        int quantity;

    public:

        void setPrice (double);
		string getBookName();
		Author getAuthorName();
		double getPrice();
		void setQuantity (int);
		int getQuantity();
		virtual string toString()=0;

};
#endif


