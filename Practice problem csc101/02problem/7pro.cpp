//7.write a program that converts the number of hours as input and
//displays the equivalent number of weeks,days and hours.
#include <iostream>
using namespace std;

int main ( ) {


  int hr,week,day,hour,DAY;

   cout<<"enter hour "<<endl;
   cin>>hr;

   day=hr/24;

   hour=hr%24; //remaining hour from day

   week=day/7;

   DAY=day%7;


   cout<<week<<" Weeks "<<DAY<<" Days "<<hour<<" Hours.";



   return 0;

}
