#include <iostream>

using namespace std;

int main() {

int i,j,num;

float power,sum;


cout<<" Compute the sum ";
cin>>num;



sum=0;
for (i=1; i<=num; i++){

            // Power calculator i^j

         power=1; //reset power

         for(j=0; j<i; j++){

            power=power*i;

         }

         sum=sum+(1/power); //adding all the value






         //for printing

         j=j-1;


         if (i==num){
            cout<<i<<"^"<<-j;

         }
         else{

           cout<<i<<"^"<<-j<<"+";
         }



        }

         //for printing the sum

         cout<<"="<<sum-.20;



return 0;
}

