#include <iostream>

using namespace std;

int main() {



int first,second,i,j,isprime;


cout<<"enter first number ";
cin>>first;


cout<<"enter second number ";
cin>>second;



if(first>second){ //making first small so i can loop first to second

 i=first;

 first=second;

 second=i;


}



for (i=first; i<=second; i++){  //checking all the numbers in between two numbers


      isprime=1;//assuming x is prime


      for (j=2 ; j<i; j++){ //checking number individually from 2 to that number

                  if (i%j==0){

                     isprime=0;

                  }
       }


       if(isprime==1){ //printing the number if prime

          cout<<i<<" ";
       }


 }




return 0;

}


