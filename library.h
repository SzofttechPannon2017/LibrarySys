#ifndef LIBRARY_H
#define LIBRARY_H
#include <list>
#include "publication.h"
#include "user.h"
#include "book.h"
#include "rent.h"
#include "reservation.h"

 class Library

{
    list<User> Users;
    list<Publication> Publications;
    list<Rent> Rents;
    list<Reservation> Reservations;

public:
    Library();
    void addUser(const string &N, const string &R, const string &id, const int &B);
    void addUser(const string &N, const string &R, const string &id);
    User findUser(const string &uname);
    int getUserBalance(const string &user);
    void setUserBalance(const string &user, const int &balance);
    void increaseUserBalance(const string &user, const int &balance);
    void decreaseUserBalance(const string &user, const int &balance);
    void addBook(const string &ID, const string &t, const string &a, const int &y, int origamount, int avalamount);
    int LibrarySize();
    int rentSize();
    string Find(const string &title);
    Publication FindPub(const string &title);
    void addRent( User &u, Publication &p);
    void removeRent(User &u, Publication &p);
    void addReservation( User &u, Publication &p);
    void removeReservation( User &u, Publication &p);
};

#endif // LIBRARY_H
