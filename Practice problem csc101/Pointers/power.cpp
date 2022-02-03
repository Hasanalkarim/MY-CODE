#include <iostream>

using namespace std;

void power(float *,int *);

int main(){

int *number2;

float *number1;

number1 = new float;


number2 = new int;




      cout<<endl<<"<< Power  >>"<<endl<<endl;

      cout<<"Enter base ";
      cin>>*number1;

      cout<<"Enter exponent ";
      cin>>*number2;

      power(number1, number2);
      
      cout<<"power is "<<*number1<<endl;



 return 0;   
}




//defining a function defination


//**********************1.Power************************************

void power(float *base, int *expo){ //b^e: myltiplying b , e times

 int   *i;

 float *power;


 i = new int;

 power = new float;

  *power=1;
      for(*i=0; *i<*expo; *i=*i+1){
                                     // b=2
          *power=*power*(*base);    //p=1*2...p=2*2..p=4*2...p=8*2..p=16*2..e times    
      }

        *base=*power;

}

