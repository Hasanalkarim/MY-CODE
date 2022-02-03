#include <iostream>
using namespace std;

//function prototype

void initialize_character_array(char[], int); // // initialize_character_array( ,100);

int input_character_array(char[]);  // =input_character_array( );

void swap_strings(char [] ,int  ,char []  , int  ); //  swap_strings( , , , );

void swap_int(int *,int *); //send 2 variables address and it swap them. copy: swap_int(& ,& );




int main () {

int  num1,num2;

char x[100],y[100];


initialize_character_array( x,100);

initialize_character_array( y,100);


      cout<<"Enter x strings ";
      cin>>x;


      cout<<"Enter for y strings ";
      cin>>y;


      num1=input_character_array(x);

      num2=input_character_array(y);

      swap_strings(x,num1, y, num2);  //function calling  swap array


      cout<<"x:"<<x<<endl;

      cout<<"y:"<<y<<endl;



return 0;
}

//***************************function definition******************************




//***************** initialize **********************

void initialize_character_array(char ch[], int n){

  int i;


   for(i=0; i<n; i++){

        ch[i]='\0';


   }


}



//***************** input_character_array **********************

int input_character_array(char ch[100]){

  int length;


   for(length=0; length<100; length++){ // length checker of the character

       if (ch[length]=='\0'){

           break;

       }

   }

    return length;
}



//**************************14. swap_int *******************

void swap_int(int *x,int *y){


  *x=*x+*y;

  *y=*x-*y; //x with total value - y

  *x=*x-*y; //x with total value - previous y that containx



}




//**************************  swap_strings *****************************

void swap_strings(char a[] ,int  num1,char b[]  , int  num2){

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