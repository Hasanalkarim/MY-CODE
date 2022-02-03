#include <iostream>

using namespace std;

int main () {

int a,b;

cout<<"inter first number";
cin>>a;

cout<<"second first number";
cin>>b;


 if (a>b){

                a=a-1;

             for (b; b<=a; b++){

                  cout<<b<<", ";

                               }

                a=a+1;
                cout<<a;


 }
 else {
             b=b-1;

             for (a; a<=b; a++){

                cout<<a<<", ";

                              }


             b=b+1;
             cout<<b;


 }








return 0;

}
