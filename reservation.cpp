#include "reservation.h"

Reservation::Reservation()
{

}

Reservation::Reservation(User &u, Publication &p):
    user(u), publication(p)
{

}

User Reservation::getUser()
{
    return this->user;
}

Publication Reservation::getPublication()
{
 return this->publication;
}
