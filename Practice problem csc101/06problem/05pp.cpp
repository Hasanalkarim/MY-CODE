#include <iostream>

using namespace std;

int main() {

int i,j,num,power,sum;


cout<<" Compute the sum,S";
cin>>num;



sum=0;
for (i=1; i<=num; i++){

            // Power calculator i^i

         power=1; //reset power

         for(j=1; j<=i; j++){

            power=power*i;

         }

         sum=sum+power; //adding all the value






         //for printing

         j=j-1;


         if (j==num){
            cout<<j<<"^"<<j;

         }
         else{

           cout<<j<<"^"<<j<<"+";
         }



        }

         //for printing the sum

         cout<<"="<<sum;



return 0;
}

















