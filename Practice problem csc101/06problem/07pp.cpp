#include <iostream>

using namespace std;

int main() {

int i,j,num,sum,factorial;




cout<<"Compute the sum of factorial ";
cin>>num;



sum=0;
for (i=1; i<=num; i++){


           //calculating j!

          factorial=1;
         for(j=i; j>0; j=j-1){

          factorial=factorial*j;

         }

         sum=sum+factorial; //adding all the factorial






         //for printing

         j=j-1;


         if (i==num){
            cout<<i<<"!";

         }
         else{

           cout<<i<<"!"<<"+";
         }



        }

         //for printing the sum

         cout<<"="<<sum;



return 0;
}

