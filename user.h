#ifndef USER_H
#define USER_H

#include <string>
#include <iostream>
#include <list>
#include "publication.h"

using namespace std;


class User
{
    string Name;
    string Role;
    int Balance;
    string ID;
public:
    User();
    User(const string &N, const string &R, const string &id);
    User(const string &N, const string &R, const string &id, int B);
    int getBalance(const string &user);
    string getName();
    void setBalance(int balance);
    void increaseBalance(int balance);
    void decreaseBalance(int balance);
};

#endif // USER_H
