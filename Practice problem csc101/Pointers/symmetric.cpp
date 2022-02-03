#include <iostream>

using namespace std;

void symmetric(int *); //8.

int main(){

    int *number1,*userinput;

    number1 = new int;

    userinput = new int;


   
    cout<<endl<<"<< 8. symmetric  >>"<<endl<<endl;

    cout<<"Enter number ";
    cin>>*number1;

    *userinput=*number1;


    symmetric(number1);



    //printing output


    if(*number1==*userinput){

        cout<<" symmetric ";

    }
    else{

        cout<<" Not symmetric ";
    }



 return 0;   

 }




//defining a function defination



//*********************************8. symmetric ***********************
void symmetric(int *num1){

    int *reverse;

    reverse = new int;

    *reverse=0;

    while (*num1>0) {

        *reverse=(*reverse)*10;      //to add zero as last digit

        *reverse=*reverse+*num1%10;  //taking the last *num1ber and adding *reverse

        *num1=*num1/10;              //removing the last *num1ber



    }

    *num1=*reverse;

}
