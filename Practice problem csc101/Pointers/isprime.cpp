#include <iostream>

using namespace std;

void isprime(int *);

int main(){

int *number1;

number1 = new int;

*number1=0;


    cout<<endl<<"<< 5. prime >>"<<endl<<endl;
     
     cout<<"Enter a number ";
     cin>>*number1;


     cout<<endl<<*number1;

     //prime(*number1);

     isprime(number1);

     if(*number1==1){

         cout<<" is prime";
     }
     else{

          cout<<" Not prime";
     }







 return 0;   
}



//**************************5.Prime***************************


void isprime(int *n){


int *i,*prime_chk; // variable declaretion

i = new int;

prime_chk= new int;





*prime_chk=1;//assuming x is prime


for (*i=2 ; *i<*n; *i=*i+1){ //checking all numbet 1 to n prime or not

    if (*n%*i==0){

        *prime_chk=0;

        break;
    }


}


   *n= *prime_chk; 
}

