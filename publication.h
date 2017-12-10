#ifndef PUBLICATION_H
#define PUBLICATION_H
#include <string>
#include <iostream>

using namespace std;

class Publication
{


protected:
    string ID;
    string Title;
    int OriginalAmount;
    int AvaliableAmount;
public:

    Publication();
    string getTitle();
    int getAvaliableAmount();
    void toRent();
    void fromRent();
    string getID();



};

#endif // PUBLICATION_H
