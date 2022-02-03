//6.write a program that converts the number of days into month and years and days
#include <iostream>
using namespace std;

int main ( ) {


  int year,month,day,d,e; //d=e=remaining days

   cout<<"enter day "<<endl;
   cin>>day;

   year=day/365;

   d=day%365; //remaining days from years

   month=d/30;

   e=d%30; //last remaining days


   cout<<year<<" years "<<month<<" months "<<e<<" days.";



   return 0;

}
