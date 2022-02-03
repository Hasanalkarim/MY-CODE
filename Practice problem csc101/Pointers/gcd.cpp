#include <iostream>

using namespace std;

//function prototype as pointers

void gcd(int *,int *,int *); // calculaete gcd

int main(){


int *number1, *number2,*number3; 

number1 = new int; // giving them specific container

number2 = new int;

number3 = new int;


  

cout<<"Enter the First Integer:";
cin>>*number1;

cout<<"Enter the Second Integer:";
cin>>*number2;

gcd(number1,number2,number3);

cout<<"GCD of "<<*number1<<" and "<<*number2<<" is "<<*number3;
              



 return 0;   

 }

//defining a function defination******************************************************



// ********************.gcd*************************

void gcd(int *fst,int *scnd, int *third){


int *i;

i = new int;




if(*fst<*scnd){ //chosing small as 'second'

*i=*scnd;

*scnd=*fst;

*fst=*i;

}


for (*i=*scnd; 1<*scnd; *i=*i-1){

      if((*fst%*i==0)&&(*scnd%*i==0)){

          break;
        
      }

}


 *third=*i;

}