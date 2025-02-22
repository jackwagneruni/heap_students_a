Week 1
Address Header
private:
string street;
string city;
string state;
string zipCode;

public:
Address();
void init
printAddress make const

address cpp
include address.h
Address: Address() : street(""), city(""), state(""), zipCode("")
init the address
print address

date header
#ifndef DATE_H
#define DATE_H
include string
create a class for date
private:
int month, day, year;
public:
Date();
void init const
void printDate make a const
};

date.cpp
#include "date.h"
#include <sstream>
#include <iostream>
Date() : month(1), day(1), year(2000)
make a demlimiter = /
create a sstream for datastr
getline for month
getline for day
getline for year

void print the date, const contain an array of the months of the year