#include <iostream>

using namespace std;

void int2array(int *,int []); //user will give integerss(int) will make it array(int [])

void print_1d(int [], int *);

int main(){


    int *number1, x[10];  

    number1 = new int;
  
      cout<<endl<<"<< 9. Number Separation  >>"<<endl<<endl;

      cout<<"enter number ";
      cin>>*number1;

      int2array(number1,x); //sending empty array x


      print_1d(x,number1);



 return 0;   

 }




//defining a function defination



//************************** array print ******************
void print_1d(int a[], int *number){


  int i;



  for (i=0;i<*number;i++){

      cout<<a[i]<<endl;

  }
  

}




//******************************* int to array ***************************

void int2array(int *num1,int x[]){

 int i ,*temp;



 temp= new int;


 *temp=0;

 while (*num1>0) { //*****Making the integers revers***

       i=*num1%10;  //taking the last number and putting it in "i"

       *num1=*num1/10;//removing the last number

       *temp=((*temp)*10)+i; //adding all number in reverse
 }



 *num1=*temp; //seaveing the reverse number in *num1




 for(i=0; 0<*num1; i++){ //***talking number in array in reverse***

    *temp=*num1%10;  //taking the last number

    x[i]=*temp;   //adding the last number in x array

    *num1=*num1/10; //removing the last number 

 }

   
     *num1=i;


}