#include <iostream>

using namespace std;

int main() {

int i,j,num;

//talking input

cout<<"Print the shape ";
cin>>num;



for (i=1; i<=num; i++){


         for(j=1; j<=i; j++){// every time after j+1 we print them

              cout<<j<<" ";

         }

         cout<<endl<<endl;

      }


return 0;
}

