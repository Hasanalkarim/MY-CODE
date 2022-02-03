#include <iostream>

using namespace std;

//function prototype

void input_2d(float[10][10], int,int);

void print_1d_row(float [], int);

void print_2d(float [10][10], int,int);

void min_2d_row(float[10][10],int ,int,float[]); //find minimum value in 2d rowes and put it into y array
 


int main (){

int row, column;

float x[10][10],y[10];


cout<<"how many row ";
cin>>row;

cout<<"how many column ";
cin>>column;


cout<<"************** input array x *****************"<<endl;

input_2d(x ,row,column);


min_2d_row(x,row, column,y); //main funtion



 //printing output

      cout<<"************** print array x *****************";

      cout<<endl;

      print_2d(x ,row,column); //function calling



                   //************ print array y ***************

      cout<<endl<<"************** minimum values in rowes *****************";

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


//************************** min_2d_row *****************************

void min_2d_row(float x[10][10], int row,int column , float y[10]){


  int i,j;

   for(i=0; i<row; i++){

       y[i]=x[i][0]; //saveing every first row value 

       for(j=0; j<column; j++){
           
                if(y[i]>x[i][j]){ 
                
                 y[i]=x[i][j];   // new min value founnd saving it on y array     

            }        

       }

   }


}
