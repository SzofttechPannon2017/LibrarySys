#ifndef BOOK_H
#define BOOK_H

#include "publication.h"
#include "string"
using namespace std;


class Book : public Publication

{
    string Author;
    int Year;



public:
    Book();
    Book(const string &ID, const string &t, int &origamount,  int &avalamount , const string &a,const int &y );

};

#endif // BOOK_H
