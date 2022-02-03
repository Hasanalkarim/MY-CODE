#include <iostream>

using namespace std;

void printFibonacci(int *);  //10. print fibonicc series



int main(){

     int *number1; 

     number1 = new int;

      cout<<endl<<"<< 10. Fibonacci series  >>"<<endl<<endl;

      cout<<"enter number ";
      cin>>*number1;

      printFibonacci(number1);

 return 0;   

 }




//defining a function defination




//************************************10. Fibonacci Series ********************

void printFibonacci(int *num1){

    int *f1, *f2, *f3,*i;

    f1 = new int ;

    f2 = new int ;

    f3 = new int ;

    i = new int;


    *f1=0;

    *f2=1;

    *f3=0;

    
    if (*num1<2 ){

        if(*num1==1){

          cout<<*f1;
        }
        else{
           cout<<"invalid";

        }
       
    }
    else{

    cout<<*f1<<","<<*f2;

    }




    for (*i=2;*i<*num1; *i=*i+1 ) {

    *f3=*f1+*f2;


    cout<<","<<*f3;

    //the real work for fibonacci

    *f1=*f2;

    *f2=*f3;


    }

}



