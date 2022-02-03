#include <iostream>

using namespace std;

int main () {

int first,second,i,j,sum,isprime,userinput;

//taking input

cout<<"First number ";
cin>>first;

cout<<"Second number ";
cin>>second;


if(second<first){ //making first small

sum=second;

second=first;

first=sum;

}



for (i=first; i<=second; i++) {


         if(i>9) {


                 userinput=i;

                 sum=0;

                      while (i>0) {

                      sum=sum+i%10; //adding   the last number(i%10)

                      i=i/10;   //removing the last number

                      }

                 i=userinput;

                 isprime=1;//assuming x is prime


                      for (j=2 ; j<sum; j++){ //checking all numbet 1 to n prime or not

                              if (sum%j==0){

                                  isprime=0;

                                  break;
                              }

                      }


                   //printing output

                   if(isprime==1) {

                        cout<<userinput<<" ";

                       }



               }




}




return 0;

}
