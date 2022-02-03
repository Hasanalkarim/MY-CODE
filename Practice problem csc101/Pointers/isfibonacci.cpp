#include <iostream>

using namespace std;


void isFibonacci(int *);   //11. *i-th term of the fibonacci series

int main (){

    int *number1;

    number1= new int;


      cout<<endl<<"<< 11. find number in fibonacci  >>"<<endl<<endl;

      cout<<"enter number ";
      cin>>*number1;


      isFibonacci(number1);


      
    //printing output

    if(*number1>-3){

            if(*number1==-2){
                   cout<<" second and thirs term in the  fibonacci sequence ";

            }
            else if(*number1==-1){
                     cout<<" first term in the  fibonacci sequence ";
            
            }
            else{

                cout<<*number1+2<<"th terms of the fibonacci sequence "; //*i+2 cause we skip first two number we are readding them for counting
            }

    

    }
    else {
           cout<<" dose not xist in the  fibonacci sequence ";
    
    }













return 0;
}





//************************************11. find number in fibonacci ********************

void isFibonacci(int *num1){

    int *f1, *f2, *f3,*i, *fibonacci_chk;


     f1 = new int;

     f2 = new int;

     f3 = new int;

     i = new int;

     fibonacci_chk = new int;






    *f1=0;

    *f2=1;

    *f3=0;


    *fibonacci_chk=0; //assuming its not fibonacci

    for (*i=1;*i<=*num1; *i=*i+1 ) {

    *f3=*f1+*f2;


        if (*num1==*f3) {// checking is it in the fibonacci sequence?

        *fibonacci_chk=1;

            break;
        }



    //the real work for fibonacci

    *f1=*f2;

    *f2=*f3;


    }

    if(*num1==0){         

      *num1=-1;           // -1 means 0

    }
    else if(*num1==1){

           *num1=-2;        //-2 means 1

    }

    else if(*fibonacci_chk==1){
        
           *num1=*i;

    }
    else{

        *num1=-4;         //-4 means dose not exist  condition shold be (n>-3)

    }

    



}