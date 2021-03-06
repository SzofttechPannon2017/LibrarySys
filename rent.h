#ifndef RENT_H
#define RENT_H
#include <string>
#include "publication.h"
#include "user.h"
#include <iostream>
#include <ctime>

using namespace std;

class Rent
{
    User user;
    Publication publication;
    string startDate;

public:
    Rent();
    Rent(User &u, Publication &p);
    string getStartDate();
    User getUser();
    Publication getPublication();
};

#endif // RENT_H
