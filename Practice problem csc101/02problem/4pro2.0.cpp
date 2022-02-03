//4.write a program that takes the height of the user in meter and converts it to feet.


#include <iostream>
using namespace std;

int main () {

 float meter, feet, remaining_factors;

 int feet_int ,inch;



 cout<<"enter height in meter "<<endl;
 cin>>meter;


  feet=meter*3.28084; //meter to feet relations

  feet_int=feet;

  remaining_factors=feet-feet_int;

  inch=remaining_factors*12;

   cout<<endl<<feet_int<<" feet "<<inch<<" inches ";

return 0;
}
