#include "user.h"


User::User()
{

}

User::User(const string &N, const string &R, const string &id ):
    Name(N), Role(R), ID(id)
{
    Balance=0;
}

User::User(const string &N, const string &R, const string &id,int B):
    Name(N), Role(R), Balance(B), ID(id)
{

}

int User::getBalance(const string &user)
{
    return Balance;
}

string User::getName()
{
    return Name;
}

void User::setBalance(int balance)
{
    this->Balance=balance;
}

void User::increaseBalance(int balance)
{
    this->Balance+=balance;
}

void User::decreaseBalance(int balance)
{
    this->Balance-=balance;
}

string User::getID()
{
    return this->ID;
}

/*
inline bool User::operator ==(const User &left, const User &right)
{
       return (left.ID==right.ID);
}

*/

