#ifndef USER_H
#define USER_H

#include <string>
#include <iostream>

using namespace std;


class User
{
    string Name;
    string Role;


public:

    User(const string &N, const string &R);

};

#endif // USER_H
