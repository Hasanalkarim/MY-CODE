#include <iostream>

using namespace std;

void perfect(int *, int *); //6.

int main(){

int  *number1, *number2;


number1= new int;


number2 = new int;


      cout<<endl<<"<< 6. perfect number  >>"<<endl<<endl;

      cout<<"enter number ";
      cin>>*number1;

      perfect(number1,number2);





    //printing output

    if (*number1>0) {
            if(*number2==*number1) {

            cout<<" perfect ";

            }

            else {

            cout<<" not perfect  ";


            }

    }

    else {

        cout<<*number1<<" is invalid please inter a positive non zero number ";

    }













      

 return 0;   

 }




//defining a function defination




//******************************6.Perfect number*********************************

void perfect(int *num1, int *sum){


    int *i; // variable declaration

    i = new int;



    *sum=0;
    for (*i=1 ; *i<*num1; *i=*i+1){ //checking all number 1 to n

        if (*num1%*i==0){    //checking the divisibility

            *sum=*sum+*i;  //adding the divisible one into *sum

        }


    }




}

