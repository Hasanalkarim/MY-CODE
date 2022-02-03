#include <iostream>

using namespace std;

void armstrong(int *, int *); //7.

int main(){

int *number1,*userinput,*sum;


number1 = new int;

userinput = new int;

sum = new int;




      cout<<endl<<"<< 7. Amstrong number  >>"<<endl<<endl;

      cout<<"enter number ";
      cin>>*number1;

      *userinput=*number1; //saveing the user number

        

      armstrong(number1, sum);

     
      //printing output

    if (*sum==*userinput){

    cout<<" Armstrong number ";
    }

    else {

    cout<<" not an Armstrong number ";

    }



 return 0;   

 }




//defining a function defination



//***********************************7.Armstrong number****************

void armstrong(int *num, int *sum){

    int *x,*i,*power;

x = new int;

i = new int;

power = new int;


    *power=1;
    *sum=0;

    while( *num>0) {

        *x=*num%10; //taking last number

        *num=*num/10;//removing last number


            *power=1;

            for(*i=0; *i<3; *i=*i+1){ //cube the last number

            *power=*power*(*x);

            }


        *sum=*sum+*power; //adding the cubed number
    }



    
}

