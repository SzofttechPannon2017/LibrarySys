#ifndef RESERVATION_H
#define RESERVATION_H
#include <string>
#include "publication.h"
#include "user.h"
#include <iostream>
using namespace std;

class Reservation
{
    User user;
    Publication publication;


public:
    Reservation();
    Reservation(User &u, Publication &p);
    User getUser();
    Publication getPublication();
};

#endif // RESERVATION_H
