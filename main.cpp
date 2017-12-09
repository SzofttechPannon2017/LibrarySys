#include <iostream>
#include <list>
#include "user.h"
#include "press.h"
#include "book.h"
#include "library.h"
#include "rent.h"
#include <string>
using namespace std;

int main()
{

Library L;
L.addUser("Tóth Zoltán","Admin","Zoli",1587);
L.addUser("Erzsike","könytaros", "Dizsike" );
cout<<L.getUserBalance("Tóth Zoltán")<<endl;
L.setUserBalance("Tóth Zoltán",1000);
cout<<L.getUserBalance("Tóth Zoltán")<<endl;

L.increaseUserBalance("Tóth Zoltán",1000);
cout<<L.getUserBalance("Tóth Zoltán")<<endl;

L.decreaseUserBalance("Tóth Zoltán",1500);
cout<<L.getUserBalance("Tóth Zoltán")<<endl;

L.addBook("9636950121","A vörös kör", "Edgar Wallace", 1983,3,3);
L.addBook("9638554754","Passzív kiadatás", "Szlávy Bulcsú", 1997,5,5);

cout<<L.LibrarySize()<<endl;
cout<<L.Find("Passzív kiadatás")<<endl;
cout<<L.Find("Michelle")<<endl;
User U;
Publication P;
U=L.findUser("Tóth Zoltán");
P=L.FindPub("A vörös kör");
L.addRent(U,P);
cout<<L.rentSize()<<endl;




    return 0;
}
