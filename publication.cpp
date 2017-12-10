#include "publication.h"

Publication::Publication ()
{

}

string Publication::getTitle()
{
    return Title;
}

int Publication::getAvaliableAmount()
{
    return AvaliableAmount;
}

void Publication::toRent()
{
    AvaliableAmount--;
}

void Publication::fromRent()
{
    AvaliableAmount++;
}

string Publication::getID()
{
    return this->ID;
}


