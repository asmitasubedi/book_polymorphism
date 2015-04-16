/*
Author: Asmita Subedi
Roll No: 0346"A"
Title: An implementation of Author Class
Date: 3/23/2015
*/

#include<iostream>
#include<string>
#include "Author.h"

using namespace std;

Author :: Author(string name, string email, char gender)
{
            this->name = name;
            this->gender = gender;
            setEmail(email);
}

Author :: Author(){

}

void Author::setEmail (string email)
{
            this->email=email;
}

string Author :: getName()
{
			return name;
}

string Author :: getEmail()
{
			return email;
}

char Author :: getGender()
{
			return gender;
}

string Author :: toString()
{
            return getName() + " at " + getEmail();
}


