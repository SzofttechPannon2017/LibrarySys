#ifndef PRESS_H
#define PRESS_H
#include "publication.h"

class Press : public Publication
{

    string Release;



public:
    Press();
    Press(const string &ID, const string &t, int &origamount, int &avalamount, const string &r );
};

#endif // PRESS_H
