#include <iostream>

using namespace std;

//function prototype

void print_1d_row(float [], int);

void input_2d(float[10][10], int,int);

void print_2d(float [10][10], int,int);

void add_2d_row(float[10][10],int ,int,float[]); //add 2d row and put it into y array
 


int main (){

int row, column;

float x[10][10],y[10];


cout<<"how many row ";
cin>>row;

cout<<"how many column ";
cin>>column;


cout<<"************** input array x *****************"<<endl;

input_2d(x ,row,column);


add_2d_row(x,row, column,y); //main funtion



 //printing output

      cout<<"************** print array x *****************";

      cout<<endl;

      print_2d(x ,row,column); //function calling



                   //************ print array y ***************

      cout<<endl<<"************** totall *****************";

      cout<<endl;


      print_1d_row(y ,row);//function calling

       

return 0;
}

//***************************function definition******************************




//**************************  input 2d array******************
void input_2d(float x[10][10], int row,int column){

   int i,j;

   for(i=0; i<row; i++){

       for(j=0; j<column; j++){
           
           cout<<"["<<i<<"]"<<"["<<j<<"]=";

           cin>>x[i][j];

       }

       cout<<endl;
   }
}



//**************************  Print 1d row array ******************
void print_1d_row(float a[], int number){

int i;

   for(i=0; i<number; i++){

       cout<<a[i]<<endl<<endl;

   }

}


//**************************  Print 2d array **********************************
void print_2d(float x[10][10], int row,int column){

    int i,j;

   for(i=0; i<row; i++){

       for(j=0; j<column; j++){
           
           cout<<x[i][j]<<" ";

       }

        cout<<endl<<endl;
   }


}


//************************** add_2d_row *****************************

void add_2d_row(float x[10][10], int row,int column , float y[10]){


  int i,j;

   for(i=0; i<row; i++){

       y[i]=0;

       for(j=0; j<column; j++){
           
         y[i]=y[i]+x[i][j];

       }

   }


}
