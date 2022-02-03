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

                            //large x
                            //small z
                            
                            r=(x-z)-y;
                            cout<<"Weird result is:"<<"("<<x<<"-"<<z<<")-"<<y<<"="<<r;


                            }
                    else { //large x
                           //small y


                            y=(-1)*y;

                            r=(x+y)-z;

                            cout<<"Weird result is:"<<"("<<x<<"+"<<y<<")-"<<z<<"="<<r;

                        }
                    }


            else   {  //large z
                     //small y

                     r=y-(z-x);

                     cout<<"Weird result is:"<<x<<"-("<<z<<"-"<<y<<")="<<x;

                   }
         }



else {

        if (y>z) {
                if(x>z) {  //large y
                            //small z


                         r=z-(y-x);
                         cout<<"Weird result is:"<<x<<"-("<<y<<"-"<<z<<")="<<r;
                        }
                       
                else { //large y
                        //small x

                      r=x-(y-z);

                      cout<<"Weird result is:"<<z<<"-("<<y<<"-"<<x<<")="<<r;
                     }
        }
        else { //large z
               //small x
              r=x-(z-y);
              cout<<"Weird result is:"<<y<<"-("<<z<<"-"<<x<<")="<<r;
             }
    }




return 0;

}
