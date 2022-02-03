#include <iostream>

using namespace std;


int main () {

  int x,userinput,i,num,power,sum;


cout<<"enter number " ;
cin>>num;

userinput=num; //saveing the user number



power=1;
sum=0;

while( num>0) {

x=num%10; //taking last number

num=num/10;//removing last number


        power=1;

        for(i=0; i<3; i++){ //cube the last number

        power=power*x;

        }


sum=sum+power; //adding the cubed number



}




//printing output

if (sum==userinput){

  cout<<" Armstrong number ";
}

else {

 cout<<" not an Armstrong number ";

}




   return 0;
}

