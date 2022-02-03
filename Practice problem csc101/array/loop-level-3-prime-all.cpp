#include <iostream>

using namespace std;

int main () {

int i,j,first,second,isprime,sum,counter;

//taking input

cout<<"Print Shape ";
cin>>first;

cout<<"Print Shape ";
cin>>second;


if(second<first){

j=second;

second=first;

first=j;

}


sum=0;

counter=0;

for(i=first; i<=second; i++) {


            isprime=1;

            for(j=2; j<i; j++){
                        if(i%j==0){

                        isprime=0;
                              
                              break;

                        }
            }

                 if(isprime!=0){

                     cout<<i<<" "; 

                     sum=sum+i;

                     counter=counter+1;

                 }



    
      }

cout<<endl<<" tatall is "<<sum;
cout<<endl<<" tatall prime number is "<<counter;




//first=3

//second=10

// i=3

// j=2

//j++=3

//i++=4



 







return 0;

}