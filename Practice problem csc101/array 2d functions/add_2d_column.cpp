#include <iostream>

using namespace std;

//function prototype

void print_1d(float [], int);

void input_2d(float[10][10], int,int);

void print_2d(float [10][10], int,int);

void add_2d_column(float[10][10],int ,int,float[]); //add 2d column and put it into y array
 


int main (){

int row, column;

float x[10][10],y[10];


cout<<"how many row ";
cin>>row;

cout<<"how many column ";
cin>>column;


cout<<"************** input array x *****************"<<endl;

input_2d(x ,row,column);


add_2d_column(x,row, column,y);



 //printing output

      cout<<"************** print array x *****************";

      cout<<endl;

      print_2d(x ,row,column); //function calling



      cout<<endl<<"************** print array y *****************";

      cout<<endl;


      print_1d(y ,column);//function calling

       

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



//**************************  Print 1d array ******************
void print_1d(float a[], int number){

int i;

   for(i=0; i<number; i++){

       cout<<a[i]<<" ";

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


//************************** add_2d_column *****************************

void add_2d_column(float x[10][10], int row,int column , float y[10]){


  int i,j;

   for(i=0; i<column; i++){

       y[i]=0;

       for(j=0; j<row; j++){
           
         y[i]=y[i]+x[j][i];

       }

   }


}
