#include "book.h"

Book::Book()
{

}

Book::Book(const string &ID, const string &t, int &origamount, int &avalamount, const string &a, const int &y)

{
    this->ID=ID;
    this->Title=t;
    this->Author=a;
    this->Year=y;
    this->OriginalAmount=origamount;
    this->AvaliableAmount=avalamount;
}

