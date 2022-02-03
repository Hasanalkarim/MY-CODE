#include <iostream>

using namespace std;

//function prototype

void initialize_character_array(char[], int); // initialize_character_array( ,100);

int input_character_array(char[]);  // =input_character_array(a);

int chr_2_int(char);

char int_2_chr(int);

void print_1d(char [], int);

void swap_strings(char [] ,int  ,char []  , int  ); //  swap_strings( , , , );

void swap_int(int *,int *); //send 2 variables address and it swap them


int add_string(char [],int ,char [],int ,char []);





int main(){

 int lenth_a,lenth_b;
 
 char a[100],b[100],c[100];

initialize_character_array(a,100);
initialize_character_array(b,100);
initialize_character_array(c,100);

cout<<"Enter first string:";
cin>>a;

cout<<"Enter Second string:";
cin>>b;



// knowing length of two strings

lenth_a=input_character_array(a);
lenth_b=input_character_array(b);



lenth_a=add_string(a, lenth_a, b, lenth_b, c);



//printing outpur

cout<<"*********************first********************";

cout<<endl<<a;


cout<<endl<<"*********************second*******************";

cout<<endl<<b;

cout<<endl<<endl<<"Adding......"<<endl<<endl;



 //printing output

  cout<<c;

  //print_1d(c,lenth_a);





 return 0;   

 }











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


//********************* chr_2_int **************************

int chr_2_int(char ch){

    int i;

    i=ch-'0';
        
    return i;

}



//********************* int_2_chr **************************

char int_2_chr(int i){

    char ch;

    ch=i+'0';

    return ch;

    
}



//**************************14. swap_int *******************

void swap_int(int *x,int *y){


  *x=*x+*y;

  *y=*x-*y; //x with total value - y

  *x=*x-*y; //x with total value - previous y that contain x



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






//************************** array print ******************
void print_1d(char a[], int number){

int i;

   for(i=0; i<number; i++){

       cout<<a[i]<<" ";

   }


}












//********************* add_string **************************

int add_string(char a[],int lenth_a,char b[],int lenth_b,char c[]){

  int i,j,cary,s;



  if(lenth_a<lenth_b){ // making lenth_a larger always

    swap_strings( a,lenth_a , b,lenth_b);

    swap_int(&lenth_a,&lenth_b);
    
  } 

  

  j=(lenth_a-1) - (lenth_b-1);
  j=(lenth_a-1)- j;

  
  

  cary=0;

  for(i=lenth_a-1; 0<=i; i=i-1){

      if(j<0){

         s=chr_2_int(a[i])+cary;     
      }
      else{

        s=chr_2_int(a[i])+chr_2_int(b[j])+cary;       
      }
    
      cary=s/10;   // getting the first number 


      s=s%10;       // getting the last number 


      c[i]=int_2_chr(s);   //convert to caracter

      j=j-1; 
}
       

  if(cary==1){ //will creat extra space for cary 1
  
         
    for(i=lenth_a; 0<i; i=i-1){

      c[i]=c[i-1];

    }

    c[0]=int_2_chr(cary); 

    lenth_a=lenth_a+1; 

  }
  
  return lenth_a;

}


