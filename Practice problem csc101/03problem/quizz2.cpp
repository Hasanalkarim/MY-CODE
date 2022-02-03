#include <iostream>

using namespace std;

int main () {


int x,y,z,r;


//input

cout<<"Please enter x: ";
cin>>x;

cout<<"Please enter y: ";
cin>>y;

cout<<"Please enter z: ";
cin>>z;


//calculation

if (x>y) {
       if (x>z) {
              if (y>z) {



                           r=(x-z)-y;
                    cout<<"Weird result is:"<<"("<<x<<"-"<<z<<")-"<<y<<"="<<r;




              }
              else {
                    y=(-1)*y;

                   r=(x+y)-z;

                cout<<"Weird result is:"<<"("<<x<<"+"<<y<<")-"<<z<<"="<<r;


              }

       }
       else {

               r=y-(z-x);

                  cout<<"Weird result is:"<<x<<"-("<<z<<"-"<<y<<")="<<x;



       }
}



else {

     if (y>z) {
            if(x>z) {

              r=z-(y-x);
                   cout<<"Weird result is:"<<x<<"-("<<y<<"-"<<z<<")="<<r;



            }
            else {

                   r=x-(y-z);


                 cout<<"Weird result is:"<<z<<"-("<<y<<"-"<<x<<")="<<r;



            }
     }
     else {

         r=x-(z-y);
                    cout<<"Weird result is:"<<y<<"-("<<z<<"-"<<x<<")="<<r;



     }
}








return 0;

}
