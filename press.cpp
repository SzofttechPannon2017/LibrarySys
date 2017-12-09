#include "press.h"

Press::Press()
{

}

Press::Press(const string &ID, const string &t, int &origamount, int &avalamount, const string &r)

{
this->ID=ID;
    this->Title=t;
    this->Release=r;
    this->OriginalAmount=origamount;
    this->AvaliableAmount=avalamount;
}
