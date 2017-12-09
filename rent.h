#ifndef RENT_H
#define RENT_H
#include <string>;
#include "publication.h"
#include "user.h"

using namespace std;

class Rent
{
    User user;
    Publication publication;

public:
    Rent();
    Rent(User &u, Publication &p);
};

#endif // RENT_H
