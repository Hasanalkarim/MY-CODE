#include <iostream>

using namespace std;

int main () {


int integer;

float decimal,x;

cout<<" Enter a number ";
cin>>x;


if (x>=0) {

    integer=x;          //get the integer part

    decimal= x-integer; //get the decimal part

                if(decimal>0) { //check is decimal non zero

                              cout<<"Floating-point-number";

                              }
                else {

                     cout<<"Integer";

                     }

          }


else {
    integer=x;          //get the integer part

    decimal= -1*(x-integer); //get the decimal part

                if(decimal>0) {

                              cout<<"Floating-point-number";

                              }
                else {

                     cout<<"Integer";

                     }

       }



























return 0;
}
