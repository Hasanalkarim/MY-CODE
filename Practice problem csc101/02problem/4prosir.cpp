//4.write a program that takes the height of the user in meter and converts it to feet.


#include <iostream>
using namespace std;

int main () {

 float meter,inch, cm,remaining_inch ;

 int foot;

 cout<<"enter height in meter "<<endl;
 cin>>meter;

 cm=meter*100;

 inch= cm / 2.54;

 foot = inch /12;

 remaining_inch =inch - foot*12;


 cout<<endl<<foot<<" feet "<<remaining_inch<<" inches "<<endl;

return 0;
}
