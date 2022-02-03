#include <iostream>

using namespace std;


int main () {


int x,y,z;


cin>>x;

cin>>y;

cin>>z;


if (x>y) {
       if (x>z) {
              if (y>z) {
                      
                   cout<<x<<endl<<y<<endl<<z;
              }
              else {

                    cout<<x<<endl<<z<<endl<<y;
              }

       }
       else {

         cout<<z<<endl<<x<<endl<<y;
       }
}



else {

     if (y>z) {
            if(x>z) {
                 
                cout<<y<<endl<<x<<endl<<z;  

            }
            else {

                cout<<y<<endl<<z<<endl<<x;
            }
     }
     else {

        cout<<z<<endl<<y<<endl<<x;

     }
}












    return 0;
}