#include <iostream>

using namespace std;


int main () {


float x,y,z;


cin>>x;

cin>>y;

cin>>z;


if (x>y) {
       if (x>z) {
              if (y>z) {

                   cout<<"largest: "<<x<<endl;
                   cout<<"smallest: "<<z<<endl;
              }
              else {
                     cout<<"largest: "<<x<<endl;
                       cout<<"smallest: "<<y<<endl;
              }

       }
       else {
             cout<<"largest: "<<z<<endl;
             cout<<"smallest: "<<y<<endl;
       }
}



else {

     if (y>z) {
            if(x>z) {

                cout<<"largest: "<<y<<endl;
               cout<<"smallest: "<<z<<endl;
            }
            else {

                 cout<<"largest: "<<y<<endl;
                  cout<<"smallest: "<<x<<endl;
            }
     }
     else {

       cout<<"largest: "<<z<<endl;
       cout<<"smallest: "<<x<<endl;
     }
}












    return 0;
}
