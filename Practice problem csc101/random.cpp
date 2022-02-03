#include <iostream>

using namespace std;

//function prototype

void initialize_character_array(char[], int); // initialize_character_array( ,100);

int input_character_array(char[]);  // =input_character_array(a);


void copy_1d_2d(char [100], int,char [100][100], int);// copy 2d array column or row in a 1d array

void print_2d(char [100][100], int,int[]);



 
int main (){


 char x[100] , y[100][100] ;

 

 int column[10],row_2d,i;


 cout<<"how many 1d array";
 cin>>row_2d;


 for(i=0; i<row_2d; i=i+1){



    initialize_character_array( x,100);

    column[i]=input_character_array(x);

    copy_1d_2d(x,column[i],y,i);




 }








print_2d(y,row_2d,column);



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

        cout<<"enter strings ";
        cin>>ch;


   for(length=0; length<100; length++){ // length checker of the character

       if (ch[length]=='\0'){

           break;

       }

   }

    return length;
}













//**************************  Print 2d array **********************************
void print_2d(char x[100][100], int row,int column[10]){

    int i,j;

   for(i=0; i<row; i++){

       for(j=0; j<column[i]; j++){
           
           cout<<x[i][j]<<" ";

       }

        cout<<endl<<endl;
   }


}

//**************************  copy_1d_2d **********************************

 void copy_1d_2d(char x[100], int column,char y[100][100],int r){

   int i,j;

    

        for(j=0; j<column; j++){

            y[r][j]=x[j];

        }

   







}
