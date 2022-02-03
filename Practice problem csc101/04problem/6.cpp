#include <iostream>

using namespace std;

int main () {


int i,n ;


cout<<"how many numbers";
cin>>n;



    if (n%2==0)  {


        n=n-2;

              for (i=1; (2*i-1)<=n; i++){


                cout<<(2*i-1)<<",";

                                       }

                 cout<<n+1;


                  }

    else {

                n=n-1;


             for (i=1; (2*i-1)<=n; i++){


                cout<<(2*i-1)<<",";

                                       }

                n=n+1;

                cout<<n;




         }





return 0;
}

