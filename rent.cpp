#include "rent.h"


Rent::Rent()
{


}


Rent::Rent(User &u, Publication &p)
{
    this->user=u;
    this->publication=p;

    time_t rawtime;
      struct tm * timeinfo;
      char buffer[80];

      time (&rawtime);
      timeinfo = localtime(&rawtime);

      strftime(buffer,sizeof(buffer),"%d-%m-%Y %I:%M:%S",timeinfo);
      std::string str(buffer);
      this->startDate=str;

}

string Rent::getStartDate()
{
    return this->startDate;
}

User Rent::getUser()
{
    return this->user;
}

Publication Rent::getPublication()
{
 return this->publication;
}
