#include "library.h"

Library::Library()
{

}

void Library::addUser(const string &N, const string &R, const string &id,const int &B)
{
 User U(N,R,id,B);
 this->Users.push_back(U);
}

void Library::addUser(const string &N, const string &R, const string &id)
{
    User U(N,R,id);
    this->Users.push_back(U);
}

 User Library::findUser(const string &uname)
{
    User u;
    auto it=Users.begin();
    for(; it!=Users.end(); ++it) {
        if (it->getName()==uname) {
            u=(*it);
        }
    }
return u;
}

int Library::getUserBalance(const string &user)
{
    auto it=Users.begin();
    for(; it!=Users.end(); ++it) {
        if (it->getName()==user) {
            return it->getBalance(it->getName());
        }
    }
}

void Library::setUserBalance(const string &user, const int &balance)
{
    auto it=Users.begin();
    for(; it!=Users.end(); ++it) {
        if (it->getName()==user) {
            it->setBalance(balance);
        }
    }
}

void Library::increaseUserBalance(const string &user, const int &balance)
{
    auto it=Users.begin();
    for(; it!=Users.end(); ++it) {
        if (it->getName()==user) {
            it->increaseBalance(balance);
        }
    }
}

void Library::decreaseUserBalance(const string &user, const int &balance)
{
    auto it=Users.begin();
    for(; it!=Users.end(); ++it) {
        if (it->getName()==user) {
            it->decreaseBalance(balance);
        }
    }
}

void Library::addBook(const string &ID, const string &t, const string &a, const int &y, int origamount, int avalamount)
{
    Book B(ID, t, origamount,avalamount, a, y);
    Publications.push_back(B);
}

int Library::LibrarySize()
{
    return Publications.size();
}

int Library::rentSize()
{
    return Rents.size();
}

string Library::Find(const string &title)
{

    string megvan="Nincs ilyen!";
    auto it=Publications.begin();

    for(;it!=Publications.end(); ++it) {
        if(it->getTitle()==title) {
            megvan=(*it).getTitle();
        }

    }

    return megvan;
}

Publication Library::FindPub(const string &title)
{
  Publication p;

  auto it=Publications.begin();

  for(;it!=Publications.end(); ++it) {
      if(it->getTitle()==title) {
          p=(*it);
      }

  }
return p;

}

void Library::addRent( User &u, Publication &p)
{
    Rent R(u,p);
    Rents.push_back(R);
}




/*
 void addRent(const string &user, const string &publ)
{
    User U;
    Publication P;
    U=this->findUser(user);

    Rent R(U,P);



}
*/

