#include <iostream>

using namespace std;

//function prototype


void power(int *,int *,int *); //1. calculate power int=base int=xponent

void factorial(int *, int *); //2. n!
 
int main (){
   


int number1,number2, pwr,fac1,fac2;  




      

      cout<<"Enter x:";
      cin>>number1;

      cout<<"Enter Y:";
      cin>>number2;

     

       
    power(&number1, &number2,&pwr);


      factorial(&number1, &fac1);


      factorial(&number2,&fac2);


     


      fac1=fac1+fac2;

      if(pwr<fac1){

       cout<<number1<<"^"<<number2<<" is smaller than "<<number1<<"!+"<<number2<<"!";

      }
      else{

       cout<<number1<<"^"<<number2<<" is larger than "<<number1<<"!+"<<number2<<"!";


      }
        

return 0;
}

//***************************function definition******************************



//**********************1.Power************************************

void power(int *base, int *expo,int *p){ //b^e: myltiplying b , e times

 int   *i;

 int *power;


 i = new int;

 power = new int;

  *power=1;
      for(*i=0; *i<*expo; *i=*i+1){
                                     // b=2
          *power=*power*(*base);    //p=1*2...p=2*2..p=4*2...p=8*2..p=16*2..e times    
      }

        *p=*power;

}



// *****************2.factorial******************************

void factorial(int *nth, int *re){ // n!

int *fctrl,  *i ;

i=new int;

fctrl = new int;

  *fctrl=1;
for(*i=1; *i<=*nth; *i=*i+1){

  *fctrl=*fctrl*(*i);       //code: i*i*i*...n= n!
              //exmpl: 1*2*3*...7= 7!
}

  *re=*fctrl;

}