#include <iostream>
using namespace std;

//function prototype

void input_1d(int [], int);

void print_1d(int [], int);

void swap_array(int [] ,int  ,int []  , int  ); //  swap_array( , , , );

void swap_int(int *,int *); //send 2 variables address and it swap them. copy: swap_int(& ,& );




int main () {

int x[10],num1,y[10], num2;


      cout<<"how many integers for x array ";
      cin>>num1;

      cout<<"************** input array x *****************"<<endl;

      input_1d(x,num1); //function calling


      cout<<"how many integers for y array";
      cin>>num2;



      cout<<"************** input array y *****************"<<endl;

      input_1d(y,num2); //function calling



      

      swap_array(x,num1, y, num2);  //function calling  swap array




      cout<<"************** print array x *****************";

       cout<<endl;

      print_1d(x,num2); //function calling



      cout<<endl<<"************** print array y *****************";

      cout<<endl;


      print_1d(y,num1);//function calling

       

return 0;
}

//***************************function definition******************************





//************************** array input **************
void input_1d(int a[], int number){

 int i;

   for(i=0; i<number; i++){

       cout<<"["<<i<<"]=";

       cin>>a[i];
   }
}




//************************** array print ******************
void print_1d(int a[], int number){

int i;

   for(i=0; i<number; i++){

       cout<<a[i]<<" ";

   }


}




//**************************14. swap_int *******************

void swap_int(int *x,int *y){


  *x=*x+*y;

  *y=*x-*y; //x with total value - y

  *x=*x-*y; //x with total value - previous y that containx



}













//**************************  swap_array*****************************

void swap_array(int a[] ,int  num1,int b[]  , int  num2){

  int i;

  if(num1<num2){  // making num1 larger always AND it will not effect in main

    swap_int(&num1,&num2);

  }


  for(i=0; i<num1; i=i+1){

      if(a[i]!=b[i]){

      a[i]=a[i]+b[i];

      b[i]=a[i]-b[i];

      a[i]=a[i]-b[i];
      }
      
  }



}