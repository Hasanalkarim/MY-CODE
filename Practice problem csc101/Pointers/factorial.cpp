#include <iostream>

using namespace std;

void factorial(int *); //2. n!

int main(){


int *number1;

number1 = new int;




  cout<<endl<<"<< Factorial  >>"<<endl<<endl;

     cout<<"Enter n ";
     cin>>*number1;

    

     cout<<*number1<<"! Factorial is ";

     factorial(number1);

     cout<<*number1;

     

 return 0;   
}




//defining a function defination

// *****************2.factorial******************************

void factorial(int *nth){ // n!

int *fctrl,  *i ;

i=new int;

fctrl = new int;

  *fctrl=1;
for(*i=1; *i<=*nth; *i=*i+1){

  *fctrl=*fctrl*(*i);       //code: i*i*i*...n= n!
              //exmpl: 1*2*3*...7= 7!
}

  *nth=*fctrl;

}